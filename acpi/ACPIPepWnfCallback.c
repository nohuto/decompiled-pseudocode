/*
 * XREFs of ACPIPepWnfCallback @ 0x1C008AF90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPepQueueWorker @ 0x1C008AF08 (ACPIPepQueueWorker.c)
 */

__int64 __fastcall ACPIPepWnfCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( *a2 == WNF_PO_MODERN_STANDBY_EXIT_INITIATED )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a6 + 184));
    if ( !*(_BYTE *)(a6 + 256) )
    {
      *(_BYTE *)(a6 + 256) = 1;
      ACPIPepQueueWorker(a6 + 160);
    }
    ExReleaseFastMutex((PFAST_MUTEX)(a6 + 184));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
