/*
 * XREFs of PsGetServerSiloState @ 0x1402237B8
 * Callers:
 *     SepQueueWorkItem @ 0x140223644 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ABBA8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1464) + 1304LL);
  else
    return 1LL;
}
