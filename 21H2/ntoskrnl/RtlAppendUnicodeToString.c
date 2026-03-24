/*
 * XREFs of RtlAppendUnicodeToString @ 0x140265A40
 * Callers:
 *     LdrpGetResourceFileName @ 0x140380C48 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x140526F2C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA900 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C36FC (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x140672A9C (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140672C94 (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140676CD0 (RtlFormatCurrentUserKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x14069E3D4 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406BAAB8 (CmpQueryHiveRedirectionFileList.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742900 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140749594 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x140751180 (PnpBuildCmResourceList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     pIoQueryDeviceDescription @ 0x14078AB64 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078F594 (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14078F83C (CmpBuildMachineHiveMountPoint.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     MmCallDllInitialize @ 0x1407AC490 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407C1E60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C1F14 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x140870F40 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7E64 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140914568 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409157C8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140931450 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CD2C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14095EA50 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140966A9C (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x14096A174 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14096DB54 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096DE48 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096E970 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA0C (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14096F608 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A5ABA8 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140A6097C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int Length; // ebp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
  v7 = 0LL;
  if ( RtlInitUnicodeStringEx(&v7, Source) >= 0 )
  {
    Length = v7.Length;
    if ( Destination->Length + (unsigned int)v7.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v7.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
