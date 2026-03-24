/*
 * XREFs of RtlStringCchLengthW @ 0x14032DFD4
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D144 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x14058D3F4 (RtlpNameprepAsciiRealWorker.c)
 *     PnpConcatPWSTR @ 0x14068CC14 (PnpConcatPWSTR.c)
 *     PnpValidateMultiSz @ 0x1406A6C18 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     PiUEventCopyEventData @ 0x140715738 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x140715950 (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14071A450 (PiUEventProcessBroadcastNotifications.c)
 *     PnpGetMultiSzLength @ 0x14074D5F0 (PnpGetMultiSzLength.c)
 *     WmipMangleInstanceName @ 0x140757A58 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x14075A094 (AslStringDuplicate.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407ABE90 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1407C5F28 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407C6134 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B80 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14089E124 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B05E0 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408F9A4C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408FBC50 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140912E50 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140968864 (AslPathCombine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
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
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
