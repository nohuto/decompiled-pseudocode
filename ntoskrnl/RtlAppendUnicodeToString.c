/*
 * XREFs of RtlAppendUnicodeToString @ 0x140208B50
 * Callers:
 *     LdrpGetResourceFileName @ 0x1403A1D24 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1403AA3AC (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060D690 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14066E738 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14066EAE4 (AdtpFormatPrefix.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14068383C (IopBuildGlobalSymbolicLinkString.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     CmpGetCompleteFileName @ 0x1406C0B40 (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140733370 (CmpQueryHiveRedirectionFileList.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140793848 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x140803168 (IopGetRootDeviceId.c)
 *     PnpBuildCmResourceList @ 0x140804D9C (PnpBuildCmResourceList.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpMachineHiveListInitialize @ 0x1408187E8 (CmpMachineHiveListInitialize.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1408189C8 (CmpBuildMachineHiveMountPoint.c)
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     AslRegistryBuildMachinePath @ 0x14084C000 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084C16C (AslRegistryBuildUserPath.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x14096D0E0 (PiDrvDbMountNode.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAD78 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409DC410 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x140A07250 (ApiSetpConstructPathToExtension.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140A1709C (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140A53E9C (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140A5852C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5883C (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A59338 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A593D4 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140A59DB0 (BiResolveLocateDevice.c)
 *     CmpAddDriverToList @ 0x140B340F4 (CmpAddDriverToList.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140B52F50 (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B6E868 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
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
