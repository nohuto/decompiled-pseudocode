/*
 * XREFs of PsGetServerSiloState @ 0x1402BDFAC
 * Callers:
 *     SepQueueWorkItem @ 0x1402BDE30 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140905F00 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905F60 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140906418 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14090AEE4 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1272) + 1112LL);
  else
    return 1LL;
}
