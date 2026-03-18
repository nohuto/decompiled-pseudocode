/*
 * XREFs of RtlStringCchLengthW @ 0x1402E0AC4
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405EC854 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405ECB04 (RtlpNameprepAsciiRealWorker.c)
 *     AslStringDuplicate @ 0x14075B1B8 (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x14075EF9C (WmipMangleInstanceName.c)
 *     PnpGetMultiSzLength @ 0x1407648E4 (PnpGetMultiSzLength.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14078AF40 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCopyEventData @ 0x14078C7F4 (PiUEventCopyEventData.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 *     PnpValidateMultiSz @ 0x1407D4D5C (PnpValidateMultiSz.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     SepParseElamCertResources @ 0x14082E2BC (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140855034 (PpmEventTraceProfiles.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1409A00F0 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1409B8A0C (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
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
