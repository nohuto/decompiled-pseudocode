/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140250E00
 * Callers:
 *     IopQueueIrpToFileObject @ 0x14022E440 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF700 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AF910 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     KiCallInterruptServiceRoutine @ 0x140324770 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x140332350 (PsGetThreadProperty.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045FDD0 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
