/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x14024F7D0
 * Callers:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x1402C83E0 (PsGetThreadProperty.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x140315880 (IopQueueIrpToFileObject.c)
 *     KiAcquireSpinLockInstrumented @ 0x140457E30 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v2;
}
