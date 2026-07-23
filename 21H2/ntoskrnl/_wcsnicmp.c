/*
 * XREFs of _wcsnicmp @ 0x1403D2380
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050E53C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14057B624 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405D520C (VrpComparePath.c)
 *     _RegRtlCreateTreeTransacted @ 0x140633154 (_RegRtlCreateTreeTransacted.c)
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x1406691B8 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140669378 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x140669428 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x14066955C (LookupSidInTable.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406F458C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0 (IoVolumeDeviceNameToGuidPath.c)
 *     PiSwFindSwDevice @ 0x1407390A4 (PiSwFindSwDevice.c)
 *     PiSwIrpCleanup @ 0x14074D048 (PiSwIrpCleanup.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x140753F84 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14075433C (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076DC48 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x140782CE8 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140788224 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D464 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x1407B8B18 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x140891450 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140895310 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6278 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x140916A3C (punycode_decode.c)
 *     punycode_encode @ 0x140917084 (punycode_encode.c)
 *     GetAttributeName @ 0x140927190 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927C48 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140927E90 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x140940844 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140940984 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140955830 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x14096649C (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x1409686FC (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x14096A180 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14096FDC0 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1409744FC (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8F850 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
