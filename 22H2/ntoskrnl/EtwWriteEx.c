/*
 * XREFs of EtwWriteEx @ 0x1402580C0
 * Callers:
 *     _tlgWriteAgg @ 0x140212EB4 (_tlgWriteAgg.c)
 *     EtwpTraceFileName @ 0x140213570 (EtwpTraceFileName.c)
 *     MiLogPeriodicTelemetry @ 0x14021F674 (MiLogPeriodicTelemetry.c)
 *     KiIntSteerLogStatus @ 0x14022185C (KiIntSteerLogStatus.c)
 *     PpmEventPerfSelectProcessorState @ 0x140255868 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255950 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventTraceRecordedUtility @ 0x140257510 (PpmEventTraceRecordedUtility.c)
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258390 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14028DBA4 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E3F4 (PopDiagTraceIrpFinish.c)
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
 *     KiSetNextClockTickDueTime @ 0x1402C84E0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     EtwTraceMemoryAcg @ 0x140304138 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310990 (PopDiagTraceFxDevicePowered.c)
 *     PopPepWork @ 0x140311C7C (PopPepWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312870 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140312C9C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140314C08 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     KiIntSteerLogState @ 0x1403211E8 (KiIntSteerLogState.c)
 *     PpmParkRecordNodeStatistics @ 0x14033C4A0 (PpmParkRecordNodeStatistics.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwWriteTransfer @ 0x14034DC10 (EtwWriteTransfer.c)
 *     PpmEventProcessorPerfStateChange @ 0x14034EDD0 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14034EE70 (PpmEventTraceExpectedUtility.c)
 *     PpmEventDomainPerfStateChange @ 0x14035282C (PpmEventDomainPerfStateChange.c)
 *     PoFxSetComponentLatency @ 0x14035AE70 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C05C (PopDiagTraceFxComponentIdleState.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140367920 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTiFillVadEventWrite @ 0x1403679C8 (EtwpTiFillVadEventWrite.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140373528 (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403736A4 (PopDiagTraceThermalZoneEnumeration.c)
 *     BapdWriteEtwEvents @ 0x140373E08 (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x140374730 (KsepEvntLogFlagsApplied.c)
 *     PnpDiagnosticTraceElamStatus @ 0x14037537C (PnpDiagnosticTraceElamStatus.c)
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     HalpTscAdvSynchLeader @ 0x14038ADF0 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14038B108 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14038B5A4 (HalpTscTraceProcessorSynchronization.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5700 (EtwTraceJobServerSiloMonitorCallback.c)
 *     PpmMediaBufferingWorker @ 0x1403AC410 (PpmMediaBufferingWorker.c)
 *     SSHSupportEtwWrite @ 0x1403AD318 (SSHSupportEtwWrite.c)
 *     PoFxSetComponentResidency @ 0x1403B3620 (PoFxSetComponentResidency.c)
 *     HalpIommuLogEarlyFault @ 0x1403B4218 (HalpIommuLogEarlyFault.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1403B5CD0 (PoTraceSystemTimerResolutionUpdate.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     IoTransferActivityId @ 0x1403C29E0 (IoTransferActivityId.c)
 *     EtwTraceContFreeEvent @ 0x1403C3140 (EtwTraceContFreeEvent.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403C3C60 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C3D2C (PopBatteryTraceSystemBatteryStatus.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403D0440 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x1403D6500 (MiLogSlabEntriesDemote.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140462CCE (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140462DDC (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140462E3E (PpmEventTraceSoftCoreParkingSelection.c)
 *     EtwpFileProvTrace @ 0x140467130 (EtwpFileProvTrace.c)
 *     EtwpLogMemNodeInfo @ 0x140467426 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x140467632 (EtwpNetProvTraceNetwork.c)
 *     HalpTscTraceStatus @ 0x14050A4C0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x14051871C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14053C108 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140548CA8 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x14055290C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405529E8 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140552AF8 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140552C08 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140552D18 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140552E28 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140552F38 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140553048 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitActivityIdIrp @ 0x1405557C4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14055A12C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x14055A170 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14055A1F8 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055A324 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055A4B0 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055A5FC (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055A6FC (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14055A858 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055AA3C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055AB7C (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055ACCC (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055AD50 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055AF54 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14055AFB8 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14055B114 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14055B270 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14055B2C8 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14055B320 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055B380 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055B438 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055B4BC (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055B634 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14055B6B8 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14055B74C (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14055B7A4 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055B7FC (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     KsepDsEventAddDevice @ 0x1405815E8 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140581714 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140581810 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1405818F4 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x140581A0C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140581B0C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140581BE0 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x140581C9C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x140581DAC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140581EA8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x140581F8C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x140582070 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x14058216C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x140582244 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x14058234C (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14058267C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14058277C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x140590F94 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14059108C (PoTraceDynamicTickDisabled.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1405912F8 (PoTraceSystemTimerResolutionIgnore.c)
 *     PopDiagTraceAbnormalReset @ 0x140591ACC (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140591B6C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140591C80 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140591D78 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140591F74 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405920CC (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x140592678 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140592754 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1405929FC (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140592BDC (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140592F34 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140592FF0 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x1405930E8 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1405931E0 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14059354C (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140593650 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140593730 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140593938 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x140593A78 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceIdleCheck @ 0x140593D2C (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140593E78 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140593F28 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140593FE4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14059418C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14059422C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405942CC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14059441C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x140594584 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14059464C (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSetSystemState @ 0x140594A78 (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140594B18 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140594C0C (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x140594CB4 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140594DDC (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140594FD4 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140595108 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140599CEC (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140599DBC (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140599EDC (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140599FD0 (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x14059A168 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14059A228 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A574 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14059A738 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14059A840 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x14059A948 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14059AAAC (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14059AC48 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodePreference @ 0x14059AE4C (PpmEventParkNodePreference.c)
 *     PpmEventParkingCountSelection @ 0x14059AF6C (PpmEventParkingCountSelection.c)
 *     PpmEventPlatformVetoRequest @ 0x14059B0CC (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14059B1A4 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14059B3B0 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14059B4C0 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14059B720 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14059B880 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14059B97C (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14059BB68 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x14059BC30 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x14059BE28 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059BF30 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14059C160 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVetoReasonRundown @ 0x14059C3F4 (PpmEventVetoReasonRundown.c)
 *     PpmEventVpQosChange @ 0x14059C4E8 (PpmEventVpQosChange.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x14059E800 (PpmHeteroDispatchHgsInterrupt.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405A081C (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405A0924 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x1405A2200 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x1405A2E50 (SshpWriteBlocker.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1405CAF4C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405CB018 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1405CB150 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405CB21C (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1405CBBF0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405CDD38 (SmKmSqmAddToStream.c)
 *     EtwpTraceLostEvent @ 0x1405FC434 (EtwpTraceLostEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FC780 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceLostWppEvent @ 0x1405FC858 (EtwpTraceLostWppEvent.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1405FC9B4 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceDpcProfilingStack @ 0x1405FCC20 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x1405FCCB0 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x1405FD40C (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1405FD5E8 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwpPsProvTracePriority @ 0x1405FE1FC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405FEDE0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFE6C (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14060EBE0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecord @ 0x1406131A0 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140613220 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x1406134A0 (WheapLogProcessTerminateEvent.c)
 *     CmpThreadInfoLogStack @ 0x14061607C (CmpThreadInfoLogStack.c)
 *     MiLogBadMapper @ 0x140630E68 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14065715C (MiLogSlabEntryAllocateFailure.c)
 *     SmKmEtwLogStoreChange @ 0x1409D8824 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D8934 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x1409E63D4 (EtwpPsProvTraceImage.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7C70 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceDirtyTransition @ 0x140B36190 (PopDiagTraceDirtyTransition.c)
 *     EtwpTraceSystemInitialization @ 0x140B381EC (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140B38C84 (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B75764 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B97394 (PopDiagTraceAdaptiveBootOverride.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140258400 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v10; // r14d
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int8 v15; // r10
  int v16; // r11d
  __int64 v17; // rax
  unsigned __int64 Keyword; // r8
  __int64 Level; // rdx
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  char v23; // r10
  unsigned __int8 v24; // r10
  int v25; // r11d
  PEVENT_DATA_DESCRIPTOR v26; // r14
  unsigned __int8 v27; // r10
  __int64 v28; // r11
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-78h]
  __int128 v31; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-60h]

  v29 = 0LL;
  v10 = Filter;
  v12 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_BYTE *)(RegHandle + 100)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword,
                          0LL) )
  {
    v12 = (unsigned int)EtwpEventWriteFull(
                          v16,
                          v15,
                          v10,
                          Flags,
                          (__int64)EventDescriptor,
                          0,
                          0,
                          (__int64)ActivityId,
                          (__int64)RelatedActivityId,
                          UserDataCount,
                          (__int64)UserData,
                          0LL,
                          (__int64)&v31,
                          0LL,
                          *(_WORD *)(RegHandle + 98),
                          v14,
                          (__int64)&v29);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v30 = *(_QWORD *)(RegHandle + 40);
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v30 + 96, Level, Keyword, v12) )
      v12 = (unsigned int)EtwpEventWriteFull(
                            *(_QWORD *)(RegHandle + 32),
                            v21,
                            v10,
                            Flags,
                            (__int64)EventDescriptor,
                            0,
                            0,
                            (__int64)ActivityId,
                            (__int64)RelatedActivityId,
                            UserDataCount,
                            v22,
                            0LL,
                            (__int64)&v31,
                            v30,
                            *(_WORD *)(RegHandle + 98),
                            v14,
                            (__int64)&v29);
  }
  v17 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v17 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v31 = 0LL;
    v32 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(v17 + 400) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword,
                              v12) )
        v12 = (unsigned int)EtwpEventWriteFull(
                              v25,
                              v24,
                              0,
                              Flags,
                              (__int64)EventDescriptor,
                              0,
                              0,
                              (__int64)ActivityId,
                              (__int64)RelatedActivityId,
                              UserDataCount,
                              (__int64)UserData,
                              0LL,
                              (__int64)&v31,
                              0LL,
                              *(_WORD *)(RegHandle + 98),
                              v14,
                              (__int64)&v29);
    }
    else
    {
      v26 = UserData;
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword,
                              v12) )
        LODWORD(v12) = EtwpEventWriteFull(
                         *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
                         v27,
                         0,
                         Flags,
                         (__int64)EventDescriptor,
                         0,
                         0,
                         (__int64)ActivityId,
                         (__int64)RelatedActivityId,
                         UserDataCount,
                         (__int64)v26,
                         0LL,
                         (__int64)&v31,
                         v28,
                         *(_WORD *)(RegHandle + 98),
                         v14,
                         (__int64)&v29);
    }
  }
  return v12;
}
