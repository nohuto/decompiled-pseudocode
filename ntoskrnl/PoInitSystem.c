/*
 * XREFs of PoInitSystem @ 0x140B45CAC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     HalGetInterruptTargetInformation @ 0x14037D3A0 (HalGetInterruptTargetInformation.c)
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140380714 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopComputeCounterShifts @ 0x140380C64 (PopComputeCounterShifts.c)
 *     PopInitilizeAcDcSettings @ 0x140380E04 (PopInitilizeAcDcSettings.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     PopLidReliabilityInit @ 0x14038FDA0 (PopLidReliabilityInit.c)
 *     PpmInitIllegalThrottleLogging @ 0x14039001C (PpmInitIllegalThrottleLogging.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403BD3B0 (ExInitializeNPagedLookasideListInternal.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopDiagTraceAbnormalReset @ 0x14058F59C (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x140592D54 (PopTraceBootError.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     RtlSetSystemBootStatus @ 0x14073AEB0 (RtlSetSystemBootStatus.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     PopInitializeWorkItem @ 0x14080FA3C (PopInitializeWorkItem.c)
 *     PpmIdleRegisterDefaultStates @ 0x14080FA58 (PpmIdleRegisterDefaultStates.c)
 *     KeRegisterProcessorChangeCallback @ 0x14080FF70 (KeRegisterProcessorChangeCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140810204 (PopSetupHighPerfPowerRequest.c)
 *     EmpProviderRegister @ 0x140810DB0 (EmpProviderRegister.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140817678 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopIdleWakeInitialize @ 0x14084E198 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x14084E6B0 (PpmEnableWmiInterface.c)
 *     PopThermalHandlePreviousShutdown @ 0x14085C2A8 (PopThermalHandlePreviousShutdown.c)
 *     PopInitializePowerPolicySimulate @ 0x14085D284 (PopInitializePowerPolicySimulate.c)
 *     PopUpdateUpgradeInProgress @ 0x14085E230 (PopUpdateUpgradeInProgress.c)
 *     PopDefaultPolicy @ 0x14085E8D8 (PopDefaultPolicy.c)
 *     RtlGetSystemBootStatus @ 0x14085FAD0 (RtlGetSystemBootStatus.c)
 *     PopSendFanNoiseChangeWnf @ 0x14086012C (PopSendFanNoiseChangeWnf.c)
 *     PopSetupMixedRealitytNotification @ 0x140860254 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x140860760 (PopInitializePreSleepNotifications.c)
 *     PopCheckSkipTick @ 0x140860800 (PopCheckSkipTick.c)
 *     PopResetActionDefaults @ 0x140860E68 (PopResetActionDefaults.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140860F88 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1408615A8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1408615E4 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140861620 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14086165C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140861698 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x1408616D4 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140861710 (PopSetupAirplaneModeNotification.c)
 *     PopUpdateConsoleDisplayState @ 0x140870EA4 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14087118C (PopLogSleepDisabled.c)
 *     PopDiagTraceSkipTick @ 0x14098E53C (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 *     PpmParkInitialize @ 0x140B31A10 (PpmParkInitialize.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B43F40 (PopCreateTimebrokerServiceSid.c)
 *     PopInitShutdownList @ 0x140B43FE0 (PopInitShutdownList.c)
 *     PopDiagInitialize @ 0x140B442C4 (PopDiagInitialize.c)
 *     HalReportResourceUsage @ 0x140B45C40 (HalReportResourceUsage.c)
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140B46CF0 (PopUserShutdownScenarioInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140B46D2C (PopPowerAggregatorInitialize.c)
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140B46FF8 (PopInitializeDirectedDrips.c)
 *     PopDeepSleepInitialize @ 0x140B4702C (PopDeepSleepInitialize.c)
 *     PopEsInit @ 0x140B47078 (PopEsInit.c)
 *     PopSleepstudyInitialize @ 0x140B470D0 (PopSleepstudyInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140B47194 (PopInitializePowerButtonHold.c)
 *     PopBatteryInitPhaseTwo @ 0x140B4735C (PopBatteryInitPhaseTwo.c)
 *     PopCoalescingInitialize @ 0x140B53A80 (PopCoalescingInitialize.c)
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 *     PopInitializeAdpm @ 0x140B5DF58 (PopInitializeAdpm.c)
 *     PoFxRegisterDebugger @ 0x140B5E498 (PoFxRegisterDebugger.c)
 *     PpmInitHeteroPolicy @ 0x140B623E4 (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x140B62494 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140B62588 (PpmPerfInitialize.c)
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 *     PpmInitIdlePolicy @ 0x140B64730 (PpmInitIdlePolicy.c)
 *     PopInitializePowerSettingCallbacks @ 0x140B65314 (PopInitializePowerSettingCallbacks.c)
 *     PoFxInitPowerManagement @ 0x140B65838 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 *     PopFanReportBootStartDevices @ 0x140B68010 (PopFanReportBootStartDevices.c)
 *     PopRecorderInit @ 0x140B68B08 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140B69E2C (PopInitDripsWakeAccounting.c)
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 *     PopBatteryInit @ 0x140B6C9F4 (PopBatteryInit.c)
 *     PopUmpoInitializeChannel @ 0x140B6CC1C (PopUmpoInitializeChannel.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B6DF34 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140B6E534 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B6EC5C (PopInitializeHighPerfPowerRequest.c)
 *     PopInitializePowerSettings @ 0x140B70508 (PopInitializePowerSettings.c)
 *     PpmInitCoreParkingPolicy @ 0x140B706B8 (PpmInitCoreParkingPolicy.c)
 *     PopWatchdogInit @ 0x140B70B70 (PopWatchdogInit.c)
 *     PpmCheckInit @ 0x140B71320 (PpmCheckInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B714D4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitializeSystemIdleDetection @ 0x140B717E4 (PopInitializeSystemIdleDetection.c)
 *     PopInitVideoWnfState @ 0x140B71A1C (PopInitVideoWnfState.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B71E38 (PopCreateIdlePhaseWatchdog.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140B7203C (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B720F8 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPowerButtonSuppressionInit @ 0x140B72154 (PopPowerButtonSuppressionInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B72350 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopSetupKsrCallbacks @ 0x140B72630 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140B936AC (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140B9370C (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B93794 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // edi
  unsigned __int8 v12; // r14
  int v13; // eax
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-30h] BYREF
  int v51; // [rsp+48h] [rbp-28h] BYREF
  __int128 v52; // [rsp+50h] [rbp-20h] BYREF
  __int64 v53; // [rsp+60h] [rbp-10h]

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v53 = 0LL;
  v52 = 0LL;
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
    PopSleepstudyInitialize(0LL);
    TimebrokerServiceSid = PopPowerAggregatorInitialize(0LL);
    if ( TimebrokerServiceSid >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      qword_140C3D268 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140C3D278 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      qword_140C3A368 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140C3A2B8 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140C3E558 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140C3A238 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      memset(PopStateTransitonBlameStack, 0, 0xA18uLL);
      dword_140C3E2C0 = -1;
      BootStatFileHandle = 0LL;
      BootStatDisableFlush = (qword_140C316F8 & 4) != 0;
      BootStatFileHandleAcquired = 0;
      xmmword_140C3E2C8 = 0LL;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      *(_QWORD *)&xmmword_140C3E2C8 = 0LL;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140C3F328 = 0LL;
      PopBsdUpdateLock = 0LL;
      LOWORD(PopBsdFlushInactiveEvent.Header.Lock) = 1;
      PopBsdFlushInactiveEvent.Header.Size = 6;
      PopBsdFlushInactiveEvent.Header.SignalState = 1;
      PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
      PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
      PopInitializeWorkItem((__int64)&PopBsdFlushWorkItem, (__int64)PopBsdFlushWorker, v5);
      PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v6);
      PopWdiCurrentScenarioInstanceId = 0LL;
      PopWdiCurrentScenario = (__int64)&NullGuid;
      PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v7);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v8);
      qword_140C3A218 = 0LL;
      PopInputSuppressionLock = 0LL;
      qword_140C3F2A8 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      qword_140C3F298 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140C3D2F8 = (__int64)&qword_140C3D2F0;
        qword_140C3D2F0 = (__int64)&qword_140C3D2F0;
        qword_140C3D288 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140C3D298 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140C3D348 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140C3ED68 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140C3D2B8 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140CF7A08 = 0LL;
        word_140C3D2E8 = 1;
        byte_140C3D2EA = 6;
        dword_140C3D2EC = 1;
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
        v9 = PopIdleScanInterval;
        qword_140C3D368 = (__int64)&PopIdleDetectList;
        PopIdleDetectList = (__int64)&PopIdleDetectList;
        PopDopeGlobalLock = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v9 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v9 = 300;
            PopIdleScanInterval = 300;
          }
          PopIdleBackgroundIgnoreCount = (v9 + 59) / v9;
          PopBackgroundTaskIgnoreCount = (v9 + 179) / v9;
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
        qword_140C3D5E8 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140C3D5F8 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140C3D608 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140C3D378 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        PopWaitingForTransitionLock = 0;
        qword_140C3C328 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140C3D388 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140C3D3A4;
        PopDefaultPolicy(dword_140C3D3A4);
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        LODWORD(PopAdminPolicy) = 2;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140C3D510 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        PopCoolingMode = 0;
        dword_140CF7A00 = -1;
        dword_140CF7A04 = 2;
        PpmInitPolicyConfiguration();
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0LL);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140C3C548 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        qword_140C3C888 = 0LL;
        qword_140C3C898 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionLock = 0LL;
        dword_140C3D680 = 4;
        byte_140C3D684 = 0;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140C3D688 = (__int64)PopShutdownHandler;
        qword_140C3E3A8 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140C3E3E8 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140C3A018 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140D168F0 = (__int64)&qword_140D168E8;
        qword_140D168E8 = (__int64)&qword_140D168E8;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopAwayModeUserPresenceTimer = 8LL;
        qword_140C3EC38 = (__int64)&qword_140C3EC30;
        qword_140C3EC30 = (__int64)&qword_140C3EC30;
        PopWakeInfoCount = 0;
        PopCurrentWakeInfo = 0LL;
        PopWakeSourceLock = 0LL;
        LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
        PopWakeSourceAvailable.Header.Size = 6;
        PopWakeSourceAvailable.Header.SignalState = 1;
        PopWakeSourceWorkState = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140C3A020 = 0LL;
        qword_140C3A038 = 0LL;
        qword_140C3A010 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140D168F8 = 0LL;
        dword_140D1691C = 0;
        word_140D16918 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        word_140C3EC28 = 1;
        byte_140C3EC2A = 6;
        dword_140C3EC2C = 1;
        PoFxInitPowerManagement();
        dword_140C3D4AC = 0;
        qword_140C3D4B0 = 100LL;
        qword_140C3D4B8 = 100LL;
        dword_140C3D4C0 = 100;
        PopNetInitialize(0LL);
        PopInitializePowerButtonHold(0LL);
        qword_140C39C08 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        v10 = *(_QWORD *)(a2 + 240);
        LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v10 + 3440);
        if ( *(_BYTE *)(v10 + 3440) )
        {
          *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v10 + 3448);
          xmmword_140C6AB58 = *(_OWORD *)(v10 + 3456);
          xmmword_140C6AB68 = *(_OWORD *)(v10 + 3472);
        }
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0LL);
          SshInitialize(0LL);
LABEL_84:
          TimebrokerServiceSid = 0;
          return TimebrokerServiceSid >= 0;
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    qword_140C3C558 = 0LL;
    PopFanLock = 0LL;
    dword_140C3C5CC = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140C3D830 = 0LL;
    qword_140C3D838 = 0LL;
    qword_140C3D828 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1LL);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopEsInit(1LL);
    PopInitializePowerSettingCallbacks();
    TimebrokerServiceSid = PopEtInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopPowerRequestInitialize();
      if ( TimebrokerServiceSid >= 0 )
      {
        TimebrokerServiceSid = PopPowerAggregatorInitialize(1LL);
        if ( TimebrokerServiceSid >= 0 )
        {
          TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopCheckPowerSourceAfterRtcWakeInitialize();
            PopUserShutdownScenarioInitialize(1LL);
            PopWatchdogInit();
            PopInitializePowerButtonHold(1LL);
            PopInitDripsWakeAccounting();
            TimebrokerServiceSid = EmpProviderRegister(
                                     0LL,
                                     (__int64)&PopEmEntry,
                                     1u,
                                     (__int64)&PopEmCallback,
                                     2u,
                                     (__int64 *)&PerformanceFrequency);
            if ( TimebrokerServiceSid >= 0 )
            {
              PerformanceFrequency.LowPart = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &PerformanceFrequency);
              if ( PerformanceFrequency.LowPart == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              goto LABEL_84;
            }
          }
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
      goto LABEL_84;
    TimebrokerServiceSid = PopDiagInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    SshInitialize(3LL);
    PopSleepstudyInitialize(3LL);
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    TimebrokerServiceSid = PopUserShutdownScenarioInitialize(3LL);
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    v11 = 2;
    v12 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v11 = 0;
        v13 = 0;
LABEL_42:
        PoSkipTickMode = v13;
        PopDiagTraceSkipTick(v11 == 2, v12);
        goto LABEL_43;
      }
      v12 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v52) >= 0 )
      {
        PopApicMode = HIDWORD(v53);
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_43:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        LODWORD(v53) = 0;
        v52 = 0LL;
        if ( RtlGetSystemBootStatus(13, (__int64)&v52, 20, 0LL) >= 0 && HIDWORD(v52) )
        {
          PopTraceBootError();
          LODWORD(v53) = 0;
          v52 = 0LL;
          RtlSetSystemBootStatus(13, (__int64)&v52, 20);
        }
        if ( (unsigned __int8)off_140C01CE0[0]()
          || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
        {
          PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock();
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( byte_140C3D6F4 )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v14 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          PopSecureLaunched = 1;
          v14 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v14 )
            goto LABEL_61;
        }
        else
        {
          LOBYTE(v14) = 31;
        }
        PopLogSleepDisabled(21, v14, 0LL, 0LL);
LABEL_61:
        PopDeepSleepInitialize(3LL);
        PopInitializePowerPolicySimulate();
        if ( (PopSimulate & 1) != 0 )
        {
          byte_140C3D6FE = 1;
          *(_QWORD *)&xmmword_140C3D700 = 0x19000000064LL;
          *((_QWORD *)&xmmword_140C3D700 + 1) = 0xFFFF0000000ALL;
          LODWORD(qword_140C3D720) = 4;
          dword_140C3D728 = 2;
        }
        if ( (PopSimulate & 2) != 0 )
        {
          LODWORD(PopCapabilities) = 16843009;
          WORD2(PopCapabilities) = 257;
          BYTE6(PopCapabilities) = 1;
          unk_140C3D6F1 = 257;
        }
        PopResetCurrentPolicies();
        PopInitializeAdpm();
        PopEsInit(3LL);
        PopInitilizeAcDcSettings();
        v51 = 1;
        PopUpdateConsoleDisplayState(1u);
        ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v51);
        PopNetInitialize(3LL);
        PopReleasePolicyLock();
        PopIdleInitAoAcDozeS4Timer();
        PopCreateIdlePhaseWatchdog(v16, v15, v17);
        PopInitializeSystemIdleDetection(v19, v18, v20);
        PopInitializePreSleepNotifications();
        v21 = *(_QWORD *)(a2 + 240);
        PopHiberLoaderScratchPages = *(_DWORD *)(v21 + 272);
        PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v21 + 132) & 0x10000000) != 0;
        PopSetupHighPerfPowerRequest();
        PpmEnableWmiInterface();
        if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 2648LL) & 0x8000LL) != 0 )
          PopFasr = 1;
        PopAcquirePolicyLock();
        PopCoalescingInitialize(v23, v22, v24);
        PopReleasePolicyLock();
        PopInitializeDirectedDrips(3LL);
        ExInitializeResourceLite(&PopDripsWatchdogContext);
        if ( PopPlatformAoAc )
        {
          if ( (int)PopDripsWatchdogInitializeActions(v26, v25, v27) < 0
            || (int)PopDripsWatchdogInitializeCallbackTimer(v29, v28, v30) < 0
            || (int)PopDripsWatchdogInitializeDiagnosticTimer(v32, v31, v33) < 0 )
          {
            goto LABEL_73;
          }
          dword_140C39568 |= 2u;
        }
        dword_140C39568 |= 1u;
LABEL_73:
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
        TtmInit(v35, v34);
        if ( PopPlatformAoAc )
        {
          PerformanceFrequency.LowPart = 1;
          EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &PerformanceFrequency);
          if ( PerformanceFrequency.LowPart == 2 )
            PopErrataReportingIncorrectLidState = 1;
        }
        PopLidReliabilityInit(v36);
        if ( PopPlatformAoAc )
        {
          if ( PopLidStateForInputSuppressionOverride != -1 )
            PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
          PerformanceFrequency.LowPart = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &PerformanceFrequency);
          if ( PerformanceFrequency.LowPart == 2 )
          {
            PopEnableInputSuppression = 1;
          }
          else
          {
            PopEnableInputSuppression = 0;
            if ( PopEnableInputSuppressionOverride != -1 )
              PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
          }
        }
        PopPowerButtonSuppressionInit(v38, v37, v39);
        PopBatteryQueueWork(1u);
        PopSetupKsrCallbacks(v41, v40, v42);
        PopHiberEvaluateSkippingMemoryMapValidation(v44, v43, v45);
        PopReadErrataSkipMemoryOverwriteRequestControlLockAction(v47, v46, v48);
        goto LABEL_84;
      }
    }
    v13 = 2;
    goto LABEL_42;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = EtwRegister(
                           &PPM_ETW_PROVIDER,
                           (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                           0LL,
                           &PpmEtwHandle);
  if ( TimebrokerServiceSid >= 0 )
  {
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock(&PopFxSystemLatencyLock);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      PopInitVideoWnfState();
      goto LABEL_84;
    }
  }
  return TimebrokerServiceSid >= 0;
}
