/*
 * XREFs of RtlStringCchCopyW @ 0x1402470F0
 * Callers:
 *     PopLogNotifyDevice @ 0x14045AA2A (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x1405D1370 (CarCopyRuleViolationDetails.c)
 *     CarpSaveViolationSnapshot @ 0x1405D3534 (CarpSaveViolationSnapshot.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14066BB30 (SdbpGetPathAppPatchPreRS3.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 *     AslpFileQueryVersionString @ 0x1406D48D0 (AslpFileQueryVersionString.c)
 *     AslStringDuplicate @ 0x1406D51D8 (AslStringDuplicate.c)
 *     AslPathSplit @ 0x1407A1568 (AslPathSplit.c)
 *     SdbpCreateSearchDBContext @ 0x1407A3094 (SdbpCreateSearchDBContext.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140824470 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1408247A0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     PdcPortOpenCommon @ 0x140852DF8 (PdcPortOpenCommon.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140862BC0 (PnpNotifyUserModeDeviceRemoval.c)
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x14087EC90 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140981C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1409A0904 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A54564 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A547B8 (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A54B80 (AslpEnvResolveVars.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A69880 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140B56F38 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS v4; // r11d
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTATUS result; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v3 = 2147483646 - cchDest;
    v4 = 0;
    v5 = (char *)pszSrc - (char *)pszDest;
    while ( v3 + cchDest )
    {
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
      {
        if ( !cchDest )
        {
LABEL_6:
          --pszDest;
          v4 = -2147483643;
          break;
        }
        break;
      }
      *pszDest++ = v6;
      if ( !--cchDest )
        goto LABEL_6;
    }
    result = v4;
    goto LABEL_9;
  }
  result = -1073741811;
  if ( cchDest )
LABEL_9:
    *pszDest = 0;
  return result;
}
