/*
 * XREFs of PsGetServerSiloState @ 0x14034D18C
 * Callers:
 *     SepQueueWorkItem @ 0x14034D010 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140905F50 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905FB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140906468 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14090AF34 (PspCatchCriticalBreak.c)
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
