/*
 * XREFs of ExQueueWorkItem @ 0x14033F3D0
 * Callers:
 *     PspRequestDeferredJobNotification @ 0x140200BEC (PspRequestDeferredJobNotification.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140204780 (IoReportTargetDeviceChangeAsynchronous.c)
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     CmpArmDelayedCloseTimer @ 0x140243848 (CmpArmDelayedCloseTimer.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     PspHardDereferenceSiloWorker @ 0x14029432C (PspHardDereferenceSiloWorker.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiFreeCombineBlock @ 0x14029DDE0 (MiFreeCombineBlock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PpmCheckPeriodicStart @ 0x1402D1CE0 (PpmCheckPeriodicStart.c)
 *     PoLatencySensitivityHint @ 0x1402D2A30 (PoLatencySensitivityHint.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x1402EC270 (KiIdealProcessorRebalancerTimerCallback.c)
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402EDF30 (LZNT1DecompressChunkNewThread.c)
 *     IopLoadDriverImage @ 0x1402EE2DC (IopLoadDriverImage.c)
 *     PfSnTraceTimerRoutine @ 0x1402EEED0 (PfSnTraceTimerRoutine.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     HalpGenericPolledDpcRoutine @ 0x1402F8140 (HalpGenericPolledDpcRoutine.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1402F8B5C (EtwpTiAsyncVadQueryEventWrite.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     ExpHpGCTimerCallback @ 0x1402FA460 (ExpHpGCTimerCallback.c)
 *     MmSetAccessLogging @ 0x1402FF710 (MmSetAccessLogging.c)
 *     WdipTimeoutTimerRoutine @ 0x140301A30 (WdipTimeoutTimerRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x140302280 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x140302F30 (EtwpCoverageFlushTimerCallback.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x140302F80 (CmpDelayFreeRMDpcRoutine.c)
 *     PfSnGetFileInformation @ 0x140307D00 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     ExpWaitForResource @ 0x140342994 (ExpWaitForResource.c)
 *     SepQueueWorkItem @ 0x140355178 (SepQueueWorkItem.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140358874 (SmKmStoreDeleteWhenEmpty.c)
 *     MiCheckLogPinDriverAddresses @ 0x140361244 (MiCheckLogPinDriverAddresses.c)
 *     MiWakeBadPageSignalThread @ 0x14036165C (MiWakeBadPageSignalThread.c)
 *     EmpQueueRuleUpdateState @ 0x1403861E4 (EmpQueueRuleUpdateState.c)
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038AB90 (MiFreeUnusedPfnPagesDpc.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     PopFxReinitializeAccountingInstance @ 0x140393EC4 (PopFxReinitializeAccountingInstance.c)
 *     IoWMIWriteEvent @ 0x1403A2D60 (IoWMIWriteEvent.c)
 *     SepAdtDetermineInsertQueue @ 0x1403A7B30 (SepAdtDetermineInsertQueue.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1403A89D4 (CcQueueAsyncGetDeviceGuid.c)
 *     PoNotifyMediaBuffering @ 0x1403AA200 (PoNotifyMediaBuffering.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403ACDFC (CcSetupWatchForRegistryChanges.c)
 *     PopFanIrpComplete @ 0x1403AE190 (PopFanIrpComplete.c)
 *     PopThermalIrpComplete @ 0x1403AFC90 (PopThermalIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1403B0980 (PopBatteryWakeDpc.c)
 *     HalpCmcDeferredRoutine @ 0x1403B0B60 (HalpCmcDeferredRoutine.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B0DA0 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     ExpDebuggerDpcRoutine @ 0x1403B18E0 (ExpDebuggerDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403BDFF4 (PnpUnlockDeviceActionQueue.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x1403C13F0 (IoWriteErrorLogEntry.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403C7B20 (ExpTimeRefreshDpcRoutine.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1403CFE90 (CcTelemetryPeriodicTimerDpc.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1403D0A20 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     PopWatchdogDpc @ 0x1403D0E90 (PopWatchdogDpc.c)
 *     PfSnPowerBoostDpc @ 0x1403D2110 (PfSnPowerBoostDpc.c)
 *     CcBcbProfiler @ 0x1403DD7C0 (CcBcbProfiler.c)
 *     ExpWaitForFastResource2 @ 0x140411334 (ExpWaitForFastResource2.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14045F908 (EtwpQueuePerfMemInfoWorkItem.c)
 *     HalpQueueMapBufferWorker @ 0x140503034 (HalpQueueMapBufferWorker.c)
 *     IoFreeAdapterChannelV3 @ 0x14050DD90 (IoFreeAdapterChannelV3.c)
 *     HalpBlkWdTimerRoutine @ 0x140528CE0 (HalpBlkWdTimerRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140545EE4 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x140545FE0 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140554680 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140555BC0 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140555D20 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14055C570 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14055D9D0 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1405627B0 (IopDeviceEjectComplete.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x1405790D0 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x140579A48 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057DD74 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x14057DE00 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1405805F0 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140580638 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x140580860 (PfpPowerActionDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x140580B80 (PfSnTracingStateDpcRoutine.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058B560 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUserPresentSet @ 0x14058BAC4 (PopUserPresentSet.c)
 *     PopWakeInfoDereference @ 0x14058C3B8 (PopWakeInfoDereference.c)
 *     PopPowerActionWatchdog @ 0x14058CF90 (PopPowerActionWatchdog.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x140595E50 (PopSleepstudyScenarioStopTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x140595F90 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140596A40 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059B664 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059BC20 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x14059C3C0 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405A1260 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405A12A0 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B72BC (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BD890 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CADD8 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarDoLiveDump @ 0x1405D35B0 (CarDoLiveDump.c)
 *     EtwpContainerStateWnfCallback @ 0x1405F9B70 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x1405FD6E0 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140600220 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140603990 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140603D00 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140603E50 (ExpTimeZoneDpcRoutine.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406066A4 (ExpTrackRaiseLimitNotification.c)
 *     ExpHotAddProcessorToWorkers @ 0x14060AA78 (ExpHotAddProcessorToWorkers.c)
 *     ExpSvmDpcRoutine @ 0x14060C450 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140610990 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140610BC4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140610C40 (WheaFlushETWEventsDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1406115E4 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x140611640 (WheapWorkQueueDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x140613E20 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x140614050 (CmpLazyCommitDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MiRemovePendingBadPageNode @ 0x1406284EC (MiRemovePendingBadPageNode.c)
 *     MiWakeFileOnlyReaper @ 0x14063E05C (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x14064B500 (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x14064E904 (MiNoPagesLastChance.c)
 *     MmReportParkedProcessors @ 0x140653870 (MmReportParkedProcessors.c)
 *     WdtpTimerCallback @ 0x140671BB0 (WdtpTimerCallback.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpClaimGlobalQuota @ 0x14072C8EC (CmpClaimGlobalQuota.c)
 *     CmpCanGrowHive @ 0x14073039C (CmpCanGrowHive.c)
 *     NtNotifyChangeSession @ 0x14075E0F0 (NtNotifyChangeSession.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140778E48 (PiDqObjectManagerHandleObjectEvent.c)
 *     PsSetProcessWin32Process @ 0x140784640 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x140789F6C (PspScheduleEnforcementWorker.c)
 *     ExpWnfStartKernelDispatcher @ 0x14078D67C (ExpWnfStartKernelDispatcher.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14078F2C0 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140793224 (SepScheduleImageVerificationCallbacks.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140793334 (PiProcessNewDeviceNodeAsync.c)
 *     PfSnEndProcessTrace @ 0x140796460 (PfSnEndProcessTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140798ED0 (EtwpCrimsonProvEnableCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140799960 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PfSnPrefetchScenario @ 0x1407E1578 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407E196C (PfSnPrefetchSectionsCleanup.c)
 *     PnpBootPhaseComplete @ 0x14081BD60 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x1408296E0 (PopThermalZoneAdd.c)
 *     WdipSemStartTimeoutCheck @ 0x1408319B4 (WdipSemStartTimeoutCheck.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
 *     WmipQueueLegacyEtwWork @ 0x1408507E0 (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140853EE0 (PopFanAdd.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     PerfDiagpRequestState @ 0x14085B4AC (PerfDiagpRequestState.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 *     PiDrvDbLoadNode @ 0x1408693C4 (PiDrvDbLoadNode.c)
 *     WmipQueueRegWork @ 0x140869990 (WmipQueueRegWork.c)
 *     PopEsWorkItemSchedule @ 0x14086E7F0 (PopEsWorkItemSchedule.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140873100 (PopPowerAggregatorScheduleWorker.c)
 *     PnpChainDereferenceComplete @ 0x14087CAC8 (PnpChainDereferenceComplete.c)
 *     CmpForceFlushForCoalescing @ 0x1408A6EA0 (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x14093679C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1409386E8 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x140939CC0 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x140942874 (IopSendMessageToTrackService.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14094F200 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     IoReplacePartitionUnit @ 0x140951CD0 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140959518 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x140960784 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409818B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxNotifySxTransitionState @ 0x1409825D4 (PopFxNotifySxTransitionState.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140990A90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x140991F80 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x140999B60 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1409A9AC8 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AA20C (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409ADB18 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1409B0DEC (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1409BF320 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1409CD24C (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x1409D90F4 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409E9F70 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409FD980 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140A05070 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A05140 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0CE68 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x140A0EDE4 (CmpDiskFullWarning.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AA8C04 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     KdpTimeSlipDpcRoutine @ 0x140AAD0C0 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140ABEEB8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140AD98FC (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140AE90F4 (LogFwReport.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140B544A8 (WmipInitializeRegistration.c)
 *     HalpAcpiDetectPiix4 @ 0x140B62B08 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B62B7C (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140B65D30 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     ExpValidateWorkItem @ 0x14033F620 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x14033F670 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x14033F6C0 (KeInsertPriQueue.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rdi
  int v4; // r13d
  char v5; // bl
  __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int NextNode; // eax
  int v10; // ebp
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  ExpValidateWorkItem((ULONG_PTR)WorkItem);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = ExpBuiltinPriorities[v3];
  v5 = 0;
  LODWORD(v6) = 0;
  v24 = 0;
  v7 = *((_QWORD *)PspSystemPartition + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  NextNode = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v10 = NextNode;
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v11 != (unsigned __int16 *)((char *)&KiNodeInit + 304 * (unsigned __int16)NextNode) )
      {
        if ( v11 )
        {
          v12 = 8LL * *v11;
          if ( *(_QWORD *)(*(_QWORD *)(v12 + *(_QWORD *)(v7 + 16)) + 264LL) >= 2uLL )
          {
            v13 = **(_QWORD **)(v12 + *(_QWORD *)(v7 + 8));
            if ( (v13 & 1) == 0 )
            {
              if ( v13 )
              {
                v14 = *(_DWORD *)(v13 + 712) & 0x3FFF;
                if ( (*(_DWORD *)(v13 + 712) & 0x4000) != 0 )
                  --v14;
                if ( v14 >= (2 * *(_DWORD *)(v13 + 716)) >> 1 )
                  break;
              }
            }
          }
        }
      }
      NextNode = MmGetNextNode(v10, &v24);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_18;
    }
    v15 = **(_QWORD **)(*(_QWORD *)(v7 + 8) + 8LL * *v11);
    if ( (v15 & 1) != 0 )
      v15 = 0LL;
    KeInsertPriQueue(v15, (_DWORD)WorkItem, v4, v6, 0);
    if ( (unsigned __int8)ExpNewThreadNecessary(v15, *(unsigned int *)(v15 + 720), v16, v17) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL * *v11) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_18:
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v23 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
