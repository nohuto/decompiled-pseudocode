/*
 * XREFs of ZwQueryKey @ 0x1403FA840
 * Callers:
 *     BiZwQueryKey @ 0x14039B718 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14050C4CC (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405C3C80 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140602DFC (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x140615E68 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x14061848C (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x14076A7A4 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140781204 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A621C (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407C9654 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407CDFCC (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14089B3F8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6278 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1668 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140925B2C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A5DBAC (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A639BC (HalpInitChipHacks.c)
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
