/*
 * XREFs of wcscpy_s @ 0x1403D7B70
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403BA5F0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBCE0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404BEF50 (HalpQueryProfileSourceList.c)
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406EFF90 (LocalGetStringForControl.c)
 *     AslPathToNetworkPathNt @ 0x140753B0C (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x1407823B4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407824D4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140784EF8 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x1407B4510 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140876DE0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877990 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD76C (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x140926130 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14094F5EC (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14094F9F4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094FCCC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD9C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14094FF64 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140950AB8 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14095228C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14096FC30 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B54CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B656C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409EF9AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A2F0 (xHalTimerWatchdogStop.c)
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
