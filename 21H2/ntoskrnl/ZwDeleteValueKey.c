/*
 * XREFs of ZwDeleteValueKey @ 0x1403FC060
 * Callers:
 *     BiZwDeleteValueKey @ 0x14039B798 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B7F04 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x1405A0510 (VfClearVerifierSettings.c)
 *     ExpWnfDeletePermanentName @ 0x140621F90 (ExpWnfDeletePermanentName.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072C0D0 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140730998 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733D0C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x14073537C (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14073C480 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiProcessDriverInstance @ 0x140740230 (PiProcessDriverInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744338 (_CmSetDeviceRegPropWorker.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F80C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14075272C (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     _PnpDeletePropertyWorker @ 0x14076D15C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x14077C5B0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140781204 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x1407819E0 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x14078C010 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x14078C230 (ExpSetPendingUILanguage.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14079AA94 (WdipSemDeleteValueFromRegistry.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0BB0 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     CmpRemoveFromHiveFileList @ 0x1408735AC (CmpRemoveFromHiveFileList.c)
 *     CmpDoReDoDeleteValue @ 0x1408820BC (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089B630 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1408A1A70 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1408A1AD8 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A575C (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x14092BBD4 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140974AE8 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975C30 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978DBC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409798C4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140979940 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979B10 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CF8C (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     ArbDeleteMmConfigRange @ 0x140A6DB54 (ArbDeleteMmConfigRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
