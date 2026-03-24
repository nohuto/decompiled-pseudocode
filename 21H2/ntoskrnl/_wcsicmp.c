/*
 * XREFs of _wcsicmp @ 0x1403D20D0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1402A7F28 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1402A90A0 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140381B5C (LdrpVerifyAlternateResourceModuleEx.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403A818C (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403ACD90 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050E0D8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050E14C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056AFC0 (PopFxIsDevicePotentialDripsConstraint.c)
 *     RtlpHashStringToAtom @ 0x14061BB60 (RtlpHashStringToAtom.c)
 *     ConstraintEval @ 0x14062E324 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x14062F52C (StringListContains.c)
 *     PropertyEval @ 0x1406301A4 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1406384F0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140641240 (PiPnpRtlInterfaceFilterCallback.c)
 *     LdrpSearchResourceSection_U @ 0x14068DCE4 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x14068FA80 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406A6590 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x1406BD430 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406BF788 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406E6038 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406E7188 (PiUEventNotifyTargetDeviceChange.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407265A0 (_CmMatchLastKnownParentCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14072DDF8 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072DFA4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140735830 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735A04 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140735B5C (PiBuildDeviceNodeInstancePath.c)
 *     PiSwStopDestroy @ 0x140738C44 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D774 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x1407476A8 (_CmUpdateDevicePanel.c)
 *     PipCheckForDenyExecute @ 0x140748B10 (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14074D0B8 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14074E75C (PiSwDeviceMakeCompatibleIds.c)
 *     IopErrorLogThread @ 0x140755770 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140758F6C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407634C4 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407679A4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140769C80 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C27C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14076C99C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076DA88 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14076E804 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14076F0E8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140770C5C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771174 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x14077283C (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x140773070 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x14077B570 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C850 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140782748 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140782B28 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x14078A794 (PiSwUpdateArrayProperties.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1407935B8 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlpLangNameInMultiSzString @ 0x140793C6C (RtlpLangNameInMultiSzString.c)
 *     DrvDbSuspendDatabase @ 0x1407A37DC (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB014 (SLQueryLicenseValueInternal.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B29BC (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407B2F90 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x1407B3224 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407B90E4 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407C0D60 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407C198C (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407D47E0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D4850 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x1408A1A48 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1408A2EF0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A3670 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A38D8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A7648 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A7FC0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9A8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AE90C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B66B8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B71B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7E64 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F5ED8 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096484C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140965F84 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409660D0 (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140973FA8 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x14097431C (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1409743C8 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x140979AC8 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140979BC4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097B76C (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14097C370 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097E100 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x14098033C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098102C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409817B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409CC7E8 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1409F334C (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140A90500 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140A910B0 (PipPendingServicesFilter.c)
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
