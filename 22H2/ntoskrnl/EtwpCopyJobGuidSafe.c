/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140936A24
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C7CC0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140935D98 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140935E78 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x140935FCC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x14093612C (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1240);
  else
    *a1 = 0LL;
}
