/*
 * XREFs of GetNamespaceId @ 0x1C0007A8C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     NVMeInitStreams @ 0x1C000F660 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00122F8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014194 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001434C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0014708 (IoctlStorageStreamsReleaseId.c)
 *     NVMeReservationReportCapabilities @ 0x1C001734C (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C0017400 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017528 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C0018650 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     ScsiPersistentReserveOut @ 0x1C001A220 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C001A7F4 (ScsiSanitizeRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C001AD60 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C001ADEC (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B16C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA00 (NVMeAsyncEventRequestCompletion.c)
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
