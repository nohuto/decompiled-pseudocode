/*
 * XREFs of KiInsertDeferredReadyList @ 0x140343778
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140254490 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140258C90 (KiScheduleThreadToRescheduleContext.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1402AB444 (KiMoveScbThreadsToNewReadylist.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402AE590 (KiPrepareReadyThreadForRescheduling.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiFlushReadyLists @ 0x14057B934 (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x140341110 (KiEnterDeferredReadyState.c)
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
