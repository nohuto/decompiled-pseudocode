/*
 * XREFs of _wcsicmp @ 0x1403E1490
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140206200 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1402D77C0 (LdrRscIsTypeExist.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403BAE44 (HalpMcUpdateFindDataTableEntry.c)
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403C5EDC (RtlpMuiRegAddAlternateCodePage.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403DA094 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140561968 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1405619DC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405CC6C4 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140697BE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDqActionDataGetChangedProperties @ 0x140699E6C (PiDqActionDataGetChangedProperties.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     PiDmCompareObjects @ 0x1406A9190 (PiDmCompareObjects.c)
 *     PropertyEval @ 0x1406B074C (PropertyEval.c)
 *     StringListContains @ 0x1406B3B6C (StringListContains.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1406BC0F0 (PiPnpRtlObjectEventCompareObjects.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406C1FDC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     _CmGetDeviceSiblings @ 0x1406D04CC (_CmGetDeviceSiblings.c)
 *     GetPropertyFromPropArray @ 0x1406DAC50 (GetPropertyFromPropArray.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406DF998 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406DFC4C (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406E4EA0 (PiDevCfgEnforceDevicePolicy.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E5780 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1406E6000 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     _CmIsLocalMachineContainer @ 0x1406E84C0 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406E8E20 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiSwDeviceCompareObjects @ 0x1406E9010 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1406EA354 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     LdrpSearchResourceSection_U @ 0x14075717C (LdrpSearchResourceSection_U.c)
 *     PiSwUpdateArrayProperties @ 0x140762E04 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076302C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1407640D8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x14076A520 (PipCheckForDenyExecute.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     ConstraintEval @ 0x1407731E8 (ConstraintEval.c)
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqPropertyCallback @ 0x1407770E0 (PiDqPropertyCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140781DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14078B9BC (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     RtlpHashStringToAtom @ 0x1407A0EE0 (RtlpHashStringToAtom.c)
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140802FBC (BiIsValidDiskDevice.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopErrorLogThread @ 0x14080FDC0 (IopErrorLogThread.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     DrvDbSuspendDatabase @ 0x1408265D0 (DrvDbSuspendDatabase.c)
 *     SLQueryLicenseValueInternal @ 0x14082D870 (SLQueryLicenseValueInternal.c)
 *     RtlpLangNameInMultiSzString @ 0x1408307E0 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140830E88 (RtlpMuiRegGetStringIndexInPool.c)
 *     ArbShareDriverExclusive @ 0x14083BA44 (ArbShareDriverExclusive.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140841B4C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14084205C (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x1408422F0 (AslpFileGetVersionBlock.c)
 *     SdbpFindMatchingName @ 0x140842978 (SdbpFindMatchingName.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140859460 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1408646E8 (PiDrvDbRegisterNodeCallback.c)
 *     PnpCheckDriverDependencies @ 0x140946BB8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140948150 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140949470 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1409496C0 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14094DD00 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14095353C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbOverlayNodeHive @ 0x14095C804 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D934 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A111BC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140A12C84 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140A1311C (SdbpFindNextNamedTag.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A22404 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140A224B0 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A253A0 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A2A7B4 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140A2A8B4 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140A2C08C (_CmMergeFilterLists.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A2FD74 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140A3437C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A35084 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A35814 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140A86488 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140AABE98 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140B4FB90 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140B50740 (PipPendingServicesFilter.c)
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
