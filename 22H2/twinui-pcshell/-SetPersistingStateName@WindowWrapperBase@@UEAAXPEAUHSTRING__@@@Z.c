/*
 * XREFs of ?SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x18034F890
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18007829C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::SetPersistingStateName(WindowWrapperBase *this, HSTRING a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &SRWLock);
  v3 = Windows::Internal::String::Initialize((HSTRING *)this + 69, &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2109LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
