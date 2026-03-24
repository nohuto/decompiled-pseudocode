/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x14027F0B0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140526F2C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA900 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C36FC (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     CmpNameFromAttributes @ 0x14066F2CC (CmpNameFromAttributes.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x140672A9C (CmRealKCBToVirtualPath.c)
 *     IopSymlinkRememberJunction @ 0x14069E3D4 (IopSymlinkRememberJunction.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140716838 (CmpQueryNameString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D458 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407341FC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopBuildFullDriverPath @ 0x140740308 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742900 (IopGetDriverNameFromKeyNode.c)
 *     MiGenerateSystemImageNames @ 0x14075C4D0 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     IopBootLog @ 0x140771A20 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C9DC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14077D984 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x14078AB64 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078AFF0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1407AC490 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407C1E60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C1F14 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C7E60 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14086FAD8 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140892EE4 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6D68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7ABC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7E64 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906AC0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140914354 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140914568 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409157C8 (RtlpConstructCrossVmObjectPath.c)
 *     SepAddTokenOriginClaim @ 0x140922B50 (SepAddTokenOriginClaim.c)
 *     SdbResolveDatabaseEx @ 0x140966A9C (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14096DB54 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096DE48 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14096E0B8 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096E970 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA0C (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140A6097C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // edi
  wchar_t *v4; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( Destination->Length + Length <= Destination->MaximumLength )
  {
    v4 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
    memmove(v4, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v4[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
