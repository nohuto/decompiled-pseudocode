/*
 * XREFs of ?SetIsDismissed@UAPViewWrapper@@UEAAJE@Z @ 0x18033A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetIsDismissed(UAPViewWrapper *this, char a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this - 46) + 280LL);
  AcquireSRWLockExclusive(v4);
  v6 = *((_QWORD *)this - 43);
  if ( v6 )
  {
    if ( a2 != *((_BYTE *)this + 28) )
    {
      *((_BYTE *)this + 28) = a2;
      LOBYTE(v5) = a2 != 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this - 46) + 504LL) + 144LL))(
        *(_QWORD *)(*((_QWORD *)this - 46) + 504LL),
        v6,
        v5);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
