/*
 * XREFs of ZwQueryLicenseValue @ 0x1403FD000
 * Callers:
 *     RtlGetProductInfo @ 0x14024F0E0 (RtlGetProductInfo.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402F4D04 (SepDesktopAppxSubProcessToken.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpGetWindowsPolicy @ 0x14078EFA0 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x1407AAA20 (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1408C7470 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409144B4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14091C0FC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094DB90 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A63C18 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6D6A4 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A74288 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
