/*
 * XREFs of ?CreateSanitizedLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1800D7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801B7670 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::CreateSanitizedLayout(PPIWin32VtcLayoutOperation *this)
{
  char *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 176;
  *(_QWORD *)v7 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v7, 1);
  v3 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 139LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 7LL);
  *((_DWORD *)this - 18) = 9;
  v3 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 192LL))(v2, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 146LL;
    goto LABEL_5;
  }
LABEL_6:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)v7);
  return v4;
}
