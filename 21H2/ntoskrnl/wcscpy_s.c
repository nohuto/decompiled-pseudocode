/*
 * XREFs of wcscpy_s @ 0x1403D83E0
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403BADC0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBFD0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404BF250 (HalpQueryProfileSourceList.c)
 *     LocalConvertAclToString @ 0x1406689C4 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406697D0 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14066A870 (LocalGetStringForControl.c)
 *     AslPathToNetworkPathNt @ 0x1407544DC (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x140782674 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140782794 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x1407B4270 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877AA0 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD87C (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x140926240 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14094F76C (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14094FB74 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094FE4C (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FF1C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140950C38 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14096FDC0 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B64CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B756C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = (char *)Dst - (char *)Src;
    do
    {
      v6 = *Src;
      *(const wchar_t *)((char *)Src + v5) = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
