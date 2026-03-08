/*
 * XREFs of KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC
 * Callers:
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 *     KiBeginThreadAccountingPeriod @ 0x140228310 (KiBeginThreadAccountingPeriod.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140261010 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadConstrainedBySchedulingGroup(__int64 a1)
{
  return *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0;
}
