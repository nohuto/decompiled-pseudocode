/*
 * XREFs of PspGetNextMonitor @ 0x1409B1240
 * Callers:
 *     PspNotifyServerSiloCreation @ 0x1409B1374 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B147C (PspNotifyServerSiloTermination.c)
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
