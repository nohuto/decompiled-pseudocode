/*
 * XREFs of RtlAppendUnicodeToString @ 0x1402DFAC0
 * Callers:
 *     LdrpGetResourceFileName @ 0x1403D7C1C (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14064C4AC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14064C858 (AdtpFormatPrefix.c)
 *     CmpGetVirtualizationID @ 0x140669CBC (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     IopSymlinkRememberJunction @ 0x1406B9BC0 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406DD50C (CmpQueryHiveRedirectionFileList.c)
 *     pIoQueryDeviceDescription @ 0x1406DE008 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140769668 (IopBuildGlobalSymbolicLinkString.c)
 *     CmRealKCBToVirtualPath @ 0x14077CB98 (CmRealKCBToVirtualPath.c)
 *     VrpBuildKeyPath @ 0x14077FB68 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x14081F468 (IopGetRootDeviceId.c)
 *     PnpBuildCmResourceList @ 0x14082071C (PnpBuildCmResourceList.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpInitializeSystemHivesLoad @ 0x1408337BC (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140833B08 (CmpBuildMachineHiveMountPoint.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     AslRegistryBuildMachinePath @ 0x140843AA4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140843B58 (AslRegistryBuildUserPath.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     PiDrvDbMountNode @ 0x14095C12C (PiDrvDbMountNode.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAE18 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409DBE80 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A084FC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x140A0A718 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140A139FC (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140A17490 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140A1B9F0 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A1BCE4 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A1C7F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A1C88C (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140A1D568 (BiResolveLocateDevice.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B12AF0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140B13B7C (CmpAddDriverToList.c)
 *     CmpInitializePreloadedHive @ 0x140B16B94 (CmpInitializePreloadedHive.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B4FF80 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int Length; // ebp
  wchar_t *v5; // r14
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !Source )
    return 0;
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, Source) >= 0 )
  {
    Length = DestinationString.Length;
    if ( Destination->Length + (unsigned int)DestinationString.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, DestinationString.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
