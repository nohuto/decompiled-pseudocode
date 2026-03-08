/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140342A68
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
 *     KiGetThreadEffectiveRankNonZero @ 0x1403428F0 (KiGetThreadEffectiveRankNonZero.c)
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
