
// My.h : My ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.
#define WM_MAX (WM_USER+1)


// CMyApp:
// �� Ŭ������ ������ ���ؼ��� My.cpp�� �����Ͻʽÿ�.
//

class CMyApp : public CWinApp
{
public:
	CMyApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyApp theApp;
