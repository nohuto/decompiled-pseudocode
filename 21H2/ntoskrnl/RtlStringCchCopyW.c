/*
 * XREFs of RtlStringCchCopyW @ 0x1403716A0
 * Callers:
 *     PopLogNotifyDevice @ 0x140576ACC (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405C0850 (SdbpGetPathAppPatchPreRS3.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140736F70 (PnpNotifyUserModeDeviceRemoval.c)
 *     AslpEnvResolveVars @ 0x140753DC4 (AslpEnvResolveVars.c)
 *     WmipMangleInstanceName @ 0x140758268 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x14075A8A4 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075A97C (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x14075AE40 (SdbpCreateSearchDBContext.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x14077F6C8 (AslPathSplit.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B09B0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1407B0D10 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407B1000 (_CmDeviceClassesSubkeyCallback.c)
 *     AslpFileQueryVersionString @ 0x1407B2E5C (AslpFileQueryVersionString.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     PpmRegisterProfiles @ 0x1407C5768 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B30 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4720 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408FBC00 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408FCF70 (TtmpPublishDeviceEvent.c)
 *     AslPathCombine @ 0x140968814 (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14096A2E4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14096A550 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097E100 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140A615B8 (IopStoreSystemPartitionInformation.c)
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
