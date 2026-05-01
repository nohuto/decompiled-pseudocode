/*
 * XREFs of ?get_VisibilityRevoked@WindowWrapperBase@@UEAAJPEAE@Z @ 0x180351210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_VisibilityRevoked(WindowWrapperBase *this, bool *a2)
{
  int v4; // eax
  bool v5; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  v4 = *((_DWORD *)this + 41);
  v5 = (v4 & 0x18) != 0 && (v4 & 0x20) == 0;
  *a2 = v5;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
