#pragma once
#include "afxwin.h"


// CCoderSet dialog

class CCoderSet : public CDialog
{
	DECLARE_DYNAMIC(CCoderSet)

public:
	CCoderSet(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCoderSet();

// Dialog Data
	enum { IDD = IDD_DLG_CODER_SET };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_EncoderParam;
};
