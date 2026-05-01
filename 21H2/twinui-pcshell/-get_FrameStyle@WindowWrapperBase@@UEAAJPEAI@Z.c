/*
 * XREFs of ?get_FrameStyle@WindowWrapperBase@@UEAAJPEAI@Z @ 0x180350680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_FrameStyle(WindowWrapperBase *this, unsigned int *a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  *a2 = *((_DWORD *)this + 118);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
