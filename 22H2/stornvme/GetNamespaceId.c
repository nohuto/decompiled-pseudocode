/*
 * XREFs of GetNamespaceId @ 0x1C0007BE0
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     NVMeInitStreams @ 0x1C000F6D0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012368 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013A20 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014204 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00143BC (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0014778 (IoctlStorageStreamsReleaseId.c)
 *     NVMeReservationReportCapabilities @ 0x1C00173BC (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C0017470 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017598 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C00186C0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C0018864 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018F40 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019288 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C00194BC (QueryProtocolInfoLogPageData.c)
 *     ScsiPersistentReserveOut @ 0x1C001A290 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C001A864 (ScsiSanitizeRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C001ADD0 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AE5C (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B1DC (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 232) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1952)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
