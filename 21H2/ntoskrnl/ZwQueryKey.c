/*
 * XREFs of ZwQueryKey @ 0x14041BA20
 * Callers:
 *     BiZwQueryKey @ 0x1403A7874 (BiZwQueryKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051EAEC (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14055F2A0 (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1406253D0 (DifZwQueryKeyWrapper.c)
 *     BiOpenStoreKeyFromObject @ 0x14064CC20 (BiOpenStoreKeyFromObject.c)
 *     IopGetRegistryKeyInformation @ 0x14067A3F4 (IopGetRegistryKeyInformation.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406C55CC (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406CB590 (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1406DAA38 (RtlpValidateKeyTrust.c)
 *     PiNormalizeDeviceText @ 0x1406E1D34 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x1406E74D0 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x1408386A0 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x140859794 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14085D7FC (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14091E6AC (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14093FE38 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1409654F8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E190C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x140A2D248 (_RegRtlCopyTreeInternal.c)
 *     HalpInitChipHacks @ 0x140AF6E6C (HalpInitChipHacks.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
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
