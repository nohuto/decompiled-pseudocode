/*
 * XREFs of RtlStringCchCopyW @ 0x1403711F0
 * Callers:
 *     PopLogNotifyDevice @ 0x140576D0C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405C0A80 (SdbpGetPathAppPatchPreRS3.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140737130 (PnpNotifyUserModeDeviceRemoval.c)
 *     AslpEnvResolveVars @ 0x140753F84 (AslpEnvResolveVars.c)
 *     WmipMangleInstanceName @ 0x140758428 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x14077F888 (AslPathSplit.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B0B50 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1407B0EB0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B11A0 (_CmDeviceClassesSubkeyCallback.c)
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4880 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408FBD60 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408FD0D0 (TtmpPublishDeviceEvent.c)
 *     AslPathCombine @ 0x1409689F4 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14096A4C4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14096A730 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097E2E0 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140A625B8 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v4 = 2147483646 - cchDest;
      v5 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v4 + cchDest) )
          break;
        v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cchDest;
      }
      while ( cchDest );
    }
    v7 = pszDest - 1;
    if ( cchDest )
      v7 = pszDest;
    v3 = cchDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
