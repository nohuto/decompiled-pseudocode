/*
 * XREFs of KeInitializeAffinityEx2 @ 0x140237600
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx2(__int64 a1, unsigned __int16 a2)
{
  *(_WORD *)(a1 + 2) = a2;
  *(_WORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = 0;
  return memset((void *)(a1 + 8), 0, 8LL * a2);
}
