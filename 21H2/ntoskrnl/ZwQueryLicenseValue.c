/*
 * XREFs of ZwQueryLicenseValue @ 0x1403FCE20
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402504F4 (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x1402D0C50 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A2374 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpGetWindowsPolicy @ 0x140793200 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x1407AA820 (ExGetExpirationDate.c)
 *     MmCreateMirror @ 0x1408C7310 (MmCreateMirror.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140914354 (RtlpGetPolicyValueForSystemCapability.c)
 *     SepIsLockedDown @ 0x14091BF9C (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094D9C0 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     WheapLoadPolicy @ 0x140A62C18 (WheapLoadPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A73288 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
