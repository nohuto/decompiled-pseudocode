/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140222070
 * Callers:
 *     KeInitializeQueue @ 0x140220E30 (KeInitializeQueue.c)
 *     KiIntSteerCalculatePriorityDistribution @ 0x140221970 (KiIntSteerCalculatePriorityDistribution.c)
 *     KeIntSteerSnapPerf @ 0x140221D80 (KeIntSteerSnapPerf.c)
 *     KiOutSwapKernelStacks @ 0x140222874 (KiOutSwapKernelStacks.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3390 (KiUpdateProcessConcurrencyCounts.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     PopCheckForIdleness @ 0x14032C440 (PopCheckForIdleness.c)
 *     KdpSetCommonState @ 0x14033EF5C (KdpSetCommonState.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140344CD0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiInitiateGenericCallDpc @ 0x1403469C4 (KiInitiateGenericCallDpc.c)
 *     KiAssignProcessorNumberToPrcb @ 0x140376C90 (KiAssignProcessorNumberToPrcb.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     HalpTscSynchronization @ 0x14039A820 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14039A8C4 (KeOptimizeSpecCtrlSettings.c)
 *     KeIpiGenericCall @ 0x14039A940 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AA74 (HalpTscInitializeSynchronizationContext.c)
 *     CcInitializePartition @ 0x1403A00A0 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403A4DE0 (KeInitializePriQueue.c)
 *     KeQueryActiveProcessorCount @ 0x1403B6260 (KeQueryActiveProcessorCount.c)
 *     PpmIdleSelectStates @ 0x1403B6E10 (PpmIdleSelectStates.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0448 (CcInitializePrivateVolumeCacheMap.c)
 *     HalpMceHandlerWithRendezvous @ 0x140503DD0 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscCheckDisposition @ 0x14050A194 (HalpTscCheckDisposition.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050A3C4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050C6EC (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050C760 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E1F0 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x14051E4B0 (EmonRemoveProfileSource.c)
 *     Amd64InitializeUncoreProfiling @ 0x140529980 (Amd64InitializeUncoreProfiling.c)
 *     Amd64RemoveProfileSource @ 0x140529F40 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x14053BD0C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405470E0 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1405496E0 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x14054FC68 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140554360 (KeCapturePersistentThreadState.c)
 *     KeAdjustInterruptTime @ 0x14056C214 (KeAdjustInterruptTime.c)
 *     KeCheckForTimer @ 0x140570B8C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140572460 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140576C30 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140585CB0 (PpmSetPlatformIdleDurationHint.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BE554 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D38C (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     HalpCmcWorkerRoutine @ 0x140820C70 (HalpCmcWorkerRoutine.c)
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140864E10 (PopCheckSkipTick.c)
 *     ExProcessorCounterSetCallback @ 0x14086E070 (ExProcessorCounterSetCallback.c)
 *     HalAllocateHardwareCounters @ 0x140933290 (HalAllocateHardwareCounters.c)
 *     HalpLoadMicrocode @ 0x140934BE0 (HalpLoadMicrocode.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934D88 (HalpLoadMicrocodeSerialized.c)
 *     HalpLbrConfigurationWorker @ 0x140935E84 (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093EBFC (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14094404C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140973F30 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     HalpCmciInit @ 0x140A8AF6C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8B178 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8B600 (HalpInitializeMce.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8F8CC (KeRestoreMtrrBroadcast.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A91B04 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A950A4 (HalpHandlePreviousMcaErrors.c)
 *     HalpBuildResumeStructures @ 0x140A95FB8 (HalpBuildResumeStructures.c)
 *     KdpSysReadControlSpace @ 0x140AB2BB8 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140AB2E44 (KdpSysWriteControlSpace.c)
 *     KdpGetStateChange @ 0x140AB33D8 (KdpGetStateChange.c)
 *     KdpAllowDisable @ 0x140AB66DC (KdpAllowDisable.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     KiIntPartInit @ 0x140B53D44 (KiIntPartInit.c)
 *     IntpAllocateProcessorContext @ 0x140B53F58 (IntpAllocateProcessorContext.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B71AE0 (PopDetectSimulatedHeteroProcessors.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B75650 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140D1EFE8[GroupNumber] - (((unsigned __int64)qword_140D1EFE8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
