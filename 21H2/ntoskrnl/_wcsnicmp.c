/*
 * XREFs of _wcsnicmp @ 0x1403D2210
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050E2FC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14057B3E4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405D520C (VrpComparePath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140604E5C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x14063E344 (_RegRtlCreateTreeTransacted.c)
 *     LocalpGetStringForCondition @ 0x140672DF8 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x140673F88 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140674148 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406741F8 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x14067432C (LookupSidInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407223C0 (IoVolumeDeviceNameToGuidPath.c)
 *     PiSwFindSwDevice @ 0x140738EE4 (PiSwFindSwDevice.c)
 *     PiSwIrpCleanup @ 0x14074CE88 (PiSwIrpCleanup.c)
 *     SdbpResolveMatchingFile @ 0x1407539DC (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x140753DC4 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14075417C (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076DA88 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiCleanupLoadedStores @ 0x1407820A8 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x140782B28 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407850C0 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140788064 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D2A4 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x1407B85F8 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x14087966C (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x1408912F0 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x1408951B0 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6118 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409168DC (punycode_decode.c)
 *     punycode_encode @ 0x140916F24 (punycode_encode.c)
 *     GetAttributeName @ 0x140927030 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927504 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927AE8 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140927D30 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x140940674 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409407B4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x14094087C (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140955660 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1409662BC (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x14096851C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140969FA0 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14096FBE0 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x14097431C (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8E850 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
