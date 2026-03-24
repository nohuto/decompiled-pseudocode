/*
 * XREFs of KiSwapContext @ 0x140405AF0
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C5AAC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C878 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E508 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
