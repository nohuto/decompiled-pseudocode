/*
 * XREFs of ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x180351300
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180023398 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowWrapperBase::put_VisibilityRevoked(WindowWrapperBase *this, char a2)
{
  int v4; // eax
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &SRWLock);
  v4 = *((_DWORD *)this + 41);
  if ( (v4 & 0x18) != 0 )
  {
    if ( a2 )
      v5 = v4 & 0xFFFFFFDF;
    else
      v5 = v4 | 0x20;
    *((_DWORD *)this + 41) = v5;
    WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)((char *)this - 24));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2135LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)SRWLock;
  }
}
