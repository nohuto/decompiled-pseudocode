/*
 * XREFs of GetNamespaceId @ 0x1C00051C8
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C000513C (ScsiSyncCacheRequest.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000D864 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C001C02C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001C1E4 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C001C598 (IoctlStorageStreamsReleaseId.c)
 *     NVMeReservationReportCapabilities @ 0x1C001E638 (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C001E6F0 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C001F950 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001FE84 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0020158 (QueryProtocolInfoIdentifyData.c)
 *     ScsiPersistentReserveOut @ 0x1C0020A04 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C0020C04 (ScsiSanitizeRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C002111C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1752)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
