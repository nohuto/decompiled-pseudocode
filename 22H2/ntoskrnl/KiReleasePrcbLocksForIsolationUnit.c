/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x140307790
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiChooseTargetProcessor @ 0x1402392C0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240330 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x140259C50 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B1700 (KiAcquireThreadStateLockForWrite.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiExitThreadWait @ 0x1402BBC60 (KiExitThreadWait.c)
 *     KeQueryValuesThread @ 0x1402C2C10 (KeQueryValuesThread.c)
 *     KiNormalPriorityReadyScan @ 0x140306CC0 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiIdleSchedule @ 0x1403072F0 (KiIdleSchedule.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329BD0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x140356AB0 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x14035977C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366580 (KeUpdateThreadTag.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14037214C (KiCanSelectSoftParkedProcessor.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039E750 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403CE96C (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140410748 (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140461148 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroChooseTargetProcessor @ 0x1404612B6 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140461BE4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E73C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056F178 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140576DCC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiReleaseThreadStateLock @ 0x140577718 (KiReleaseThreadStateLock.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140579600 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057D8FC (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DBBC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiParkCurrentProcessor @ 0x14057DF2C (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14057E6E4 (KiUnparkCurrentProcessor.c)
 *     KiCompleteKernelInit @ 0x140A8D340 (KiCompleteKernelInit.c)
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
