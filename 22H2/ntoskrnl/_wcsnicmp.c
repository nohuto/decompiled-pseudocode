/*
 * XREFs of _wcsnicmp @ 0x1403D1B10
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050E23C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14057B324 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405D520C (VrpComparePath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140604E5C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406B7124 (_RegRtlCreateTreeTransacted.c)
 *     LocalpGetStringForCondition @ 0x1406EBBE8 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x1406ECD78 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x1406ECF38 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406ECFE8 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x1406ED11C (LookupSidInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140721790 (IoVolumeDeviceNameToGuidPath.c)
 *     PiSwFindSwDevice @ 0x14074BD68 (PiSwFindSwDevice.c)
 *     SdbpResolveMatchingFile @ 0x1407531CC (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x1407535B4 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14075396C (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076D154 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwIrpCleanup @ 0x1407734BC (PiSwIrpCleanup.c)
 *     BiCleanupLoadedStores @ 0x140781FA8 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x140782A28 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x140784FC0 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140787F64 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D1A4 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x1407B8DB8 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x1408796BC (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x140891340 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140895200 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6168 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x14091692C (punycode_decode.c)
 *     punycode_encode @ 0x140916F74 (punycode_encode.c)
 *     GetAttributeName @ 0x140927080 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927554 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927B38 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140927D80 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x1409406C4 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140940804 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409408CC (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409556B0 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x14096630C (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x14096856C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140969FF0 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14096FC30 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x14097436C (SiIsValidDiskDevice.c)
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
