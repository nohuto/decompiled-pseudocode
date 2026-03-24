/*
 * XREFs of PspGetNextMonitor @ 0x14090B6A8
 * Callers:
 *     PspNotifyServerSiloCreation @ 0x14090B7DC (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14090B8E4 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PspGetNextMonitor(__int64 **a1)
{
  __int64 *result; // rax

  result = (__int64 *)PspSiloMonitorList;
  if ( a1 )
    result = *a1;
  if ( result == &PspSiloMonitorList )
    return 0LL;
  return result;
}
