/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1402A97C0
 * Callers:
 *     KiUpdateProcessConcurrencyCounts @ 0x14022BAA0 (KiUpdateProcessConcurrencyCounts.c)
 *     KiOutSwapKernelStacks @ 0x1402A7380 (KiOutSwapKernelStacks.c)
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     KiIntSteerCalculatePriorityDistribution @ 0x1402A90C0 (KiIntSteerCalculatePriorityDistribution.c)
 *     KeIntSteerSnapPerf @ 0x1402A94D0 (KeIntSteerSnapPerf.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     KiInitiateGenericCallDpc @ 0x1402DC9E4 (KiInitiateGenericCallDpc.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140358728 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KdpSetCommonState @ 0x14036B850 (KdpSetCommonState.c)
 *     KiAssignProcessorNumberToPrcb @ 0x140371A40 (KiAssignProcessorNumberToPrcb.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     HalpTscSynchronization @ 0x140396C20 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x140396CC4 (KeOptimizeSpecCtrlSettings.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140396E74 (HalpTscInitializeSynchronizationContext.c)
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x14039F800 (KeInitializePriQueue.c)
 *     KeQueryActiveProcessorCount @ 0x1403B15D0 (KeQueryActiveProcessorCount.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403BAB18 (CcInitializePrivateVolumeCacheMap.c)
 *     HalpMceHandlerWithRendezvous @ 0x140501CF0 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscCheckDisposition @ 0x1405080B4 (HalpTscCheckDisposition.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405082E4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050A60C (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050A680 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051BCC0 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x14051BF80 (EmonRemoveProfileSource.c)
 *     Amd64InitializeUncoreProfiling @ 0x140527450 (Amd64InitializeUncoreProfiling.c)
 *     Amd64RemoveProfileSource @ 0x140527A10 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x14053983C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140544C40 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x140547240 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x14054D7C8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140551EC0 (KeCapturePersistentThreadState.c)
 *     KeAdjustInterruptTime @ 0x140569D74 (KeAdjustInterruptTime.c)
 *     KeCheckForTimer @ 0x14056E51C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x14056FDF0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140574610 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140583780 (PpmSetPlatformIdleDurationHint.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BC0A4 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MiStackTheftFreezeProcessors @ 0x14062AF0C (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     HalpCmcWorkerRoutine @ 0x14080C020 (HalpCmcWorkerRoutine.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140860800 (PopCheckSkipTick.c)
 *     ExProcessorCounterSetCallback @ 0x14086BB50 (ExProcessorCounterSetCallback.c)
 *     HalAllocateHardwareCounters @ 0x140930360 (HalAllocateHardwareCounters.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 *     HalpLoadMicrocodeSerialized @ 0x140931D78 (HalpLoadMicrocodeSerialized.c)
 *     HalpLbrConfigurationWorker @ 0x140932E74 (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093BBDC (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14094102C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140970F10 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8C444 (KeRestoreMtrrBroadcast.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A8E8A4 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A91F70 (HalpHandlePreviousMcaErrors.c)
 *     HalpBuildResumeStructures @ 0x140A92E78 (HalpBuildResumeStructures.c)
 *     KdpSysReadControlSpace @ 0x140AAEC50 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140AAEEE4 (KdpSysWriteControlSpace.c)
 *     KdpGetStateChange @ 0x140AAF478 (KdpGetStateChange.c)
 *     KdpAllowDisable @ 0x140AB26EC (KdpAllowDisable.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 *     KiIntPartInit @ 0x140B437B4 (KiIntPartInit.c)
 *     IntpAllocateProcessorContext @ 0x140B439C8 (IntpAllocateProcessorContext.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B713C0 (KiIntSteerDetermineSteeringEnabled.c)
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
