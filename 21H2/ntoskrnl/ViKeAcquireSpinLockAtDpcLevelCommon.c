/*
 * XREFs of ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DCEF0
 * Callers:
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x1409DB990 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1409DB9E0 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di

  ++dword_140C2A8A8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 156LL);
  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  if ( (MmVerifierData & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
      VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, BugCheckParameter3, 0LL);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockAtDpcLevel)(BugCheckParameter3);
}
