/*
 * XREFs of __security_check_cookie @ 0x1C001CF60
 * Callers:
 *     UsbhSyncPowerOnPorts @ 0x1C000BBF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0011530 (UsbhQueryBusRelations.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0012210 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C0014280 (UsbhDmTimerDpc.c)
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001D3D8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_StagingConfig_Load @ 0x1C001D8F8 (wil_details_StagingConfig_Load.c)
 *     __GSHandlerCheckCommon @ 0x1C001DE0C (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEnumChildren @ 0x1C002A2D8 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C002A460 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C002ACF8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002AE2C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002BC50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x1C002E61C (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C00332AC (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhIoctlValidateParameters @ 0x1C0041B64 (UsbhIoctlValidateParameters.c)
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 *     UsbhMakePdoName @ 0x1C00445AC (UsbhMakePdoName.c)
 *     UsbhGetD3Policy @ 0x1C00456A4 (UsbhGetD3Policy.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C004753C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0047B10 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0049894 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004A0C8 (UsbhGetPerformanceInfo.c)
 *     UsbhQuerySSstate @ 0x1C004D184 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x1C004EC10 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004F200 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x1C0052760 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C00556E0 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0057150 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00578C0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057D80 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005A8A0 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005A960 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005AB48 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C005ACF0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005B10C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005B39C (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005B5AC (UsbhPropagateUxdState.c)
 *     UsbhUpdateUxdSettings @ 0x1C005BAE4 (UsbhUpdateUxdSettings.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005C39C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005C4B8 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005C608 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005C6FC (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C820 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005C934 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogPortInformation @ 0x1C005CB0C (UsbhEtwLogPortInformation.c)
 *     MyRegQueryUlong @ 0x1C005E0BC (MyRegQueryUlong.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C007526C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C0075320 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00753E4 (wil_StagingConfig_QueryFeatureState.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0076108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
