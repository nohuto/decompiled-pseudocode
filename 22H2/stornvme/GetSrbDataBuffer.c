/*
 * XREFs of GetSrbDataBuffer @ 0x1C0007C0C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     BuildReadWriteCommand @ 0x1C0011034 (BuildReadWriteCommand.c)
 *     FirmwareActivate @ 0x1C0011740 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0011984 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0011D64 (FirmwareGetInfo.c)
 *     FormInquiryBlockLimitsData @ 0x1C0011FDC (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012204 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C00122F4 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012368 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C00125B8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00127C4 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C00129E4 (FormInquiryVpdSupportedPagesData.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012E60 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013374 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x1C0013818 (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013A20 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013BD8 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013C84 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013ED8 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C0014048 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C00140D0 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014204 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00143BC (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0014778 (IoctlStorageStreamsReleaseId.c)
 *     IoctlToNVMe @ 0x1C0014870 (IoctlToNVMe.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B84 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014CF0 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014D70 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C00154F8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015788 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C00159F0 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015D90 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015E50 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016190 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016A00 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016D28 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016ECC (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001705C (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C0017250 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C0017470 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C0017750 (NVMeReservationReportStatusCompletion.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0017F40 (NVMeValidateProtocolCommandRequest.c)
 *     ProtocolCommandToNVMe @ 0x1C0018864 (ProtocolCommandToNVMe.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018B00 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018F40 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019288 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C00194BC (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019B50 (QueryTemperatureThresholdCompletion.c)
 *     ScsiInquiryRequest @ 0x1C0019CE4 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0019E68 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C001A004 (ScsiModeSenseRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C001A19C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C001A290 (ScsiPersistentReserveOut.c)
 *     ScsiReadCapacityRequest @ 0x1C001A4A8 (ScsiReadCapacityRequest.c)
 *     ScsiReportLunsCommand @ 0x1C001A74C (ScsiReportLunsCommand.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AAA8 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001ABCC (ScsiSecurityProtocolOutRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AE5C (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B1DC (SetProtocolInfoFeatureData.c)
 *     ProcessCommandNvmePacket @ 0x1C0024490 (ProcessCommandNvmePacket.c)
 *     RecordCommandTimingHistory @ 0x1C0025180 (RecordCommandTimingHistory.c)
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
