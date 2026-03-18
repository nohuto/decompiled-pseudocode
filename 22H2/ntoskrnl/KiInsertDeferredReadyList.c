/*
 * XREFs of KiInsertDeferredReadyList @ 0x1402B9C24
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242580 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243A20 (KiScheduleThreadToRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x1402479E0 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD220 (KiPrepareReadyThreadForRescheduling.c)
 *     KiNormalPriorityReadyScan @ 0x140306CC0 (KiNormalPriorityReadyScan.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14030884C (KiMoveScbThreadsToNewReadylist.c)
 *     KiFlushReadyLists @ 0x14057DE44 (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402B9160 (KiEnterDeferredReadyState.c)
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
