/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeApplyWobBamQos @ 0x140227F40 (KeApplyWobBamQos.c)
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KeQueryValuesThread @ 0x14022B320 (KeQueryValuesThread.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
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
 *     KiReparkIdlingProcessorIfNecessary @ 0x1402C7970 (KiReparkIdlingProcessorIfNecessary.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x1402EB020 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x1402ED02C (KeSetThreadPpmPolicy.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402F1C6C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402F1E28 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14036DE9C (KiCanSelectSoftParkedProcessor.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140399EB4 (KiUpdateThreadCpuSets.c)
 *     KiSetIdealProcessorThread @ 0x1403C93BC (KiSetIdealProcessorThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14040B280 (KiSoftParkElectionUnparkProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x140459316 (KiHeteroChooseTargetProcessor.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140459C44 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeTryToFreezeThreadStack @ 0x14056CB08 (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1405747AC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140574848 (KiAcquireThreadStateLockForWrite.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x1405770F0 (KeAbCrossThreadDelete.c)
 *     KeTransitionProcessorParkState @ 0x14057B3EC (KeTransitionProcessorParkState.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057B6AC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
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
