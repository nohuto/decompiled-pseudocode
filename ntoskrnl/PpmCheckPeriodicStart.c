/*
 * XREFs of PpmCheckPeriodicStart @ 0x1402D1CE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x1402D1D84 (PpmCheckStart.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14036F2A8 (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C3D2E8, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastEffectiveExecutionTime);
    _m_prefetchw(&PpmCheckDelayedStartWorkerQueued);
    if ( !_InterlockedOr8(&PpmCheckDelayedStartWorkerQueued, 1u) )
    {
      PpmCheckDelayedStartWorkItem.List.Flink = 0LL;
      PpmCheckDelayedStartWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmCheckDelayedPeriodicStart;
      PpmCheckDelayedStartWorkItem.Parameter = a3;
      ExQueueWorkItem(&PpmCheckDelayedStartWorkItem, CriticalWorkQueue);
    }
  }
  else
  {
    PpmCheckMakeupCount = (int)a3;
    PpmCheckStart(0LL);
  }
}
