/*
 * XREFs of ?VisibilityChanged@WindowWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180081B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 272) + 200LL))(*(_QWORD *)(a1 + 272), &SRWLock);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 192LL))(a1 - 16, a2, a3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
