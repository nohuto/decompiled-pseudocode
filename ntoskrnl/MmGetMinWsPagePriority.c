/*
 * XREFs of MmGetMinWsPagePriority @ 0x140242D60
 * Callers:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1402AE1AC (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14040B024 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14045EAC6 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14045EB78 (EtwTraceAutoBoostSetFloor.c)
 *     KiFlushSharedReadyQueueReadyLists @ 0x14057BA1C (KiFlushSharedReadyQueueReadyLists.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x140729824 (MiComputeProcessUserVa.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x140788AC4 (PspUpdateJobEffectivePriorityLimits.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
