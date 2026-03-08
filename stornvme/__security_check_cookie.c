/*
 * XREFs of __security_check_cookie @ 0x1C0003260
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003AE8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1C0003FEC (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000880C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x1C0008A04 (NVMeLogTelemetry.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     GetInterruptMessageInformation @ 0x1C0009AAC (GetInterruptMessageInformation.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C000C340 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EE60 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F3EC (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000F660 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00122F8 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0012548 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0012754 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0012CFC (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014194 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001434C (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetRichDeviceDescription @ 0x1C001651C (NVMeGetRichDeviceDescription.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001D740 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C002237C (NVMeReenumerateNameSpaceRescan.c)
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C0025BD0 (DpcWatchdogTimerRemainsMoreThan.c)
 *     GetDynamicRegistrySettings @ 0x1C0025C98 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0025E60 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C00276D0 (GetRegistrySettingsForSpecificKey.c)
 *     NVMeSendControllerInternalData @ 0x1C0027B90 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C002828C (NVMeSendLunInternalData.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C0034008 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C003431C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0037104 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
