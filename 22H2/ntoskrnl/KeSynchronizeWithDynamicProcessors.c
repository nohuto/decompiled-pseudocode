/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1407D620C
 * Callers:
 *     ExpGetNextProcessThread @ 0x140742D48 (ExpGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x14094404C (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00880 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
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
