/*
 * XREFs of _wcsicmp @ 0x1403D19D0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140300848 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1403019C0 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14038149C (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A7BB4 (RtlpMuiRegAddAlternateCodePage.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403AF31C (HalpMcUpdateFindDataTableEntry.c)
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050E018 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14050E08C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056AF00 (PopFxIsDevicePotentialDripsConstraint.c)
 *     RtlpHashStringToAtom @ 0x14061BF80 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x140672884 (LdrpSearchResourceSection_U.c)
 *     PiDmCompareObjects @ 0x140674620 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140689070 (PiPnpRtlObjectEventCompareObjects.c)
 *     GetPropertyFromPropArray @ 0x1406A0240 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406A2378 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     ConstraintEval @ 0x1406A710C (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A7660 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x1406A830C (StringListContains.c)
 *     PropertyEval @ 0x1406A8F84 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1406B12D0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406BA020 (PiPnpRtlInterfaceFilterCallback.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14071AF20 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     _CmMatchLastKnownParentCallback @ 0x140726480 (_CmMatchLastKnownParentCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140727CD0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140727E7C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140735700 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407358D4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140739C14 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmUpdateDevicePanel @ 0x140743B48 (_CmUpdateDevicePanel.c)
 *     PipCheckForDenyExecute @ 0x140744FB0 (PipCheckForDenyExecute.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwStopDestroy @ 0x14074BAC8 (PiSwStopDestroy.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14074DF50 (PiSwDeviceMakeCompatibleIds.c)
 *     IopErrorLogThread @ 0x140754F60 (IopErrorLogThread.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075875C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqQueryApplyObjectEvent @ 0x140762AE4 (PiDqQueryApplyObjectEvent.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140766FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1407692A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14076B22C (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076BA48 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14076C16C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14076D154 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgMigrateDevice @ 0x14076DED4 (PiDevCfgMigrateDevice.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076E7E8 (PiSwDeviceFindInterfaceEntry.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14076EDA8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14077091C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDqActionDataGetChangedProperties @ 0x140770E34 (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1407724FC (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x140772D30 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x14077B470 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077C750 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140782648 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140782A28 (BiIsValidDiskDevice.c)
 *     PiSwUpdateArrayProperties @ 0x14078A694 (PiSwUpdateArrayProperties.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14078F098 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlpLangNameInMultiSzString @ 0x14078F74C (RtlpLangNameInMultiSzString.c)
 *     DrvDbSuspendDatabase @ 0x1407A3C0C (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x1407AB444 (SLQueryLicenseValueInternal.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2DFC (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407B33D0 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x1407B3664 (AslpFileGetVersionBlock.c)
 *     ArbShareDriverExclusive @ 0x1407B98A4 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x1407C1520 (SdbpFindMatchingName.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407D4700 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D4770 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x1408A1A98 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1408A2F40 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A36C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A3928 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E54 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A7698 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A8010 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9ADC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AE95C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B6708 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7208 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F5F28 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096489C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140965FD4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x14097436C (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140974418 (SiIsValidWindowsBootEntry.c)
 *     _CmFindFilterListInflectionPoint @ 0x140979B18 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140979C14 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x14097B7BC (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x14097C3C0 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14097E150 (DrvDbGetObjectSubKeyCallback.c)
 *     VhdiVerifyBootDisk @ 0x14098038C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098107C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140981800 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1409CC7F8 (VfIsPCIBus.c)
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
