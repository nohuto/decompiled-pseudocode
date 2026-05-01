/*
 * XREFs of ?put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803443F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::put_WindowResizingState(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v4);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 504LL) + 216LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 504LL),
      v5,
      a2);
    v6 = 0;
  }
  else
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x682,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
