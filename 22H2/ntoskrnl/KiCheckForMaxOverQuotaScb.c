/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140308F8C
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242890 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243890 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B3210 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x140308EB0 (KiIsThreadRankNonZero.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
