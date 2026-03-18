/*
 * XREFs of NVMeZeroMemory @ 0x1C00092D8
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0007528 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0009314 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C00095A4 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0009B6C (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0009DF0 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C0009F80 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000B10C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B734 (IoReservedQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C59C (NVMeCleanUpSqCqMapping.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE0C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F45C (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000FD34 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C0010DC0 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C0011164 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C0011984 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012368 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013A20 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013C84 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013ED8 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B84 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014CF0 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014D70 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C00154F8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015788 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015AD0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015E50 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016190 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016A00 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016D28 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016ECC (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001705C (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C0017250 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C0017598 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C0017750 (NVMeReservationReportStatusCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001842C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0018864 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018F40 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019288 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C00194BC (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C0019CE4 (ScsiInquiryRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B1DC (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CD30 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CF54 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D1C0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D4C4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EB6C (NVMeGetNamespaceMetadata.c)
 *     NVMeMapError @ 0x1C0020118 (NVMeMapError.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022DD4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023174 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C00241F8 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
 *     GetDynamicRegistrySettings @ 0x1C0025C3C (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0025E04 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0027674 (GetRegistrySettingsForSpecificKey.c)
 *     ReadBinaryRegistryValue @ 0x1C00277D4 (ReadBinaryRegistryValue.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C00278D8 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C0027AD4 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
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
