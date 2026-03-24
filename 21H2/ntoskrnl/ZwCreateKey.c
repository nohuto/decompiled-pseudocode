/*
 * XREFs of ZwCreateKey @ 0x1403FA740
 * Callers:
 *     BiZwCreateKey @ 0x14039B5E8 (BiZwCreateKey.c)
 *     KvfCommitFeatureStates @ 0x1403A62DC (KvfCommitFeatureStates.c)
 *     PopOpenKey @ 0x1403A7CB0 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF654 (BapdpMarshallBootDataToRegistry.c)
 *     PopOpenThermalLoggingKey @ 0x1403CC95C (PopOpenThermalLoggingKey.c)
 *     EtwpCreateKey @ 0x1405AB9C8 (EtwpCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1405D2EFC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14062C388 (ExpWnfGetNameStoreRegistryRoot.c)
 *     _RegRtlCreateKeyTransacted @ 0x14063E55C (_RegRtlCreateKeyTransacted.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     PspReadUserQuotaLimits @ 0x1406ADBCC (PspReadUserQuotaLimits.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406BAAB8 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1406BF09C (CmpAddToHiveFileList.c)
 *     IopCreateRegistryKeyEx @ 0x14073FD44 (IopCreateRegistryKeyEx.c)
 *     IopOpenRegistryKey @ 0x140769AA4 (IopOpenRegistryKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x14078DFE8 (PopInitializePowerPolicySimulate.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A2578 (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x1407A5908 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x1407A6CEC (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x1407A7AC0 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407AAA2C (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1407AE2A0 (HalpPutAcpiHacksInRegistry.c)
 *     HalpRecordSecondaryGsivRange @ 0x1407AE638 (HalpRecordSecondaryGsivRange.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BD834 (IopUpdateSecureDeviceClassState.c)
 *     IoOpenDriverRegistryKey @ 0x1407C4790 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C4A84 (PiCreateDriverRedirectedStateKey.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C9B68 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     PopDirectedDripsQueryRegistryValues @ 0x1407CC134 (PopDirectedDripsQueryRegistryValues.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEF8C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmpRecordShutdownStopTime @ 0x14086BF90 (CmpRecordShutdownStopTime.c)
 *     CmpSyncNextBackupHive @ 0x140871460 (CmpSyncNextBackupHive.c)
 *     CmInitializeProcessor @ 0x140873470 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x140876F0C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140881E6C (CmpDoReDoCreateKey.c)
 *     PiCreateRegistryPath @ 0x14089F0F4 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x1408C11C8 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1408E0C00 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x14092D544 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140939160 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939480 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A150 (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x14094B76C (ExpUpdateComPlusPackage.c)
 *     sub_14094DC8C @ 0x14094DC8C (sub_14094DC8C.c)
 *     CMFRegisterEventTime @ 0x140959188 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CD2C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     BapdpWriteEventDataToRegistry @ 0x1409994B4 (BapdpWriteEventDataToRegistry.c)
 *     HalpPiix4Detect @ 0x14099A3E0 (HalpPiix4Detect.c)
 *     BapdGetISRegistryKey @ 0x14099B000 (BapdGetISRegistryKey.c)
 *     LogFwpRegisterWorker @ 0x1409F37C0 (LogFwpRegisterWorker.c)
 *     BapdpRegisterBitlockerStatus @ 0x140A41810 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x140A41964 (BapdpRegisterResumeInformation.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x140A4B6F0 (SaveNodeDistanceInformation.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A50EC4 (ArbInitializeOsInaccessibleRange.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     CmpCreateControlSet @ 0x140A58080 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A58540 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A58AB0 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     PfpParametersInitialize @ 0x140A6A864 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6F008 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x140A70928 (SepSecureBootSetRegistryKey.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140A8C0B0 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140A8C3D0 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140A8E43C (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140A8E6E4 (CmpCreateControlSetOverride.c)
 *     CmpInitializeSystemBiosInformation @ 0x140A8E8C0 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x140A8EA30 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140A94110 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A94278 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x140A94488 (BapdpRegisterWmdResult.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
