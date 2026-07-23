/*
 * XREFs of RtlAppendUnicodeToString @ 0x1402539E0
 * Callers:
 *     LdrpGetResourceFileName @ 0x140380798 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BAB30 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C392C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140619CE8 (CmpQueryHiveRedirectionFileList.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 *     CmRealKCBToVirtualPath @ 0x140667CCC (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066A3A0 (RtlFormatCurrentUserKeyPath.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140749754 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x140751340 (PnpBuildCmResourceList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     CmpInitializeSystemHivesLoad @ 0x140790B44 (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140790DEC (CmpBuildMachineHiveMountPoint.c)
 *     PiDrvDbCreateNode @ 0x1407A3BCC (PiDrvDbCreateNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407C2380 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C2434 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C8180 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140915928 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409315B0 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CEEC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14095EC30 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140966C7C (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x14096A354 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14096DD34 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096E028 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096EB50 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EBEC (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14096F7E8 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A5931C (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A5BBA8 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140A6197C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A62428 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A918F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140414040 (memmove.c)
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
