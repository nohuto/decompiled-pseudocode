/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140344620
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A1F0 (KeStallExecutionProcessor.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140307180 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x140310CC0 (KeInitializeQueue.c)
 *     KiGenericCallDpcWorker @ 0x140315680 (KiGenericCallDpcWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14032998C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     PopCheckForIdleness @ 0x140349EF0 (PopCheckForIdleness.c)
 *     KiOutSwapKernelStacks @ 0x140355CA0 (KiOutSwapKernelStacks.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14038ACE0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14038D11C (KeAdjustInterruptTime.c)
 *     PpmIdleSelectStates @ 0x140394E80 (PpmIdleSelectStates.c)
 *     KeIpiGenericCall @ 0x1403A4420 (KeIpiGenericCall.c)
 *     HalpPowerStateCallback @ 0x1403A67F0 (HalpPowerStateCallback.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A71A4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B1468 (HalpTimerStallExecutionProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x1403B5478 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1403B8A80 (KeBalanceSetManager.c)
 *     CcInitializePartition @ 0x1403C25C4 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403C6724 (KeInitializePriQueue.c)
 *     HalpTscSynchronization @ 0x1403CDFF0 (HalpTscSynchronization.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404BAE68 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404C15D8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C3484 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3500 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404D4120 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x1404D4370 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DDF60 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x1404EE0EC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F8148 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1404FA740 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140501778 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140504CC0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14051131C (KdpSetCommonState.c)
 *     KiDynamicProcessorInitialization @ 0x14051237C (KiDynamicProcessorInitialization.c)
 *     KeQueryActiveProcessorCount @ 0x140515400 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140515A3C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140519CB0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x14051DA40 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x14053626C (MiStackTheftFreezeProcessors.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054446C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140567698 (PpmSetPlatformIdleDurationHint.c)
 *     ExProcessorCounterSetCallback @ 0x1406C6A20 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     HalpDispatchPnp @ 0x1407645A0 (HalpDispatchPnp.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB3CC (PopInitializeHeteroProcessors.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BBFC8 (PopDetectSimulatedHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1407D5390 (PopCheckSkipTick.c)
 *     HalAllocateHardwareCounters @ 0x1408642D0 (HalAllocateHardwareCounters.c)
 *     HalpCmcWorkerRoutine @ 0x140864490 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140866E0C (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14088C15C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140890DB8 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1408BAEF0 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x14093580C (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x14095AE20 (NtStartProfile.c)
 *     HaliLocateHiberRanges @ 0x140996610 (HaliLocateHiberRanges.c)
 *     HalpFreeResumeStructures @ 0x1409982CC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099834C (HalpBuildResumeStructures.c)
 *     KeRestoreMtrrBroadcast @ 0x14099F07C (KeRestoreMtrrBroadcast.c)
 *     HalpInitializeMce @ 0x1409A0A8C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A0B8C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A0EB4 (HalpCmciInit.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x1409A1464 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A6DF4 (HalpHandlePreviousMcaErrors.c)
 *     KdpAllowDisable @ 0x1409B9DD0 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1409B9E1C (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1409B9F1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409BA008 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
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
    v2 = qword_140CFC848[GroupNumber] - (((unsigned __int64)qword_140CFC848[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
