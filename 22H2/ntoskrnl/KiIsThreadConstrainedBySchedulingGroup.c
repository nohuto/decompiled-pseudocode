/*
 * XREFs of KiIsThreadConstrainedBySchedulingGroup @ 0x140308F6C
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242890 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243890 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B2FD0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x140308EB0 (KiIsThreadRankNonZero.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadConstrainedBySchedulingGroup(__int64 a1)
{
  return *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0;
}
