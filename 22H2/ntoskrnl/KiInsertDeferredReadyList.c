/*
 * XREFs of KiInsertDeferredReadyList @ 0x14035BAA0
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14035BA40 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037D9BC (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1405253EC (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x140525A3C (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402480F0 (KiEnterDeferredReadyState.c)
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 result; // rax
  __int64 *v4; // r8

  KiEnterDeferredReadyState(a2);
  result = *v2;
  v4 += 27;
  *v4 = *v2;
  *v2 = (__int64)v4;
  return result;
}
