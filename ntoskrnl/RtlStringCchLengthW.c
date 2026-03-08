/*
 * XREFs of RtlStringCchLengthW @ 0x140247080
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405AD830 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405ADAEC (RtlpNameprepAsciiRealWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14068DA78 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCopyEventData @ 0x14068E1A4 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14068E738 (PiUEventHandleRegistration.c)
 *     PnpConcatPWSTR @ 0x14069EE54 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D51D8 (AslStringDuplicate.c)
 *     PnpValidateMultiSz @ 0x14079F300 (PnpValidateMultiSz.c)
 *     PnpGetMultiSzLength @ 0x140807138 (PnpGetMultiSzLength.c)
 *     SepParseElamCertResources @ 0x14081AB7C (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140848900 (PpmEventTraceProfiles.c)
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x14087EC90 (DbgkWerCaptureLiveKernelDump2.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x14099D8D0 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1409B8BF4 (RtlpValidAttribute.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    result = -1073741811;
LABEL_11:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_11;
  return result;
}
