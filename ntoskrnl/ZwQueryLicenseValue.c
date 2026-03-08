/*
 * XREFs of ZwQueryLicenseValue @ 0x140414ED0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x1402FF290 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x14040BD04 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1405F2E60 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140744670 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetWindowsPolicy @ 0x1407FE630 (RtlpGetWindowsPolicy.c)
 *     ExGetExpirationDate @ 0x14081A9F4 (ExGetExpirationDate.c)
 *     SepIsLockedDown @ 0x1409C5D5C (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F6FF0 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x140A2C460 (MmCreateMirror.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B45014 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140B64730 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140B6A2B0 (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
