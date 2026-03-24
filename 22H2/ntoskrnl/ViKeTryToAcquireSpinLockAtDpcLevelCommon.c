/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DC3E0
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x1409DB870 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x1409DB8D0 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C659C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1409D751C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di

  ++dword_140C2A8E8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 156LL);
  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  if ( (MmVerifierData & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
      VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, BugCheckParameter3, 0LL);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeTryToAcquireSpinLockAtDpcLevel)(BugCheckParameter3);
}
