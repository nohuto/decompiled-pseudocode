/*
 * XREFs of ZwQueryKey @ 0x1403FA660
 * Callers:
 *     BiZwQueryKey @ 0x14039B5C8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14050C28C (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405C3A50 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406A51CC (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406B69A8 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1406B8E8C (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742900 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x14076A5E4 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x14076AC40 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140781044 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A601C (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407C9334 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407CDE5C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877C18 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14089B298 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6118 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1508 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409259CC (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABA8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C460 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass);
}
