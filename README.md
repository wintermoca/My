# My
10개의 정수값의 최솟값을 구하는 멀티쓰레드 응용 프로그램

```
UINT MyThread(LPVOID pParam);
UINT MyThread(LPVOID pParam)
{
  	SData * pData = (SData*)pParam;
	pData->min = pData->array[0];
	;   for (int i = 1 ; i < 10; i++) {

		if (pData->array[i] < pData->min)
			pData->min = pData->array[i];
}
        
  	::PostMessage(pData->NotifyWindow, WM_MAX, 0, 0);
	return 0;
}

void CMyView::OnFindmax()
{
	data.array[0]=0;
	data.array[1]=1;
	data.array[2]=2;
	data.array[3]=3;
	data.array[4]=4;
	data.array[5]=5;
	data.array[6]=6;
	data.array[7]=7;
	data.array[8]=8;
	data.array[9]=9;
	data.min=0;
	data.NotifyWindow = m_hWnd;
	AfxBeginThread(MyThread, &data);
}
LRESULT CMyView::OnMaxFound(WPARAM wParam, LPARAM lParam)
{
	CMyDoc *pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString msg;
	msg.Format(L"Min of the array = %d", data.min);
	
	pDoc->str = msg;
	TerminateThread(Thread, 0);
	Invalidate();
	return 0L;
}
```
