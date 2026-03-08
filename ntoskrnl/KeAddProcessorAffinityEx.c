/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140234B50
 * Callers:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     PpmIdlePrepare @ 0x14022AA10 (PpmIdlePrepare.c)
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PoGetIdleTimes @ 0x140236ABC (PoGetIdleTimes.c)
 *     KiCheckKeepAlive @ 0x1402372DC (KiCheckKeepAlive.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiCompleteRescheduleContextEntry @ 0x1402AE2A0 (KiCompleteRescheduleContextEntry.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402F74A8 (PoGetPerfStateAndParkingInfo.c)
 *     KiSendClockInterruptToClockOwner @ 0x1402F984C (KiSendClockInterruptToClockOwner.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403786F0 (HalpInterruptInitializeLocalUnit.c)
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     PpmInstallNewIdleStates @ 0x14039AA50 (PpmInstallNewIdleStates.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     ExpUpdateTimerConfiguration @ 0x1403BCFE8 (ExpUpdateTimerConfiguration.c)
 *     PoExecuteIdleCheck @ 0x1403C65A0 (PoExecuteIdleCheck.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14040B280 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSynchronizeStibpPairing @ 0x1404583F6 (KiSynchronizeStibpPairing.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140459C44 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1405097B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051BCC0 (EmonReleaseProfileResourcesInternal.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140577778 (KeGetAffinitizedInterruptsInfo.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057B6AC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14057E460 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PpmRemoveIdleStates @ 0x140583570 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140583A5C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140583CC8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140584430 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14059558C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059B80C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PpmUpdateIdleStates @ 0x14080D6D0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x140930360 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x14096F978 (KeConfigureHeteroProcessors.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140970358 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiUpdateProcessorCount @ 0x140A860DC (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x140A868F0 (EmonInitializeProfiling.c)
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140A89F80 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeTopologyStructures @ 0x140A8A348 (KiInitializeTopologyStructures.c)
 *     DefaultInitializeProfiling @ 0x140A92A90 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A95700 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9C260 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140B43678 (KiIntSteerInit.c)
 *     KiInitializeIdleProcess @ 0x140B5F2B8 (KiInitializeIdleProcess.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B937E4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( *a1 > (unsigned int)v4 )
    goto LABEL_2;
  result = a1[1];
  if ( (unsigned int)result > (unsigned int)v4 )
  {
    *a1 = v4 + 1;
LABEL_2:
    v5 = (unsigned int)v4;
    v6 = *(_QWORD *)&a1[4 * v4 + 4];
    result = v3;
    _bittestandset64(&v6, v3);
    *(_QWORD *)&a1[4 * v5 + 4] = v6;
  }
  return result;
}
