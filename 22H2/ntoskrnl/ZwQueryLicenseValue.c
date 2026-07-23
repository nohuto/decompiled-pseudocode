/*
 * XREFs of ZwQueryLicenseValue @ 0x1403FC4A0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14024FE28 (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x140329F60 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1C74 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpGetWindowsPolicy @ 0x14078ECE0 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x1407AAC50 (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1408C7360 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409143A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14091BFEC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094DA10 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A62C18 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A73288 (InitializeDynamicPartitioningPolicy.c)
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
