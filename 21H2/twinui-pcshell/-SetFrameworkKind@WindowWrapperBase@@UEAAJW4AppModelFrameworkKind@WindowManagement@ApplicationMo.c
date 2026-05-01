/*
 * XREFs of ?SetFrameworkKind@WindowWrapperBase@@UEAAJW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800841E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetFrameworkKind(__int64 a1, int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 272) + 200LL))(*(_QWORD *)(a1 + 272), &SRWLock);
  *(_DWORD *)(a1 + 460) = a2;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
