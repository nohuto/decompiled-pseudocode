/*
 * XREFs of __security_check_cookie @ 0x1C0022A90
 * Callers:
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C0002778 (UsbhInitializeDevice.c)
 *     UsbhReset1Complete @ 0x1C0002B20 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C00079B0 (UsbhDmTimerDpc.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0008330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C0008770 (UsbhEnableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0008DD0 (UsbhQueryBusRelations.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C00096F0 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018A40 (UsbhSyncPowerOnPorts.c)
 *     __GSHandlerCheckCommon @ 0x1C00233DC (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEnumChildren @ 0x1C0029940 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029AD0 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C002A378 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002A4AC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002B2AC (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x1C002DBD8 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0032980 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhIoctlValidateParameters @ 0x1C0041218 (UsbhIoctlValidateParameters.c)
 *     UsbhMakePdoName @ 0x1C0043BAC (UsbhMakePdoName.c)
 *     UsbhGetD3Policy @ 0x1C0044C98 (UsbhGetD3Policy.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0046A7C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0047040 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048DC4 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C0049618 (UsbhGetPerformanceInfo.c)
 *     UsbhQuerySSstate @ 0x1C004C65C (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x1C00519E8 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0054940 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056AC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0056F88 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0059A68 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0059B28 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059D10 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0059EA0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005A2BC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005A540 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005A7DC (UsbhPropagateUxdState.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005B5DC (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005B6F8 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005B848 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005B93C (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005BA60 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005BB74 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogPortInformation @ 0x1C005BD4C (UsbhEtwLogPortInformation.c)
 *     MyRegQueryUlong @ 0x1C005D320 (MyRegQueryUlong.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C007327C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0075104 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
