
// DropFileDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CDropFileDlg �Ի���
class CDropFileDlg : public CDialogEx
{
// ����
public:
	CDropFileDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DROPFILE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
//	CString content;
	CEdit pathControl;
	afx_msg void OnSize(UINT nType, int cx, int cy);


	CButton *pathB;
	CButton *filenameB;

};
