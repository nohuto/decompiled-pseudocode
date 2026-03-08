/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408A21A4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A01E0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1409E2518 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E25F8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E274C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E28AC (EtwTraceJobSetQuery.c)
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
