/*
 * XREFs of RtlStringCchLengthW @ 0x140252F04
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D434 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x14058D6E4 (RtlpNameprepAsciiRealWorker.c)
 *     PnpConcatPWSTR @ 0x140607BE4 (PnpConcatPWSTR.c)
 *     PnpValidateMultiSz @ 0x140622EB8 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     PiUEventCopyEventData @ 0x1406B9178 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406FD780 (PiUEventProcessBroadcastNotifications.c)
 *     PnpGetMultiSzLength @ 0x14074E460 (PnpGetMultiSzLength.c)
 *     WmipMangleInstanceName @ 0x140758428 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407ABC50 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407C5E94 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B06F0 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408F9B5C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408FBD60 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140912F60 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x1409689F4 (AslPathCombine.c)
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
