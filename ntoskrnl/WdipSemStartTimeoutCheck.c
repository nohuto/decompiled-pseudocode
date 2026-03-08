/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x1408319B4
 * Callers:
 *     WdipSemCleanStart @ 0x1408318F0 (WdipSemCleanStart.c)
 * Callees:
 *     ExAllocateTimer @ 0x140203BE0 (ExAllocateTimer.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     WdipSemSqmInit @ 0x140831A38 (WdipSemSqmInit.c)
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
      qword_140C322A8 = -1LL;
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
