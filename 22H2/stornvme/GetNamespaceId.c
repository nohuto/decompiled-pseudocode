/*
 * XREFs of GetNamespaceId @ 0x1C00058D4
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001F7C (QueryProtocolInfoLogPageData.c)
 *     ScsiUnmapRequest @ 0x1C0002794 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004930 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C0005848 (ScsiSyncCacheRequest.c)
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0011EFC (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00130A4 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00137A4 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0013958 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0013D0C (IoctlStorageStreamsReleaseId.c)
 *     ProtocolCommandCompletion @ 0x1C0015EE0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C0016084 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0016414 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001667C (QueryProtocolInfoIdentifyData.c)
 *     ScsiSanitizeRequest @ 0x1C0016E54 (ScsiSanitizeRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 208) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1736)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
