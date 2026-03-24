/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x14035E984
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 *     KiFlushQueuedDpcsWorker @ 0x1403228E0 (KiFlushQueuedDpcsWorker.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     KiRequestTimer2Expiration @ 0x14035E848 (KiRequestTimer2Expiration.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C5AAC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C878 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E508 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520A60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x1405253EC (KeTransitionProcessorParkState.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_5;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel )
  {
    CurrentPrcb->InterruptRequest = 1;
  }
  else
  {
LABEL_5:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
