/*
 * XREFs of ZwDeleteValueKey @ 0x1403FBE80
 * Callers:
 *     BiZwDeleteValueKey @ 0x14039B648 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B7D94 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x1405A02E0 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x140640A68 (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406C3388 (ExpWnfDeletePermanentName.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072BC20 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E35C (DrvDbSetRegValueMappedProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140730420 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407307CC (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733B4C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140734EF0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407351BC (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopReleaseDeviceResources @ 0x140738748 (IopReleaseDeviceResources.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14073C2C0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiProcessDriverInstance @ 0x140740070 (PiProcessDriverInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744178 (_CmSetDeviceRegPropWorker.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F64C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14075028C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750B94 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14075256C (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     _PnpDeletePropertyWorker @ 0x14076CF9C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14076E804 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x14077C3F0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140781044 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x140781820 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x14078BE50 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14079A894 (WdipSemDeleteValueFromRegistry.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0A40 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     CmpRemoveFromHiveFileList @ 0x14087344C (CmpRemoveFromHiveFileList.c)
 *     CmpDoReDoDeleteValue @ 0x140881F5C (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089B4D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1408A1910 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1408A1978 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A55FC (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x14092BA74 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CB14 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140974908 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975A50 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978BDC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409796E4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140979760 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979930 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDAC (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4140C (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     ArbDeleteMmConfigRange @ 0x140A6CB54 (ArbDeleteMmConfigRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName);
}
