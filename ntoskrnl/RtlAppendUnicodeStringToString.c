/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1402447D0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AA3AC (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060D690 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14066E738 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14066EAE4 (AdtpFormatPrefix.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     CmpNameFromAttributes @ 0x1406BD314 (CmpNameFromAttributes.c)
 *     CmpGetCompleteFileName @ 0x1406C0B40 (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x1406C25D8 (IopBuildFullDriverPath.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     IopBootLog @ 0x14072A928 (IopBootLog.c)
 *     MiGenerateSystemImageNames @ 0x14072ECD0 (MiGenerateSystemImageNames.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140733F8C (CmpQueryNameString.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140744670 (RtlpGetPolicyValueForSystemCapability.c)
 *     IoQueryDeviceDescription @ 0x14077F960 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 *     SepAddTokenOriginClaim @ 0x140794680 (SepAddTokenOriginClaim.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     IopGetRootDeviceId @ 0x140803168 (IopGetRootDeviceId.c)
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     AslRegistryBuildMachinePath @ 0x14084C000 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084C16C (AslRegistryBuildUserPath.c)
 *     CmpStartCLFSLog @ 0x14086411C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409561C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x14096D0E0 (PiDrvDbMountNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAD78 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x140A5852C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5883C (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140A58AA0 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A59338 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A593D4 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 *     CmpAddDriverToList @ 0x140B340F4 (CmpAddDriverToList.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B6E868 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // esi
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
