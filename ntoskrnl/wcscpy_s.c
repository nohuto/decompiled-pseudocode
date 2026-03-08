/*
 * XREFs of wcscpy_s @ 0x1403DA210
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1402AF770 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x140505CD8 (HalpQueryProfileSourceList.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14074FCB0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x140750814 (LocalGetStringForControl.c)
 *     BcdGetSystemStorePath @ 0x14082C8E8 (BcdGetSystemStorePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x14083F22C (ExpCreateOutputNT.c)
 *     PnprGetPluginDriverImagePath @ 0x140962EC8 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F57C0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1409F8CB8 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409F90C0 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409F9388 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409F9550 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1409F9F48 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A0DD5C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x140A5261C (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140A5A574 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x140AAEF8C (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140AAF2D0 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140AE7A40 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v5 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v6 = *Src;
        *(const wchar_t *)((char *)Src + v5) = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
