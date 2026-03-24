/*
 * XREFs of RtlStringCchLengthW @ 0x140264E74
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D204 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x14058D4B4 (RtlpNameprepAsciiRealWorker.c)
 *     PnpValidateMultiSz @ 0x14062CF94 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x140638128 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x1406A9C64 (PnpConcatPWSTR.c)
 *     PiUEventCopyEventData @ 0x1406E1E98 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x1406E20B0 (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406E63A0 (PiUEventProcessBroadcastNotifications.c)
 *     PnpGetMultiSzLength @ 0x14074E2A0 (PnpGetMultiSzLength.c)
 *     WmipMangleInstanceName @ 0x140758268 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x14075A8A4 (AslStringDuplicate.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407ABA50 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1407C5768 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407C5974 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B30 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B0590 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408F99FC (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408FBC00 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140912E00 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140968814 (AslPathCombine.c)
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
