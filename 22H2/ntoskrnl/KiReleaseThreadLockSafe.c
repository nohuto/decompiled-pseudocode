/*
 * XREFs of KiReleaseThreadLockSafe @ 0x1402F1590
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140207300 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x14022E860 (KeQueryTotalCycleTimeThread.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x140241FA0 (KiBeginThreadWait.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeAlertThreadByThreadId @ 0x14025C2F0 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KiAbApplyWakeupBoost @ 0x140271FFC (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KiWaitSatisfyAny @ 0x1402ED5CC (KiWaitSatisfyAny.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402F76C0 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x1402FFDE0 (KeQueryBasePriorityThread.c)
 *     KeRundownQueueCommon @ 0x1403026FC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140318DE4 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x14031E0BC (KeRemoveQueueApc.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x14032116C (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x140328378 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x14032B3A0 (KeQueryAffinityThread.c)
 *     KeTestAlertThread @ 0x140340540 (KeTestAlertThread.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KiFastReadyThread @ 0x1403411A0 (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x140341258 (KiFastExitThreadWait.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140341968 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x1403428E0 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x140343060 (KiAcquireReleaseThreadLock.c)
 *     KiSuspendThread @ 0x140343334 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403435F4 (KiInsertDeferredPreemptionApc.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14035B430 (KiProcessPendingForegroundBoosts.c)
 *     KeRequestTerminationThread @ 0x14035BD28 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x14035BE90 (KeAlertThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035C2A8 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035D5B8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035D718 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 *     KeUpdateThreadTag @ 0x14036B8A0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C5BBC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x140512FC0 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x1405132C8 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x14051A570 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x14051A750 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x14051C6D0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E508 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x14051EF14 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051FF30 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520A60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x140520DB8 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x1405221D0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x140522A34 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140525C64 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadLockSafe(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    result = (unsigned int)(SchedulerAssist[6] - 1);
    SchedulerAssist[6] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return result;
}
