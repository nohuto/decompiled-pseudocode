/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409DB768
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1409DB720 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x1409DB7E0 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  ++dword_140C2A8A8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 156LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockForDpc)(a1, a3);
}
