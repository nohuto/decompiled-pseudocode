/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140259218
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140258040 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KiFindReadyThread @ 0x14035BB30 (KiFindReadyThread.c)
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
