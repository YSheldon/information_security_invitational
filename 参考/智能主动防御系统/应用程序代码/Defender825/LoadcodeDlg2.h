#if !defined(AFX_LOADCODEDLG_H__A2DE9444_BDC4_449B_A4D6_B532AC2EBB0F__INCLUDED_)
#define AFX_LOADCODEDLG_H__A2DE9444_BDC4_449B_A4D6_B532AC2EBB0F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoadcodeDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLoadcodeDlg dialog

class CLoadcodeDlg : public CDialog
{
// Construction
public:
	CLoadcodeDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLoadcodeDlg)
	enum { IDD = IDD_LOADCODE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoadcodeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLoadcodeDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOADCODEDLG_H__A2DE9444_BDC4_449B_A4D6_B532AC2EBB0F__INCLUDED_)
