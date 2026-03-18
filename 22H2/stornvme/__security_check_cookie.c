/*
 * XREFs of __security_check_cookie @ 0x1C0003750
 * Callers:
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     NVMeCompletionDpcRoutine @ 0x1C00028F0 (NVMeCompletionDpcRoutine.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C0003838 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003CE8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1C00045CC (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x1C00088CC (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x1C0008AC4 (NVMeLogTelemetry.c)
 *     ControllerReset @ 0x1C0009728 (ControllerReset.c)
 *     GetInterruptMessageInformation @ 0x1C0009B6C (GetInterruptMessageInformation.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C000C3F0 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerInitPart1 @ 0x1C000D858 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EF00 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F45C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000F6D0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012368 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C00125B8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00127C4 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0012D6C (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014204 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00143BC (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetRichDeviceDescription @ 0x1C001658C (NVMeGetRichDeviceDescription.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C700 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001D7B0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C00223EC (NVMeReenumerateNameSpaceRescan.c)
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C0025B74 (DpcWatchdogTimerRemainsMoreThan.c)
 *     GetDynamicRegistrySettings @ 0x1C0025C3C (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0025E04 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0027674 (GetRegistrySettingsForSpecificKey.c)
 *     NVMeSendControllerInternalData @ 0x1C0027B34 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C0028230 (NVMeSendLunInternalData.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C003424C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0037114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
