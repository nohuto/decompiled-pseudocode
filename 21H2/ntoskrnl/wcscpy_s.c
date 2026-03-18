/*
 * XREFs of wcscpy_s @ 0x1403E76C0
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x14050B88C (HalpQueryProfileSourceList.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406768BC (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140676AC0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x140676B80 (LocalConvertAclToString.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802A64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408038B4 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x14080D370 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140812698 (BcdGetSystemStorePath.c)
 *     CmDeleteKeyRecursive @ 0x14091D7D0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14091E3D0 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x140952178 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1409FB95C (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409FBD64 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1409FC038 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC108 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1409FC2D0 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1409FCDF8 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1409FE5F4 (ExpTranslateEfiPath.c)
 *     AslPathToNetworkPathNt @ 0x140A15C98 (AslPathToNetworkPathNt.c)
 *     BiCreateFileDeviceElement @ 0x140A1DB40 (BiCreateFileDeviceElement.c)
 *     HalpRegisterDeviceInUse @ 0x140A70DE0 (HalpRegisterDeviceInUse.c)
 *     HalpQueryDebuggerInformation @ 0x140A710B8 (HalpQueryDebuggerInformation.c)
 *     HdlspKernelAddLogEntry @ 0x140AA9A28 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
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
