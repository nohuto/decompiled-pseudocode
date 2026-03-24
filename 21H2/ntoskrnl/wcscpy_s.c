/*
 * XREFs of wcscpy_s @ 0x1403D8270
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403BAC50 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBD90 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404BF010 (HalpQueryProfileSourceList.c)
 *     LocalConvertAclToString @ 0x140673794 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406771A0 (LocalGetStringForControl.c)
 *     AslPathToNetworkPathNt @ 0x14075431C (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x1407824B4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407825D4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140784FF8 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x1407B40D0 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140876D90 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877940 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD71C (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x1409260E0 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14094BFD0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14094F59C (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14094F9A4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094FC7C (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD4C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14094FF14 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140950A68 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14095223C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14096FBE0 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B54CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B656C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409EF9AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A9F0 (xHalTimerWatchdogStop.c)
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
