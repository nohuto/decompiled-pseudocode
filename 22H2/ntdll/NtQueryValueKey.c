/*
 * XREFs of NtQueryValueKey @ 0x18009D7C0
 * Callers:
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 *     ReadUlongFromKey @ 0x18003F7B4 (ReadUlongFromKey.c)
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180049DEC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180049ED4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18004A1C8 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C54 (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006DF10 (RtlpLookupCurDirSetting.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076500 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4A0 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x18007C000 (RtlpNtQueryValueKey.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C340 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007D5B0 (RtlpTestHookInitialize.c)
 *     RtlpIsCustomLocale @ 0x180087C80 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A880 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlInitializeRXact @ 0x18008BB40 (RtlInitializeRXact.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB520 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CB8B0 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A70 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0E5C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4610 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DE5EC (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DEECC (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0050 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E24B0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3948 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE26C (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE600 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800F42C4 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F45D8 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x1800FD2DC (RtlpGetUserLocaleName.c)
 *     RtlOsDeploymentState @ 0x180101F30 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180102070 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106DD4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119D48 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     QueryRegistryValue @ 0x18011A024 (QueryRegistryValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
