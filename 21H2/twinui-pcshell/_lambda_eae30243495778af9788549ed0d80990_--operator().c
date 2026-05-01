/*
 * XREFs of _lambda_eae30243495778af9788549ed0d80990_::operator() @ 0x180087088
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eae30243495778af9788549ed0d80990___::Run @ 0x180087060 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_eae30243495778af9788549ed0d80990___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_eae30243495778af9788549ed0d80990_::operator()(_DWORD **a1)
{
  int v2; // edx
  _QWORD **v3; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 36) + 200LL))(*((_QWORD *)*a1 + 36), &SRWLock);
  v2 = *a1[1];
  if ( (*a1)[67] == v2 )
    goto LABEL_7;
  (*a1)[67] = v2;
  v3 = (_QWORD **)*a1;
  v4 = (*a1)[67];
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = 2LL;
        goto LABEL_6;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x951,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000FFFFLL,
        v9);
    }
    v6 = 1LL;
  }
  else
  {
    v6 = 0LL;
  }
LABEL_6:
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v3[13] + 96LL))(v3[13], v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x954,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9);
    JUMPOUT(0x1801A3716LL);
  }
LABEL_7:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
