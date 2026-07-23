/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x14026D4E0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BAB30 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C392C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 *     CmpNameFromAttributes @ 0x1406657AC (CmpNameFromAttributes.c)
 *     CmRealKCBToVirtualPath @ 0x140667CCC (CmRealKCBToVirtualPath.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x1406C4E88 (CmpQueryNameString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407343BC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     MiGenerateSystemImageNames @ 0x14075C690 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14077DB44 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078B1B0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407C2380 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C2434 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C8180 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140893044 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6EC8 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7C1C (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409144B4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140915928 (RtlpConstructCrossVmObjectPath.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 *     SdbResolveDatabaseEx @ 0x140966C7C (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14096DD34 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096E028 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14096E298 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096EB50 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EBEC (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A5931C (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140A6197C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A62428 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A918F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
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
