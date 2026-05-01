/*
 * XREFs of ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x180023120
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1800234F4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::ApproveWinRtActivation(WindowWrapperBase *this)
{
  WindowWrapperBase *v1; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &SRWLock);
  *((_BYTE *)v1 + 564) = 0;
  v1 = (WindowWrapperBase *)((char *)v1 - 16);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 200LL))(v1);
  WindowWrapperBase::CommitImportanceVector(v1);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 224LL))(v1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
