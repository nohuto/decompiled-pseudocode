/*
 * XREFs of wcscpy_s @ 0x1403DF730
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x14035E2D0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140504B70 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x140507DB8 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB3F0 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x1408056F0 (BcdGetSystemStorePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140808B88 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140809F18 (BiConvertBootEnvironmentDeviceToNt.c)
 *     NtLockProductActivationKeys @ 0x140839ED0 (NtLockProductActivationKeys.c)
 *     ExpTranslateEfiPath @ 0x1408402B0 (ExpTranslateEfiPath.c)
 *     ExpCreateOutputNT @ 0x14084057C (ExpCreateOutputNT.c)
 *     PnprGetPluginDriverImagePath @ 0x140965EE8 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1409FBB48 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409FBF50 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC218 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409FC3E0 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1409FCDD8 (ExpParseArcPathName.c)
 *     CmDeleteKeyRecursive @ 0x140A0FE68 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10A70 (CmpCreateHwProfileFriendlyName.c)
 *     AslPathToNetworkPathNt @ 0x140A552D0 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140A5CEF4 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x140AB2EEC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x140AB3230 (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x140AEBA40 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
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
