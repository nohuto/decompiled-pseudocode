/*
 * XREFs of ZwQueryKey @ 0x1403F9CE0
 * Callers:
 *     BiZwQueryKey @ 0x14039AEC8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14050C1CC (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405C3990 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x14068829C (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x140699968 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x14069BF64 (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073EDA0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x140769C04 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x14076A260 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140780F44 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A644C (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407C9254 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407CDD7C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877C68 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14089B2E8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6168 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1558 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140925A1C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABF8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C4B0 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
