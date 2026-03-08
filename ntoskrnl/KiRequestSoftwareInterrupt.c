/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1402B7A24
 * Callers:
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiRequestTimer2Expiration @ 0x1402B78B8 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x1402F8100 (KiFlushQueuedDpcsWorker.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140230830 (HalRequestSoftwareInterrupt.c)
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
