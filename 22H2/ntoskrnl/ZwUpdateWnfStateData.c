/*
 * XREFs of ZwUpdateWnfStateData @ 0x1403FD420
 * Callers:
 *     PopThermalSxExit @ 0x140389C4C (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x14039A928 (BapdWriteEtwEvents.c)
 *     FsRtlSendModernAppTermination @ 0x1403C0110 (FsRtlSendModernAppTermination.c)
 *     HvlWnfUpdateStartupState @ 0x1403CFBF0 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxClearDeviceConstraints @ 0x140569D04 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056C7C4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x14056F7AC (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E520 (RtlRaiseCustomSystemEventTrigger.c)
 *     PspChargeProcessWakeCounter @ 0x1405E6B10 (PspChargeProcessWakeCounter.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspEnforceLimits @ 0x140617F9C (PspEnforceLimits.c)
 *     PspJobNotificationWorker @ 0x14065F1B0 (PspJobNotificationWorker.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValue @ 0x1406F36C8 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1406F4DC4 (PopDispatchNotificationsToList.c)
 *     PiUEventNotifyUserMode @ 0x14071A80C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14071AF20 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14071B2D4 (PiUEventNotifyClientPendingEvent.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407256C8 (PopEvaluateGlobalUserStatus.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140758E58 (PiDcContainerRequiresConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772660 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x140773AE0 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x14077A1F0 (PopPolicyTimeChange.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14077FFD0 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x1407813E4 (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x14078B430 (PopPerfBoostPowerRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407CD408 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0960 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x1407D1CF8 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1407D3CB0 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D40CC (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D48D4 (PopUpdateBackgroundCoolingStatus.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E814 (CmFcpManagerPublishChangeNotifications.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408878A0 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D118 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2B50 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2BDC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1408A2D2C (PiUEventSendDeviceInstallNotification.c)
 *     PiNotifyCiDriverBlocked @ 0x1408A2D84 (PiNotifyCiDriverBlocked.c)
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C5FDC (MiRemovePhysicalMemory.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5860 (PopFxUpdateVetoMaskWork.c)
 *     PopUpdateOverThrottledCount @ 0x1408E7FB4 (PopUpdateOverThrottledCount.c)
 *     PopSendWeakChargerNotification @ 0x1408EDE5C (PopSendWeakChargerNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EEBC4 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EF1A8 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F1D6C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F1DB8 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408F2248 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408F5710 (PopPreSleepNotifyWorker.c)
 *     PopSleepstudySendWnfNotification @ 0x1408FA3E0 (PopSleepstudySendWnfNotification.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408FD4E8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FEAD8 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140909364 (PspSendNoWakeChargeLimitNotification.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409199D8 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140A3EBF8 (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     PopCheckShutdownMarker @ 0x140A447E0 (PopCheckShutdownMarker.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 *     PopInitVideoWnfState @ 0x140A73124 (PopInitVideoWnfState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
