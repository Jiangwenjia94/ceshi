
// DocReader.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDocReaderApp: 
// �йش����ʵ�֣������ DocReader.cpp
//

class CDocReaderApp : public CWinApp
{
public:
	CDocReaderApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDocReaderApp theApp;