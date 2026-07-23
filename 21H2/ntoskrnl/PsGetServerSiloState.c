/*
 * XREFs of PsGetServerSiloState @ 0x14023C5EC
 * Callers:
 *     SepQueueWorkItem @ 0x14023C470 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140906060 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140906578 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
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
