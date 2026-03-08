/*
 * XREFs of ZwQueryKey @ 0x1404125D0
 * Callers:
 *     BiZwQueryKey @ 0x140390458 (BiZwQueryKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1403904AC (BiOpenStoreKeyFromObject.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14055D2BC (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1405F2D00 (DifZwQueryKeyWrapper.c)
 *     RtlpValidateKeyTrust @ 0x14069ED54 (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140771C20 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetRegistryKeyInformation @ 0x140780288 (IopGetRegistryKeyInformation.c)
 *     CmpGetAcpiProfileInformation @ 0x140813588 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x140852AC0 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1408597BC (SepReadAndPopulateCapes.c)
 *     _RegRtlQueryInfoKey @ 0x140868C7C (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x14087E564 (PiRearrangeDeviceInstances.c)
 *     PipCallbackHasDeviceOverrides @ 0x14094EB88 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140974B38 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409CEF1C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E1C34 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A0E038 (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     HalpInitChipHacks @ 0x140B35648 (HalpInitChipHacks.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140B5738C (PipInitDeviceOverrideCache.c)
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
