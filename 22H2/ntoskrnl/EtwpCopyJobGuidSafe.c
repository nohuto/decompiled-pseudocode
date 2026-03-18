/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408A7024
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5700 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1409E53B8 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E5498 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E55EC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E574C (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1456);
  else
    *a1 = 0LL;
}
