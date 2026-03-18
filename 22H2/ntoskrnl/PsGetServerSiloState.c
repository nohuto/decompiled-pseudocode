/*
 * XREFs of PsGetServerSiloState @ 0x1403095F4
 * Callers:
 *     SepQueueWorkItem @ 0x140309480 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACB48 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACBA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x1409B3AD0 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1488) + 1304LL);
  else
    return 1LL;
}
