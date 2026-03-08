/*
 * XREFs of ViPendingTryReserveWorker @ 0x1405CD854
 * Callers:
 *     ViPendingQueuePassiveLevelCompletion @ 0x140ACEEB0 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViPendingTryReserveWorker(signed __int64 a1)
{
  int v1; // r9d
  unsigned int v2; // r8d

  v1 = ViPendingWorkersCount;
  v2 = ViPendingWorkerIndexHint;
  while ( _InterlockedCompareExchange64(&qword_140C36B28[6 * v2], a1, 0LL) )
  {
    v2 = v2 + 1 < ViPendingWorkersCount ? v2 + 1 : 0;
    if ( !--v1 )
    {
      ++ViPendingWorkersBusyCount;
      return 0xFFFFFFFFLL;
    }
  }
  ViPendingWorkerIndexHint = v2 + 1 < ViPendingWorkersCount ? v2 + 1 : 0;
  return v2;
}
