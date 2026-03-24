/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1403480C0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140526E6C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA840 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2834 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3294 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C363C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x140682C94 (IopSymlinkRememberJunction.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
 *     CmpNameFromAttributes @ 0x1406E80BC (CmpNameFromAttributes.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x1406EB88C (CmRealKCBToVirtualPath.c)
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x14070D9E0 (CmpQueryNameString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14073454C (PnpQueryRemoveLockedDeviceNode.c)
 *     IopBuildFullDriverPath @ 0x14073C7A8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073EDA0 (IopGetDriverNameFromKeyNode.c)
 *     MiGenerateSystemImageNames @ 0x14075BCC0 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C750 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14077D884 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x14078AA64 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078AEF0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B004 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1407AC8D0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407C2620 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C26D4 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14086FB28 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x1408833DC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140891F74 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140892F34 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6DB8 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7B0C (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906B10 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409143A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409145B8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140915818 (RtlpConstructCrossVmObjectPath.c)
 *     SepAddTokenOriginClaim @ 0x140922BA0 (SepAddTokenOriginClaim.c)
 *     SdbResolveDatabaseEx @ 0x140966AEC (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14096DBA4 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096DE98 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14096E108 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14096E308 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096E9C0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA5C (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140A6097C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
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
