/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x14083F5FC
 * Callers:
 *     WdipSemCleanStart @ 0x14083F570 (WdipSemCleanStart.c)
 * Callees:
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     WdipSemSqmInit @ 0x14083F680 (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    WdipTimeoutTimer = ExAllocateTimer((__int64)WdipTimeoutTimerRoutine, 0LL, 8u);
    if ( WdipTimeoutTimer )
    {
      WdipTimeoutTimerParameters = 0LL;
      qword_140C16688 = -1LL;
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
