/*
 * XREFs of ?FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1800D82C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800D92D0 (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801B7670 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::FinalizeLayout(PPIWin32VtcLayoutOperation *this)
{
  char *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (char *)this - 176;
  *(_QWORD *)v6 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  v2 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 48LL))(v1, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v1);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 213LL;
  }
  else
  {
    v4 = 211LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)v6);
  return v3;
}
