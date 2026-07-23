/*
 * XREFs of ZwUpdateWnfStateData @ 0x1403FDF80
 * Callers:
 *     PopThermalSxExit @ 0x14038A49C (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x14039B178 (BapdWriteEtwEvents.c)
 *     FsRtlSendModernAppTermination @ 0x1403C08E0 (FsRtlSendModernAppTermination.c)
 *     HvlWnfUpdateStartupState @ 0x1403D0460 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxClearDeviceConstraints @ 0x14056A004 (PopFxClearDeviceConstraints.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056CAC4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x14056FAAC (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E810 (RtlRaiseCustomSystemEventTrigger.c)
 *     PspJobNotificationWorker @ 0x1405DC570 (PspJobNotificationWorker.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x14066F714 (PopDispatchNotificationsToList.c)
 *     PopEvaluateGlobalUserStatus @ 0x140671854 (PopEvaluateGlobalUserStatus.c)
 *     PspEnforceLimits @ 0x14068179C (PspEnforceLimits.c)
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F4388 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1406FE240 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406FE568 (PiUEventNotifyTargetDeviceChange.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140759828 (PiDcContainerRequiresConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772B60 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x140773DB0 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x14077A4B0 (PopPolicyTimeChange.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140780290 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x1407816A4 (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x14078B6F0 (PopPerfBoostPowerRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407CD658 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0BB0 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x1407D1F48 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1407D3F00 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D431C (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D4B24 (PopUpdateBackgroundCoolingStatus.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E924 (CmFcpManagerPublishChangeNotifications.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408879B0 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D228 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2C60 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2CEC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1408A2E3C (PiUEventSendDeviceInstallNotification.c)
 *     PiNotifyCiDriverBlocked @ 0x1408A2E94 (PiNotifyCiDriverBlocked.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5970 (PopFxUpdateVetoMaskWork.c)
 *     PopUpdateOverThrottledCount @ 0x1408E80C4 (PopUpdateOverThrottledCount.c)
 *     PopSendWeakChargerNotification @ 0x1408EDF6C (PopSendWeakChargerNotification.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EECD4 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408EF2B8 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F1E7C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F1EC8 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408F2358 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408F5820 (PopPreSleepNotifyWorker.c)
 *     PopSleepstudySendWnfNotification @ 0x1408FA4F0 (PopSleepstudySendWnfNotification.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408FD5F8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FEBE8 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140909474 (PspSendNoWakeChargeLimitNotification.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140919AE8 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 *     PopCheckShutdownMarker @ 0x140A3A2E4 (PopCheckShutdownMarker.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 *     PopInitVideoWnfState @ 0x140A74124 (PopInitVideoWnfState.c)
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
