/*
 * XREFs of KeAcquireSpinLockForDpc @ 0x14056F080
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL v1; // bl

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    return KeAcquireSpinLockRaiseToDpc(SpinLock);
  v1 = 2;
  KxAcquireSpinLock(SpinLock);
  return v1;
}
