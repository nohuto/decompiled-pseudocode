/*
 * XREFs of _wcsicmp @ 0x1403D2240
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140226068 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1402271E0 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403816AC (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A8404 (RtlpMuiRegAddAlternateCodePage.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403A8F1C (HalpMcUpdateFindDataTableEntry.c)
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050E318 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050E38C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056B200 (PopFxIsDevicePotentialDripsConstraint.c)
 *     LdrpSearchResourceSection_U @ 0x1405EDB54 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x1405EF8F0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406041C0 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x14061C640 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14061E5F0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     ConstraintEval @ 0x1406233AC (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x1406245AC (StringListContains.c)
 *     PropertyEval @ 0x140625224 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x14062D300 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140636050 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpHashStringToAtom @ 0x1406857D0 (RtlpHashStringToAtom.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406FE568 (PiUEventNotifyTargetDeviceChange.c)
 *     _CmMatchLastKnownParentCallback @ 0x140726770 (_CmMatchLastKnownParentCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072E2A8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407359F0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140735D1C (PiBuildDeviceNodeInstancePath.c)
 *     PiSwStopDestroy @ 0x140738E04 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D934 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x140747868 (_CmUpdateDevicePanel.c)
 *     PipCheckForDenyExecute @ 0x140748CD0 (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14074D278 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14074E91C (PiSwDeviceMakeCompatibleIds.c)
 *     IopErrorLogThread @ 0x140755930 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075912C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqQueryApplyObjectEvent @ 0x140763684 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140767B64 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140769E40 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14076CB5C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076DC48 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14076F2A8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140770E1C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771334 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1407729FC (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x140773230 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140782CE8 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x14078A954 (PiSwUpdateArrayProperties.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14078F358 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlpLangNameInMultiSzString @ 0x14078FA0C (RtlpLangNameInMultiSzString.c)
 *     DrvDbSuspendDatabase @ 0x1407A39DC (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB214 (SLQueryLicenseValueInternal.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2B5C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407B3130 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x1407B33C4 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407B9604 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407C1280 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407D4950 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D49C0 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x1408A1BA8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1408A3050 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A37D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A3A38 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A8120 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AEA6C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B6818 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7318 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F6038 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140966164 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409662B0 (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1409744FC (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1409745A8 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x140979CA8 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140979DA4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097B94C (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14097C550 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097E2E0 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x14098051C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098120C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140981990 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409CD7E8 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409F434C (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A91500 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A920B0 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
