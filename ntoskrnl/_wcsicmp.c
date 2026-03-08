/*
 * XREFs of _wcsicmp @ 0x1403D3ED0
 * Callers:
 *     LdrRscIsTypeExist @ 0x14035CB28 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x14035DC3C (LdrpResSearchResourceMappedFile.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403719E0 (HalpMcUpdateFindDataTableEntry.c)
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14039C354 (RtlpMuiRegAddAlternateCodePage.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403A7A78 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14055F9C8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14055FA3C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058832C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140680140 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmUpdateDevicePanel @ 0x140683E30 (_CmUpdateDevicePanel.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406896F4 (PiDqQueryApplyObjectEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14068CA08 (PiUEventNotifyTargetDeviceChange.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiDqPropertyCallback @ 0x1406CC9A0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406D4190 (PiPnpRtlInterfaceFilterCallback.c)
 *     AslpFileVerQueryBlock @ 0x1406D5020 (AslpFileVerQueryBlock.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x140747E38 (ConstraintEval.c)
 *     PiDmCompareObjects @ 0x140759770 (PiDmCompareObjects.c)
 *     PropertyEval @ 0x1407622B0 (PropertyEval.c)
 *     StringListContains @ 0x140765764 (StringListContains.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x14076C560 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1407830E8 (PiBuildDeviceNodeInstancePath.c)
 *     PiSwUpdateArrayProperties @ 0x140785A58 (PiSwUpdateArrayProperties.c)
 *     GetPropertyFromPropArray @ 0x1407912F0 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407975D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     AslpFileGetVersionBlock @ 0x1407A0528 (AslpFileGetVersionBlock.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 *     RtlpHashStringToAtom @ 0x1407DA630 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x1407E9958 (LdrpSearchResourceSection_U.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407FF728 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1408068A8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140808C48 (PiSwDeviceFindInterfaceEntry.c)
 *     SLQueryLicenseValueInternal @ 0x14081A004 (SLQueryLicenseValueInternal.c)
 *     DrvDbSuspendDatabase @ 0x14081C16C (DrvDbSuspendDatabase.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140830D88 (BiIsValidDiskDevice.c)
 *     _CmGetDeviceSiblings @ 0x140839C1C (_CmGetDeviceSiblings.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 *     RtlpLangNameInMultiSzString @ 0x140843B4C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14084463C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x140848B18 (SdbpFindMatchingName.c)
 *     PiSwDeviceCompareObjects @ 0x1408514E0 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140852F74 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmIsLocalMachineContainer @ 0x140859BD8 (_CmIsLocalMachineContainer.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140860D8C (PiDrvDbRegisterNodeCallback.c)
 *     PiSwStopDestroy @ 0x140867198 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x14086AB0C (PipCheckForDenyExecute.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140870310 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopErrorLogThread @ 0x1408704E0 (IopErrorLogThread.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140875F3C (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140876D34 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1408778D0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14087FA04 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ArbShareDriverExclusive @ 0x14093394C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140955668 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140956F30 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1409582C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140958510 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14095CFB0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140964328 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDrvDbOverlayNodeHive @ 0x14096D7B8 (PiDrvDbOverlayNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099A414 (PpmProcessSettingsFromQueryTable.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140A4E9F0 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A5D574 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140A5D620 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A604E0 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A64E80 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140A64F80 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140A667FC (_CmMergeFilterLists.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A69880 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140A70CE0 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A719B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A72148 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140AC3E74 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140AEABC4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140B91320 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140B91ED0 (PipPendingServicesFilter.c)
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
