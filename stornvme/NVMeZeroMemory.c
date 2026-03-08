/*
 * XREFs of NVMeZeroMemory @ 0x1C0009218
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00073D4 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0009254 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C00094E4 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0009AAC (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0009D30 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C0009EC0 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000B04C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B674 (IoReservedQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C4EC (NVMeCleanUpSqCqMapping.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CD5C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F3EC (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000FCC4 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C0010D50 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C00110F4 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00122F8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013C14 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B14 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014C80 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014D00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015488 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015718 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015A60 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015DE0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016CB8 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016E5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C0016FEC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00171E0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C0017528 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C00176E0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B16C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA00 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D454 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeMapError @ 0x1C00200A8 (NVMeMapError.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023104 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 *     GetDynamicRegistrySettings @ 0x1C0025C98 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0025E60 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C00276D0 (GetRegistrySettingsForSpecificKey.c)
 *     ReadBinaryRegistryValue @ 0x1C0027830 (ReadBinaryRegistryValue.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0027934 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C0027B30 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
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
