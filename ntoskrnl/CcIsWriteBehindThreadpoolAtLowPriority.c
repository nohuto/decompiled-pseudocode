/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x140219E24
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140215AE0 (CcPostWorkQueueRegular.c)
 *     CcShouldWorkOnThisQueue @ 0x140215CEC (CcShouldWorkOnThisQueue.c)
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     CcApplyLowIoPriorityToThread @ 0x140219DB8 (CcApplyLowIoPriorityToThread.c)
 *     CcComputeNextScanTime @ 0x1403A4028 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140533834 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && !CcEnablePerVolumeLazyWriter
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
