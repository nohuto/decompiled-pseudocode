/*
 * XREFs of GetSrbDataBuffer @ 0x1C0007AB8
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     BuildReadWriteCommand @ 0x1C0010FC4 (BuildReadWriteCommand.c)
 *     FirmwareActivate @ 0x1C00116D0 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0011CF4 (FirmwareGetInfo.c)
 *     FormInquiryBlockLimitsData @ 0x1C0011F6C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012194 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0012284 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00122F8 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0012548 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0012754 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0012974 (FormInquiryVpdSupportedPagesData.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012DF0 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013304 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x1C00137A8 (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013B68 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013C14 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C0013FD8 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0014060 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014194 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001434C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0014708 (IoctlStorageStreamsReleaseId.c)
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B14 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014C80 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014D00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015488 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015718 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0015980 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015D20 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015DE0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016CB8 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016E5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C0016FEC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00171E0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C0017400 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C00176E0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0017ED0 (NVMeValidateProtocolCommandRequest.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018A90 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019AE0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0019DF8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0019F94 (ScsiModeSenseRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C001A12C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C001A220 (ScsiPersistentReserveOut.c)
 *     ScsiReadCapacityRequest @ 0x1C001A438 (ScsiReadCapacityRequest.c)
 *     ScsiReportLunsCommand @ 0x1C001A6DC (ScsiReportLunsCommand.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AA38 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001AB5C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiUnmapRequest @ 0x1C001ADEC (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B16C (SetProtocolInfoFeatureData.c)
 *     ProcessCommandNvmePacket @ 0x1C00244D0 (ProcessCommandNvmePacket.c)
 *     RecordCommandTimingHistory @ 0x1C00251C0 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( a2 )
      *a2 = a1 + 60;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( a2 )
      *a2 = a1 + 16;
  }
  return v2;
}
