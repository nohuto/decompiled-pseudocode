/*
 * XREFs of PoInitSystem @ 0x140A3ED78
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14034A828 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A130 (ExInitializeNPagedLookasideList.c)
 *     PopBatteryQueueWork @ 0x14039A3BC (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9224 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403A9424 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C69D0 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9390 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C96A0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC128 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD544 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x140570A14 (PopDiagTraceAbnormalReset.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14077EB0C (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x1407813E4 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14078DEE8 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14078E8C8 (PopResetActionDefaults.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407914E8 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x140791618 (PopInitializeWorkItem.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14079A2B0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x14079CB48 (PopResetCurrentPolicies.c)
 *     EmpProviderRegister @ 0x14079D410 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB3CC (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407C6E58 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407C75CC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8720 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0960 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407D24B0 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407D28F8 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D40CC (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407D42AC (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D48D4 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4960 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D4E4C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D4E88 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D4EC4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D4F00 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D4F3C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D4F78 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D4FB4 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407D5390 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408EB218 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1409900E0 (EmClientQueryRuleState.c)
 *     HalReportResourceUsage @ 0x140A3C280 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A3EBF8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3F95C (PopEsInit.c)
 *     SshInitialize @ 0x140A3F9B4 (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A3FA80 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A3FAB4 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A3FC5C (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A3FCA8 (PopPowerAggregatorInitialize.c)
 *     PopDiagInitialize @ 0x140A40148 (PopDiagInitialize.c)
 *     PopCoalescingInitialize @ 0x140A446BC (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x140A4477C (PopProcessBootstat.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A6B410 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A6B94C (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A6CC60 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6CCFC (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A6D67C (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A6D6E0 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A6DBE0 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A6E89C (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A702C8 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A704D4 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A70AB0 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A70C40 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A710FC (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7127C (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A7230C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A725E8 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140A72A44 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A72E48 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A72F08 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A72FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A73124 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A731B8 (PopInitializeSystemIdleDetection.c)
 *     PopWakeSourceInit @ 0x140A7345C (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A73888 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A73A68 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A73DD8 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A73E44 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A73F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A73F7C (PopCreateIdlePhaseWatchdog.c)
 *     PopSetupKsrCallbacks @ 0x140A73FF0 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A9346C (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A934CC (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A93554 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  signed __int64 v16; // rdx
  int v17; // ebx
  unsigned __int8 v18; // di
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int8 v21; // zf
  int Buffer; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+68h] [rbp-8h]
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  int v28; // [rsp+C0h] [rbp+50h] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopPowerAggregatorInitialize(0LL);
    qword_140C22F78 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C22F88 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140C20CE8 = 0LL;
    PopPowerEventLock = 0LL;
    qword_140C20CC8 = 0LL;
    PopSystemIdleLock = 0LL;
    qword_140C244A8 = 0LL;
    PopCoalRegistrationListLock = 0LL;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0x100uLL, 0x72496F50u, 0);
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    BootStatDisableFlush = 0;
    PopBsdSkipLogging = 0;
    qword_140C25198 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v7);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v8);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v9);
    qword_140C217B8 = 0LL;
    qword_140C25208 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopInputSuppressionLock = 0LL;
    qword_140C25218 = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport(v11, v10, v12);
    PpmCheckCurrentPipelineId = 6;
    qword_140C21098 = (__int64)PpmCheckRun;
    LODWORD(PpmCheckDpc) = 787;
    qword_140C210A0 = 0LL;
    qword_140C210B8 = 0LL;
    qword_140C21090 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140C21038 = (__int64)PpmCheckPeriodicStart;
    qword_140C21040 = 0LL;
    qword_140C21058 = 0LL;
    qword_140C21030 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140C230B8 = (__int64)&qword_140C230B0;
    qword_140C230B0 = (__int64)&qword_140C230B0;
    qword_140C230C8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C230D8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140C230F8 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C24B98 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    qword_140C23088 = 0LL;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C50088 = 0LL;
    word_140C230A8 = 1;
    byte_140C230AA = 6;
    dword_140C230AC = 1;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    PopDisableSleepMutex.Count = 1;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v13 = PopIdleScanInterval;
    qword_140C22FA8 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v13 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v13 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v13 + 59) / v13;
      PopBackgroundTaskIgnoreCount = (v13 + 179) / v13;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_140C23208 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C23218 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C23228 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140C23238 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C23248 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C23264;
    PopDefaultPolicy(dword_140C23264);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C233D0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C50080 = -1;
    dword_140C50084 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    qword_140C23538 = 0LL;
    PopPolicyDeviceLock = 0LL;
    PopBatteryInit();
    qword_140C23528 = 0LL;
    PopFanLock = 0LL;
    PopThermalInit();
    qword_140C23858 = 0LL;
    qword_140C23868 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_140C23168 = (__int64)PopShutdownHandler;
    PopCoolingExtensionLock = 0LL;
    dword_140C23160 = 4;
    byte_140C23164 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140C20B38 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140CF4650 = (__int64)&qword_140CF4648;
    qword_140CF4648 = (__int64)&qword_140CF4648;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140C247B8 = (__int64)&qword_140C247B0;
    qword_140C247B0 = (__int64)&qword_140C247B0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    PpmWmiIdleAccountingTimer.Period = 0;
    PpmWmiIdleAccountingTimer.Processor = 0;
    PpmWmiIdleAccountingDpc = 275;
    qword_140C20B40 = 0LL;
    qword_140C20B58 = 0LL;
    qword_140C20B30 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140CF4658 = 0LL;
    dword_140CF467C = 0;
    word_140CF4678 = 0;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140C247A8 = 1;
    byte_140C247AA = 6;
    dword_140C247AC = 1;
    PoFxInitPowerManagement();
    dword_140C2336C = 0;
    qword_140C23370 = 100LL;
    qword_140C23378 = 100LL;
    dword_140C23380 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v14 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v14 + 3408);
    if ( *(_BYTE *)(v14 + 3408) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v14 + 3416);
      xmmword_140C54380 = *(_OWORD *)(v14 + 3424);
      xmmword_140C54390 = *(_OWORD *)(v14 + 3440);
    }
    TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopInitializeDirectedDrips(0LL);
    SshInitialize(0LL);
  }
  if ( a1 != 1 )
    goto LABEL_3;
  PopPowerAggregatorInitialize(1LL);
  if ( HviIsAnyHypervisorPresent() )
  {
    PpmExitLatencyCheckEnabled = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 4 )
    PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
  PopUmpoInitializeChannel();
  PopUmpoInitializeMonitorChannel();
  PopPdcDeviceListLock = 0LL;
  PopEsInit(1LL);
  PopInitializePowerSettingCallbacks();
  TimebrokerServiceSid = PopEtInit();
  if ( TimebrokerServiceSid >= 0 )
  {
    TimebrokerServiceSid = PopPowerRequestInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopCheckPowerSourceAfterRtcWakeInitialize();
        PopWatchdogInit();
        PopInitializePowerButtonHold(1LL);
        TimebrokerServiceSid = PpmInitHeteroEngine();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitDripsWakeAccounting();
          TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v24);
          if ( TimebrokerServiceSid >= 0 )
          {
            v27 = 1;
            PopErrataDisablePrimaryDeviceFastResume = 0;
            EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v27);
            if ( v27 != 2 )
            {
LABEL_5:
              TimebrokerServiceSid = 0;
              return TimebrokerServiceSid >= 0;
            }
            PopErrataDisablePrimaryDeviceFastResume = 1;
LABEL_3:
            if ( a1 == 2 )
            {
              PoFxRegisterDebugger();
              HalReportResourceUsage(1);
              PopBatteryInitPhaseTwo();
              TimebrokerServiceSid = EtwRegister(
                                       &PPM_ETW_PROVIDER,
                                       (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                                       0LL,
                                       &PpmEtwHandle);
              if ( TimebrokerServiceSid < 0 )
                return TimebrokerServiceSid >= 0;
              PpmEtwRegistered = 1;
              KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
              PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
              LOBYTE(v15) = 1;
              PopInitializeHeteroProcessors(v15, v16);
              PpmReleaseLock(&PpmPerfPolicyLock);
              if ( PpmPerfArtificialDomainSetting != -1 )
                PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
              PpmIdleRegisterDefaultStates();
              PpmCheckInitProcessors(0);
              PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
              PoFxSendSystemLatencyUpdate();
              PpmReleaseLock(&PopFxSystemLatencyLock);
              PopPdcCsCheckSystemVolumeDevice();
              PopUpdateBackgroundCoolingStatus(0);
              PopInitVideoWnfState();
            }
            if ( a1 != 3 )
              goto LABEL_5;
            TimebrokerServiceSid = PopDiagInitialize();
            if ( TimebrokerServiceSid < 0 )
              return TimebrokerServiceSid >= 0;
            SshInitialize(3LL);
            PopTriggerDiagTraceAoAcCapability();
            PopFanReportBootStartDevices();
            v17 = 2;
            v18 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v18 = 0;
                if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v25) >= 0 )
                {
                  PopApicMode = HIDWORD(v26);
                  if ( PopCheckSkipTick() )
                  {
                    PoSkipTickMode = 0;
LABEL_37:
                    PpmInitIllegalThrottleLogging();
                    PopProcessBootstat(a2);
                    if ( (unsigned __int8)off_140C008D0[0]()
                      || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
                    {
                      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
                    }
                    PopIdleWakeInitialize();
                    PopAcquirePolicyLock();
                    PopUpdateUpgradeInProgress(0LL);
                    if ( InitIsWinPEMode )
                      PopLogSleepDisabled(16, 15, 0LL, 0LL);
                    if ( byte_140C233F4 )
                      PopLogSleepDisabled(17, 7, 0LL, 0LL);
                    v19 = 0;
                    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2616LL) & 8) != 0 )
                    {
                      PopSecureLaunched = 1;
                      v19 = 4;
                    }
                    if ( (HvlpFlags & 2) == 0 && VslVsmEnabled )
                      v19 = 31;
                    if ( v19 )
                      PopLogSleepDisabled(21, v19, 0LL, 0LL);
                    PopDeepSleepInitialize(3LL);
                    PopInitializePowerPolicySimulate();
                    if ( (PopSimulate & 1) != 0 )
                    {
                      byte_140C233FE = 1;
                      *(_QWORD *)&xmmword_140C23400 = 0x19000000064LL;
                      *((_QWORD *)&xmmword_140C23400 + 1) = 0xFFFF0000000ALL;
                      LODWORD(qword_140C23420) = 4;
                      dword_140C23428 = 2;
                    }
                    if ( (PopSimulate & 2) != 0 )
                    {
                      LODWORD(PopCapabilities) = 16843009;
                      WORD2(PopCapabilities) = 257;
                      BYTE6(PopCapabilities) = 1;
                      unk_140C233F1 = 257;
                    }
                    PopResetCurrentPolicies();
                    PopInitializeAdpm();
                    PopEsInit(3LL);
                    PopInitilizeAcDcSettings();
                    Buffer = 1;
                    PopUpdateConsoleDisplayState(1u);
                    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
                    PopNetInitialize(3);
                    PopReleasePolicyLock();
                    PopIdleInitAoAcDozeS4Timer();
                    PopCreateIdlePhaseWatchdog();
                    PopInitializeSystemIdleDetection();
                    PopInitializePreSleepNotifications();
                    v20 = *(_QWORD *)(a2 + 240);
                    PopHiberLoaderScratchPages = *(_DWORD *)(v20 + 272);
                    PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v20 + 132) & 0x10000000) != 0;
                    PopSetupHighPerfPowerRequest();
                    PpmEnableWmiInterface();
                    PopAcquirePolicyLock();
                    PopCoalescingInitialize();
                    PopReleasePolicyLock();
                    PopInitializeDirectedDrips(3LL);
                    ExInitializeResourceLite(&PopDripsWatchdogContext);
                    if ( PopPlatformAoAc )
                    {
                      if ( (int)PopDripsWatchdogInitializeActions() < 0
                        || (int)PopDripsWatchdogInitializeCallbackTimer() < 0
                        || (int)PopDripsWatchdogInitializeDiagnosticTimer() < 0 )
                      {
                        goto LABEL_56;
                      }
                      dword_140C21448 |= 2u;
                    }
                    dword_140C21448 |= 1u;
LABEL_56:
                    PopSetupAudioEventNotification();
                    PopSetupMixedRealitytNotification();
                    PopSetupFullScrenVideoNotification();
                    PopSetupUserPresencePredictionNotification();
                    PopSetupSprActiveSessionChangeNotification();
                    PopSetupAirplaneModeNotification();
                    PopSetupBluetoothChargingNotification();
                    PopSetupMobileHotspotNotification();
                    PopThermalHandlePreviousShutdown();
                    PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
                    TtmInit();
                    if ( PopPlatformAoAc )
                    {
                      v28 = 1;
                      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v28);
                      if ( v28 == 2 )
                        PopErrataReportingIncorrectLidState = 1;
                      if ( PopPlatformAoAc )
                      {
                        if ( PopLidStateForInputSuppressionOverride != -1 )
                          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
                        v29 = 1;
                        EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v29);
                        PopEnableInputSuppression = v29 == 2;
                        if ( v29 != 2 && PopEnableInputSuppressionOverride != -1 )
                          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
                      }
                    }
                    PopBatteryQueueWork(1u);
                    PopSetupKsrCallbacks();
                    PopHiberEvaluateSkippingMemoryMapValidation();
                    PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
                    goto LABEL_5;
                  }
                  v17 = 1;
                }
              }
              else
              {
                v17 = 0;
              }
            }
            PoSkipTickMode = v17;
            v21 = v17 == 2;
            if ( v17 != 2 )
            {
              if ( !v18 )
                goto LABEL_37;
              v21 = v17 == 2;
            }
            PopDiagTraceSkipTick(v21, v18);
            goto LABEL_37;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
