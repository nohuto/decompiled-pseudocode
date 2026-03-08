/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x140773F48
 * Callers:
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     ExpGetNextProcessThread @ 0x140773EF4 (ExpGetNextProcessThread.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x14094102C (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409FD980 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      ExReleaseFastMutex(&KiDynamicProcessorLock);
    }
  }
}
