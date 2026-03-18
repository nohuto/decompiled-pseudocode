/*
 * XREFs of _wcsnicmp @ 0x1403D9530
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14056208C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14059D550 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x14068D9A4 (VrpComparePath.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14069DD6C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x14069DE04 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x14069E4E0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x1406C3710 (LookupSidInTable.c)
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140702150 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140751E68 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797F40 (_RegRtlCreateTreeTransacted.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C4164 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpExpandFileName @ 0x1407F73F0 (EtwpExpandFileName.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x140808C60 (BiCreatePartitionDevice.c)
 *     BiIsValidDiskDevice @ 0x140809CE4 (BiIsValidDiskDevice.c)
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     LocalGetSDControlForString @ 0x14080B404 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x14081CA34 (PiSwIrpCleanup.c)
 *     LookupAceFlagsInTable @ 0x140841E04 (LookupAceFlagsInTable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1408571A4 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x14086A40C (PiSwFindSwDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x140944694 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140948A18 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409BF750 (punycode_decode.c)
 *     punycode_encode @ 0x1409BFDB8 (punycode_encode.c)
 *     GetAttributeName @ 0x1409D31A4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D367C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D3C68 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1409D4798 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1409D6524 (LocalpGetStringForCondition.c)
 *     EtwpApplyContainerFilter @ 0x1409F4DA8 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F4EF4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4FC8 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A00360 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpResolveMatchingFile @ 0x140A517D0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A51E98 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140A54E6C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56998 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140A575BC (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140A57834 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140A5CEF4 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140A60274 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B99234 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
