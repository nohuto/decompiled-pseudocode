/*
 * XREFs of __security_check_cookie @ 0x1C00066D0
 * Callers:
 *     ScsiToNVMe @ 0x1C0004A30 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0007388 (NVMeReenumerateNameSpaceRescan.c)
 *     __GSHandlerCheckCommon @ 0x1C0007CFC (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000B6D4 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C000BAB4 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EA6C (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000EC10 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000F3E0 (NVMeLogTelemetry.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0011EFC (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0012140 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0012348 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0012684 (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00137A4 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0013958 (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0019150 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     GetRegistrySettings @ 0x1C001CF78 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001E008 (GetRegistrySettingsForSpecificKey.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C002923C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C002B108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
