/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1402ADF34
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140261010 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
