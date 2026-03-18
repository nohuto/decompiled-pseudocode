/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x14029BAF4
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140298594 (CcPostWorkQueueRegular.c)
 *     CcShouldWorkOnThisQueue @ 0x1402987A0 (CcShouldWorkOnThisQueue.c)
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x14029B438 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x14029B740 (CcWriteBehindPreProcess.c)
 *     CcApplyLowIoPriorityToThread @ 0x14029BA88 (CcApplyLowIoPriorityToThread.c)
 *     CcComputeNextScanTime @ 0x1403A8E38 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140535D04 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && !CcEnablePerVolumeLazyWriter
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
