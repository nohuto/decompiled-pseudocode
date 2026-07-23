/*
 * XREFs of ZwDeleteValueKey @ 0x1403FB500
 * Callers:
 *     BiZwDeleteValueKey @ 0x14039AF48 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B7734 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x1405A0220 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x1406B9848 (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406F88EC (ExpWnfDeletePermanentName.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140728234 (DrvDbSetRegValueMappedProperty.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407282BC (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407285CC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072CAE0 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407308D4 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733E9C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140735090 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140738768 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiProcessDriverInstance @ 0x14073C510 (PiProcessDriverInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140740618 (_CmSetDeviceRegPropWorker.c)
 *     IopReleaseDeviceResources @ 0x14074B5CC (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074EE3C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14074FA7C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750384 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x140751D5C (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     _PnpDeletePropertyWorker @ 0x14076C76C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14076DED4 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x14077C2F0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140780F44 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x140781720 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x14078BD50 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 *     WdipSemDeleteValueFromRegistry @ 0x140795724 (WdipSemDeleteValueFromRegistry.c)
 *     CmpSetVersionData @ 0x1407A825C (CmpSetVersionData.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0960 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     CmpRemoveFromHiveFileList @ 0x14087349C (CmpRemoveFromHiveFileList.c)
 *     CmpDoReDoDeleteValue @ 0x140881FAC (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089B520 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1408A1960 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1408A19C8 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A564C (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x14092BAC4 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CB64 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140974958 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975AA0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978C2C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140979734 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1409797B0 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979980 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDFC (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4083C (BapdpProcessVsmKeyBlobs.c)
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
  return KiServiceInternal(KeyHandle);
}
