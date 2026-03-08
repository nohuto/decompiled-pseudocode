/*
 * XREFs of _tlgKeywordOn @ 0x1C0014A7C
 * Callers:
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00081A0 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0014B80 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z @ 0x1C0017860 (-VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C0034940 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 *     LogPageFaultInformation @ 0x1C0037B4C (LogPageFaultInformation.c)
 *     VidSchiResetEngine @ 0x1C003B96C (VidSchiResetEngine.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0045608 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiResetHwEngine @ 0x1C00460A0 (VidSchiResetHwEngine.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C004C6F4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AD690 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1C00AD88C (-LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00B534C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     LookUpTableFlushComplete @ 0x1C00C34FC (LookUpTableFlushComplete.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00F4134 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogBucket@VIDMM_PURGE_TELEMETRY@@AEAAXPEBUVIDMM_PURGE_TELEMETRY_BUCKET@1@_K@Z @ 0x1C00F429C (-LogBucket@VIDMM_PURGE_TELEMETRY@@AEAAXPEBUVIDMM_PURGE_TELEMETRY_BUCKET@1@_K@Z.c)
 *     ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00F4494 (-LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00F4B94 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00F4CC0 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F510C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00F5250 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F546C (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     VidSchRestartAdapter @ 0x1C01086B0 (VidSchRestartAdapter.c)
 *     VidSchiRecoverFromTDR @ 0x1C010A494 (VidSchiRecoverFromTDR.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
