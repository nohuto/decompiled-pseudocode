/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x140318788
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiUpdateRunTime @ 0x1402C74B0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x1402C7AE0 (KeAccumulateTicks.c)
 *     KiRequestTimer2Expiration @ 0x1403186C0 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140363140 (KiFlushQueuedDpcsWorker.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578770 (KiUpdateThreadHgsFeedback.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E2E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    return HalRequestSoftwareInterrupt(a2);
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->NestingLevel )
    return HalRequestSoftwareInterrupt(a2);
  CurrentPrcb->InterruptRequest = 1;
  return result;
}
