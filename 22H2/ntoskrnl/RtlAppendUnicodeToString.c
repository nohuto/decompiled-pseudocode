/*
 * XREFs of RtlAppendUnicodeToString @ 0x14022A880
 * Callers:
 *     LdrpGetResourceFileName @ 0x1403A6A94 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1403AF0FC (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FAB0 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14063112C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140670D88 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671134 (AdtpFormatPrefix.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140695B38 (CmpQueryHiveRedirectionFileList.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407940CC (IopBuildGlobalSymbolicLinkString.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     pIoQueryDeviceDescription @ 0x1407CEB14 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEFB8 (pIoQueryBusDescription.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407E2ED8 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FB180 (RtlFormatCurrentUserKeyPath.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpMachineHiveListInitialize @ 0x1408108F8 (CmpMachineHiveListInitialize.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140810AD8 (CmpBuildMachineHiveMountPoint.c)
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140813EF8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     PnpBuildCmResourceList @ 0x14081993C (PnpBuildCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x140837008 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084F3B0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084F51C (AslRegistryBuildUserPath.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     IopSymlinkRememberJunction @ 0x14087F8E8 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x1409456F4 (IopSafebootDriverLoad.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970100 (PiDrvDbMountNode.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDDA8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409DF2B0 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x140A09F40 (ApiSetpConstructPathToExtension.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A186B8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140A19DEC (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 *     SdbResolveDatabaseEx @ 0x140A527E0 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140A56B50 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140A5B1E0 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B4F0 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140A5B944 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BFEC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C088 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140A5CA64 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140B3B3B4 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140B5D228 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B72B88 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B95930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  wchar_t *v5; // rsi

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( Destination->Length + v4 <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, (unsigned __int16)(2 * v3));
      Destination->Length += v4;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)v4 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
