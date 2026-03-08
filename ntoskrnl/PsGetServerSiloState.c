/*
 * XREFs of PsGetServerSiloState @ 0x1403552EC
 * Callers:
 *     SepQueueWorkItem @ 0x140355178 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409A9AC8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x1409B0A80 (PspCatchCriticalBreak.c)
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
