/*
 * XREFs of EtwWriteEx @ 0x140231630
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140231900 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PpmEventTraceRecordedUtility @ 0x140233A78 (PpmEventTraceRecordedUtility.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x1402356B4 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventPerfSelectProcessorState @ 0x14023579C (PpmEventPerfSelectProcessorState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiIntSteerLogState @ 0x1402903C8 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1402B9DB4 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 *     PpmParkRecordNodeStatistics @ 0x1402D3A10 (PpmParkRecordNodeStatistics.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402D9468 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwWriteTransfer @ 0x1402E1270 (EtwWriteTransfer.c)
 *     PpmEventDomainPerfStateChange @ 0x1402E5E8C (PpmEventDomainPerfStateChange.c)
 *     PpmEventProcessorPerfStateChange @ 0x1402ED92C (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1402ED9CC (PpmEventTraceExpectedUtility.c)
 *     PoFxSetComponentLatency @ 0x1402EE7E0 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1402EFCDC (PopDiagTraceFxComponentIdleState.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTiFillVadEventWrite @ 0x1402FC438 (EtwpTiFillVadEventWrite.c)
 *     PopDiagTraceFxDevicePowered @ 0x140304F70 (PopDiagTraceFxDevicePowered.c)
 *     PopPepWork @ 0x140305714 (PopPepWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1403064E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14030690C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140308828 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     EtwpTraceFileName @ 0x14035E5C0 (EtwpTraceFileName.c)
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     MiLogPeriodicTelemetry @ 0x140360374 (MiLogPeriodicTelemetry.c)
 *     EtwTraceMemoryAcg @ 0x140367DD8 (EtwTraceMemoryAcg.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14036F2A8 (PpmEventTraceFailedPerfCheckStart.c)
 *     KsepEvntLogFlagsApplied @ 0x14036F7E8 (KsepEvntLogFlagsApplied.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     BapdWriteEtwEvents @ 0x140380290 (BapdWriteEtwEvents.c)
 *     HalpTscAdvSynchLeader @ 0x140387D38 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140388048 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscTraceProcessorSynchronization @ 0x1403884E4 (HalpTscTraceProcessorSynchronization.c)
 *     PnpDiagnosticTraceElamStatus @ 0x14038950C (PnpDiagnosticTraceElamStatus.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14039CBDC (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A01E0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     PpmMediaBufferingWorker @ 0x1403A6F80 (PpmMediaBufferingWorker.c)
 *     SSHSupportEtwWrite @ 0x1403A7D38 (SSHSupportEtwWrite.c)
 *     PoFxSetComponentResidency @ 0x1403AE930 (PoFxSetComponentResidency.c)
 *     HalpIommuLogEarlyFault @ 0x1403AF528 (HalpIommuLogEarlyFault.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1403B1040 (PoTraceSystemTimerResolutionUpdate.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     IoTransferActivityId @ 0x1403BD120 (IoTransferActivityId.c)
 *     EtwTraceContFreeEvent @ 0x1403BD880 (EtwTraceContFreeEvent.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403BE46C (PopBatteryTraceSystemBatteryStatus.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403CAEA0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x1403D0FE0 (MiLogSlabEntriesDemote.c)
 *     EtwpTraceLostEventOld @ 0x14040C2E0 (EtwpTraceLostEventOld.c)
 *     EtwpTraceLostSystemEventOld @ 0x14040C628 (EtwpTraceLostSystemEventOld.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x14045AD2E (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14045AE3C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14045AE9E (PpmEventTraceSoftCoreParkingSelection.c)
 *     EtwpFileProvTrace @ 0x14045F22C (EtwpFileProvTrace.c)
 *     EtwpLogMemNodeInfo @ 0x14045F526 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x14045F732 (EtwpNetProvTraceNetwork.c)
 *     HalpTscTraceStatus @ 0x1405083E0 (HalpTscTraceStatus.c)
 *     HalpIommuTraceFault @ 0x1405161EC (HalpIommuTraceFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x140539C38 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140546808 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x14055046C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140550548 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140550658 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140550768 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140550878 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140550988 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140550A98 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140550BA8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitActivityIdIrp @ 0x140553324 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140557C8C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140557CD0 (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140557D58 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140557E84 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140558010 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14055815C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14055825C (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405583B8 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055859C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405586DC (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055882C (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405588B0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140558AB4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140558B18 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140558C74 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140558DD0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140558E28 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140558E80 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x140558EE0 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140558F98 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055901C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x140559194 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140559218 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1405592AC (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140559304 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14055935C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     KsepDsEventAddDevice @ 0x14057F0B8 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x14057F1E4 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x14057F2E0 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x14057F3C4 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14057F4DC (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14057F5DC (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x14057F6B0 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14057F76C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14057F87C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x14057F978 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x14057FA5C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x14057FB40 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x14057FC3C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x14057FD14 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x14057FE1C (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14058014C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14058024C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14058EA64 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14058EB5C (PoTraceDynamicTickDisabled.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x14058EDC8 (PoTraceSystemTimerResolutionIgnore.c)
 *     PopDiagTraceAbnormalReset @ 0x14058F59C (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14058F63C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14058F750 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14058F848 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14058FA44 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14058FB9C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14059015C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140590238 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1405904E0 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1405906C0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140590A18 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140590AD4 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x140590BCC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140590CC4 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140591030 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140591134 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140591214 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14059141C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x14059155C (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceIdleCheck @ 0x140591810 (PopDiagTraceIdleCheck.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14059195C (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140591A0C (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140591AC8 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140591C70 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x140591D10 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140591DB0 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140591F00 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x140592068 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140592130 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSetSystemState @ 0x14059255C (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1405925FC (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1405926F0 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x140592798 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1405928C0 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140592AB8 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140592BEC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1405977CC (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x14059789C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1405979BC (PpmEventCoreParkingStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x140597AB0 (PpmEventCoreParkingStateChangeEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x140597C48 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x140597D08 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsNormalizedTable @ 0x140598054 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140598218 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140598320 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140598428 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14059858C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140598728 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodePreference @ 0x14059892C (PpmEventParkNodePreference.c)
 *     PpmEventParkingCountSelection @ 0x140598A4C (PpmEventParkingCountSelection.c)
 *     PpmEventPlatformVetoRequest @ 0x140598BAC (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140598C84 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140598E90 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140598FA0 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x140599200 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140599360 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14059945C (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140599648 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140599710 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x140599908 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTracePreVetoAccounting @ 0x140599A10 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140599C40 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVetoReasonRundown @ 0x140599ED4 (PpmEventVetoReasonRundown.c)
 *     PpmEventVpQosChange @ 0x140599FC8 (PpmEventVpQosChange.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x14059C2E0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14059E2FC (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14059E404 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopSqmAddToStream @ 0x14059FD10 (PopSqmAddToStream.c)
 *     SshpWriteBlocker @ 0x1405A0960 (SshpWriteBlocker.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1405C8A9C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1405C8B68 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1405C8CA0 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1405C8D6C (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1405C9740 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1405CB888 (SmKmSqmAddToStream.c)
 *     EtwpTraceLostEvent @ 0x1405F9F94 (EtwpTraceLostEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FA2E0 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceLostWppEvent @ 0x1405FA3B8 (EtwpTraceLostWppEvent.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1405FA514 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceDpcProfilingStack @ 0x1405FA780 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x1405FA810 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x1405FAF6C (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1405FB148 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwpPsProvTracePriority @ 0x1405FBD5C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1405FC940 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FD9EC (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14060C7C0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecord @ 0x140610D80 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140610E00 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x140611080 (WheapLogProcessTerminateEvent.c)
 *     CmpThreadInfoLogStack @ 0x140613BCC (CmpThreadInfoLogStack.c)
 *     MiLogBadMapper @ 0x14062E9E8 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x140654B1C (MiLogSlabEntryAllocateFailure.c)
 *     SmKmEtwLogStoreChange @ 0x1409D5984 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1409D5A94 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x1409E3534 (EtwpPsProvTraceImage.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA4A40 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceDirtyTransition @ 0x140B32210 (PopDiagTraceDirtyTransition.c)
 *     EtwpTraceSystemInitialization @ 0x140B41904 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140B44430 (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B714D4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B93184 (PopDiagTraceAdaptiveBootOverride.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140231970 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
