/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeApplyWobBamQos @ 0x140227F40 (KeApplyWobBamQos.c)
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryValuesThread @ 0x14022B320 (KeQueryValuesThread.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402AF3E4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x1402EB020 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x1402ED02C (KeSetThreadPpmPolicy.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402F1C6C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402F1E28 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14036DE9C (KiCanSelectSoftParkedProcessor.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140399EB4 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403C93BC (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14040B280 (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x1404591A8 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroChooseTargetProcessor @ 0x140459316 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140459C44 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056CB08 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1405747AC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140574848 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x140575260 (KiReleaseThreadStateLock.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x1405770F0 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057B3EC (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057B6AC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14057C38C (KiUnparkCurrentProcessor.c)
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleasePrcbLocksForIsolationUnit(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // r8
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = v3;
  if ( (v1 & 1) != 0 )
  {
    v7 = *(unsigned __int8 **)(v3 + 34904);
    v4 = (unsigned __int64 *)(v7 + 8);
    v5 = *v7;
    if ( !v5 )
    {
      result = 0LL;
      *a1 = 0LL;
      return result;
    }
  }
  else
  {
    v4 = &v8;
    v5 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v4[--v5] + 48), 0LL);
  while ( v5 );
  result = 0LL;
  *a1 = 0LL;
  return result;
}
