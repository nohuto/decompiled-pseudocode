/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1409DAD20
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1409DAD00 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140515A3C (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B1C (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
