// CSocketcliDlg.h : header file
//
#include <io.h>
#include <fcntl.h>
#if !defined(AFX_CSOCKETCLIDLG_H__478F28EE_A14E_47D0_9D6F_1AF712CC6B1D__INCLUDED_)
#define AFX_CSOCKETCLIDLG_H__478F28EE_A14E_47D0_9D6F_1AF712CC6B1D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCSocketcliDlg dialog

class CCSocketcliDlg : public CDialog
{
// Construction
public:
	CCSocketcliDlg(CWnd* pParent = NULL);	// standard constructor
	~CCSocketcliDlg();
// Dialog Data
	//{{AFX_DATA(CCSocketcliDlg)
	enum { IDD = IDD_CSOCKETCLI_DIALOG };
	CButton	m_disconnect;
	CButton	m_connect;
	CEdit	m_edit2;
	CListCtrl	m_list;
	CButton	m_button1;
	CEdit	m_edit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCSocketcliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCSocketcliDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnDisconnect();
	afx_msg void OnFresh();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	CString msg;
	void GetTime();
	CString strTime;
	CString str;
	void Getlocalip();
	SOCKET clisock;
	sockaddr_in cli;
	int count,ee;
	CString clitag;//用来控制房间
	afx_msg void OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult);
	CEdit m_edit3;
	CEdit m_edit4;
	//void InitConsoleWindow(void);
	CListCtrl m_user;
	CListCtrl m_room;
	CButton m_buttoncreat;
	CButton m_buttonin;
	afx_msg void OnClickedCreat();
	afx_msg void OnClickedIn();
};
UINT thread(LPVOID);
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CSOCKETCLIDLG_H__478F28EE_A14E_47D0_9D6F_1AF712CC6B1D__INCLUDED_)
