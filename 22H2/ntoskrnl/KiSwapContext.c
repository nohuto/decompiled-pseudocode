/*
 * XREFs of KiSwapContext @ 0x140427C20
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
