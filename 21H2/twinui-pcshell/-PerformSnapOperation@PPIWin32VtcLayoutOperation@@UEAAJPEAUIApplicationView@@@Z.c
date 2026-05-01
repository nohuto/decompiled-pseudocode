/*
 * XREFs of ?PerformSnapOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D87A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801B7670 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::PerformSnapOperation(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  char *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this - 176;
  *(_QWORD *)v8 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176);
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v8, 1);
  if ( (*(unsigned __int8 (__fastcall **)(char *, struct IApplicationView *))(*(_QWORD *)v4 + 168LL))(v4, a2)
    && (v5 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)this + 88LL))(this), v6 = v5, v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)v8);
  return v6;
}
