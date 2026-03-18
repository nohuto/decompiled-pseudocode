/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x140246750
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
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
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KeApplyWobBamQos @ 0x140259C50 (KeApplyWobBamQos.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1402B1700 (KiAcquireThreadStateLockForWrite.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
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
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039E750 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403CE96C (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140410748 (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1404612B6 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140461BE4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E73C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056F178 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140576DCC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140579600 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057D8FC (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057DBBC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiCompleteKernelInit @ 0x140A8D340 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  unsigned __int8 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  result = a1 ^ ((unsigned __int8)a1 ^ (unsigned __int8)a2) & 1;
  *a3 = result;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v5 = *(unsigned __int8 **)(a1 + 34904);
    v4 = (__int64 *)(v5 + 8);
    result = *v5;
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    v4 = &v8;
    result = 1LL;
  }
  v6 = (unsigned int)result;
  do
  {
    v7 = *v4;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v9);
        result = *(_QWORD *)(v7 + 48);
      }
      while ( result );
    }
    ++v4;
    --v6;
  }
  while ( v6 );
  return result;
}
