/*
 * XREFs of RtlStringCchCopyW @ 0x1402E0200
 * Callers:
 *     PopLogNotifyDevice @ 0x1405D6E84 (PopLogNotifyDevice.c)
 *     CarCopyRuleViolationDetails @ 0x1406033F0 (CarCopyRuleViolationDetails.c)
 *     CarpSaveViolationSnapshot @ 0x140605280 (CarpSaveViolationSnapshot.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406498D0 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x14075B1B8 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14075B270 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x14075CF70 (AslPathSplit.c)
 *     WmipMangleInstanceName @ 0x14075EF9C (WmipMangleInstanceName.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140765C60 (PnpNotifyUserModeDeviceRemoval.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     _CmEnumSubkeyCallback @ 0x14083E410 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     AslpFileQueryVersionString @ 0x140841F20 (AslpFileQueryVersionString.c)
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14098D0C0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1409A29D4 (TtmpPublishDeviceEvent.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A17ABC (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A17D10 (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A18114 (AslpEnvResolveVars.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140A28700 (_CmDevicePanelEnumSubkeyCallback.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140B0E88C (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v4);
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
