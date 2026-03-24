/*
 * XREFs of EtwWriteEx @ 0x14025D570
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14021FC90 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402207D0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220B90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x140229440 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x140229DC0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14022A3C0 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x14022AD90 (PpmCheckComputeEnergy.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x14025D530 (EtwWriteTransfer.c)
 *     EtwTraceMemoryAcg @ 0x14025F048 (EtwTraceMemoryAcg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140260470 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1402608E4 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x140260D5C (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x140261F38 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140262ACC (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmPerfRecordUtility @ 0x1402DF330 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1402DF5E0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1402E4770 (PpmPerfSelectProcessorState.c)
 *     IoReuseIrp @ 0x1402E6400 (IoReuseIrp.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F0908 (PoTraceSystemTimerResolutionKernel.c)
 *     SeLogAccessFailure @ 0x1403139A0 (SeLogAccessFailure.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14032476C (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwpTiFillVadEventWrite @ 0x140325F54 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x140329C64 (PopTraceSystemIdleTimeReset.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032C1BC (_tlgWriteEx_EtwWriteEx.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14034A704 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14034A760 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14034A9EC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceIdleCheck @ 0x14034AE20 (PopDiagTraceIdleCheck.c)
 *     PopDiagTracePowerRequestChange @ 0x14034B3A4 (PopDiagTracePowerRequestChange.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14034C324 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14034D6BC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14034D8C4 (PopThermalTraceRundownEvents.c)
 *     MiAllocatePagesForMdl @ 0x140354954 (MiAllocatePagesForMdl.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14035E260 (PoTraceSystemTimerResolutionUpdate.c)
 *     PnpDiagnosticTraceObject @ 0x1403645B8 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364734 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x14036BF90 (PpmMediaBufferingWorker.c)
 *     _tlgWriteAgg @ 0x14036D53C (_tlgWriteAgg.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036E304 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceIrpStart @ 0x140370C44 (PopDiagTraceIrpStart.c)
 *     KsepLogEtwMessage @ 0x140371FB8 (KsepLogEtwMessage.c)
 *     KiIntSteerLogState @ 0x140377A24 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x14037A5E4 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticTrace @ 0x14037BE48 (PnpDiagnosticTrace.c)
 *     PoLatencySensitivityHint @ 0x14037D5D0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14038B668 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038D738 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14039252C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1403925D0 (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14039265C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountBegin @ 0x1403927B0 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x1403928A8 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x1403935B4 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140398128 (PopDiagTraceDeviceAcquireIrp.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398788 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140398828 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140398B9C (PopDiagTraceDeviceReleaseIrp.c)
 *     IoTransferActivityId @ 0x140398C60 (IoTransferActivityId.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140399248 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x140399F08 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x14039A928 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x14039C594 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039C7D4 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039CCB4 (HalpTscTraceProcessorSynchronization.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039F6EC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceSetSystemState @ 0x1403A58CC (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A5A84 (PopDiagTraceFxComponentIdleState.c)
 *     HalpIommuLogEarlyFault @ 0x1403B38F8 (HalpIommuLogEarlyFault.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1403B7BDC (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1403B7CA8 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x1403B8880 (EtwpTraceFileName.c)
 *     WheaLogInternalEvent @ 0x1403BA6F0 (WheaLogInternalEvent.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C7CC0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     KsepEvntLogFlagsApplied @ 0x1403C9034 (KsepEvntLogFlagsApplied.c)
 *     HalpTscTraceStatus @ 0x1404C16D0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1404C9C7C (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1404EE4E8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1404F9DB4 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x14050091C (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x1405089C4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140508A08 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140508AA4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140508BD0 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x140508D5C (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140508E9C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration @ 0x140508FCC (IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14050910C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14050920C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14050934C (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140509510 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14050963C (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140509728 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405097D0 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140509834 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140509974 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140509AB4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140509B0C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140509B64 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140509BC4 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140509C7C (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x140509D18 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140509E8C (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140509F10 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140509FA4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140509FFC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14050A054 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     SecureDump_LogErrorEvent @ 0x14050A930 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14052275C (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x140526E6C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x140527958 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140527A84 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140527B80 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140527C64 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x140527D7C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140527E7C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140527F50 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14052800C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14052811C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140528218 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405282FC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405283E0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405284DC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405285B4 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405286BC (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14052893C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140528A3C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14056FA6C (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14056FB64 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14056FC08 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14056FD20 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x140570A14 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140570AB4 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140570BC8 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140570CC0 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140570EBC (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14057101C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405714D4 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405715B0 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140571670 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1405719C8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140571A84 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x140571B7C (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x140571C6C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x140571D5C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140571E54 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405721A0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405722A4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140572384 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14057257C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1405726BC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1405727CC (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1405728C0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1405729A8 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140572A58 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140572B14 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140572CBC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x140572D5C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x140572DFC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140572EC4 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140572FB4 (PopDiagTraceSleepStudyBlocker.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140577A10 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1405791E0 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140579338 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140579458 (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14057954C (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405796E4 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405797EC (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1405798F4 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x140579A5C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x140579B1C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140579C0C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140579D28 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x140579E08 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140579F28 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14057A000 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14057A20C (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14057A31C (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14057A578 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14057A6D4 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14057A7D0 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14057A97C (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14057AA44 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057AAA8 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14057ACE0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14057AF80 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x14057B178 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057CA88 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CB90 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x14057F038 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x14058010C (SshpWriteBlocker.c)
 *     SSHSupportEtwWrite @ 0x140580C30 (SSHSupportEtwWrite.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14059D830 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14059D8FC (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14059DA34 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14059DB00 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14059E120 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405A00AC (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x1405A87B4 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1405A8AF8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8CD8 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1405A8E68 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1405A922C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405AA3F0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1405AA714 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1405B9570 (KitLogFeatureUsage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405BD568 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1405BD648 (WheapLogProcessTerminateEvent.c)
 *     EtwpPsProvTraceImage @ 0x140629388 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x14092B0BC (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092B1CC (SmKmEtwLogStoreStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B2274 (PopDiagTraceFirmwareS3Stats.c)
 *     BapdpRecordIumStatus @ 0x140A40EDC (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A72FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A93168 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140220B40 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
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
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v18; // al
  __int64 v19; // rax
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  char v23; // r10
  unsigned __int8 v24; // r10
  int v25; // r11d
  PEVENT_DATA_DESCRIPTOR v26; // r14
  unsigned __int8 v27; // r10
  __int64 v28; // r11
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-68h]

  v29 = 0LL;
  v10 = Filter;
  v12 = 0;
  v30 = 0LL;
  v31 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = *(unsigned __int8 *)(RegHandle + 100);
  v15 = v13 + 28;
  if ( !v13 )
    v15 = 0LL;
  if ( (_BYTE)v14 )
  {
    v16 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v16 + 96) )
    {
      v18 = *(_BYTE *)(v16 + 100);
      if ( (EventDescriptor->Level <= v18 || !v18)
        && ((*(_DWORD *)(v16 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v16 + 112)) != 0 && (Keyword & *(_QWORD *)(v16 + 120)) == *(_QWORD *)(v16 + 120)) )
      {
        v12 = EtwpEventWriteFull(
                v16,
                v14,
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
                (__int64)&v30,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v15,
                (__int64)&v29);
      }
    }
  }
  if ( *(_BYTE *)(RegHandle + 101)
    && EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
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
            (__int64)UserData,
            0LL,
            (__int64)&v30,
            v22,
            *(_WORD *)(RegHandle + 98),
            v15,
            (__int64)&v29);
  }
  v19 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v19 + 400) )
  {
    v23 = *(_BYTE *)(RegHandle + 102);
    v30 = 0LL;
    v31 = 0LL;
    if ( v23 )
    {
      v26 = UserData;
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(v19 + 400) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
        v12 = EtwpEventWriteFull(
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
                (__int64)&v30,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v15,
                (__int64)&v29);
    }
    else
    {
      v26 = UserData;
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( EtwpLevelKeywordEnabled(
             *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
             EventDescriptor->Level,
             EventDescriptor->Keyword) )
      {
        return EtwpEventWriteFull(
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
                 (__int64)&v30,
                 v28,
                 *(_WORD *)(RegHandle + 98),
                 v15,
                 (__int64)&v29);
      }
    }
  }
  return v12;
}
