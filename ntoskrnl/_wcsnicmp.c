/*
 * XREFs of _wcsnicmp @ 0x1403D4010
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14055FBEC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14059B030 (PopIdleWakeAreIdenticalWakeSources.c)
 *     _RegRtlCreateTreeTransacted @ 0x140687B40 (_RegRtlCreateTreeTransacted.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     VrpComparePath @ 0x1406C2400 (VrpComparePath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14072BD40 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14075060C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1407506A4 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x140750D80 (FContainCallBackAce.c)
 *     EtwpExpandFileName @ 0x140772920 (EtwpExpandFileName.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407745C4 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1407E885C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     LocalGetSDControlForString @ 0x1407FF648 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     BiIsValidDiskDevice @ 0x140830D88 (BiIsValidDiskDevice.c)
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     LookupAceFlagsInTable @ 0x14083F7B0 (LookupAceFlagsInTable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140852F74 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x14086740C (PiSwFindSwDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x140941674 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x1409459F8 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409BC720 (punycode_decode.c)
 *     punycode_encode @ 0x1409BCD88 (punycode_encode.c)
 *     GetAttributeName @ 0x1409D0304 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D07DC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D0DC8 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1409D18F8 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1409D3684 (LocalpGetStringForCondition.c)
 *     EtwpApplyContainerFilter @ 0x1409F1F18 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F2064 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409FD460 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A4F1C8 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140A521B8 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A53CE4 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140A54908 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140A54B80 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140A5A574 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140A5D574 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B95024 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
