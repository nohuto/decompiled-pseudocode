/*
 * XREFs of NVMeZeroMemory @ 0x1C0005A70
 * Callers:
 *     NVMeMapError @ 0x1C00010FC (NVMeMapError.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0001F7C (QueryProtocolInfoLogPageData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002470 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0004930 (NVMeHwBuildIo.c)
 *     ScsiInquiryRequest @ 0x1C0005E04 (ScsiInquiryRequest.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000A324 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C000B088 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C000B310 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C000B6D4 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C000B924 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000BAB4 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000C8F4 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000CE38 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000CF44 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D8AC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000EC10 (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C0010FF0 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C0011230 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C00119E4 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0011EFC (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00130A4 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C001325C (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001348C (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0013E64 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0013FD0 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C001404C (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001476C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001495C (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0014C40 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C0015C4C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0016084 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0016414 (QueryProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0018DE8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C001AAB8 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C001AD0C (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C001B080 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C001BFEC (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C001CF78 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001E008 (GetRegistrySettingsForSpecificKey.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001E16C (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C001E368 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0008040 (memset.c)
 */

void *__fastcall NVMeZeroMemory(void *a1, unsigned int a2)
{
  unsigned int v2; // edx
  void *result; // rax

  if ( (a2 & 3) != 0 )
  {
    if ( a2 )
      return memset(a1, 0, a2);
  }
  else
  {
    v2 = a2 >> 2;
    if ( v2 )
      return memset(a1, 0, 4LL * v2);
  }
  return result;
}
