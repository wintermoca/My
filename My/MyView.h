
// MyView.h : CMyView Ŭ������ �������̽�
//

#pragma once

struct SData
{
  	int array[10];
	int min;
	int max;
	HWND NotifyWindow;
};
class CMyView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMyView();
	DECLARE_DYNCREATE(CMyView)

// Ư���Դϴ�.
public:
	CMyDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CMyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFindmax();
	SData data;
	CWinThread* Thread;
	LRESULT OnMaxFound(WPARAM wParam, LPARAM lParam);
};

#ifndef _DEBUG  // MyView.cpp�� ����� ����
inline CMyDoc* CMyView::GetDocument() const
   { return reinterpret_cast<CMyDoc*>(m_pDocument); }
#endif

