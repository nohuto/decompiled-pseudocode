/*
 * XREFs of ZwQueryLicenseValue @ 0x14041E2C0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14025B190 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     DifZwQueryLicenseValueWrapper @ 0x140625530 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140660F7C (RtlpGetPolicyValueForSystemCapability.c)
 *     ExGetExpirationDate @ 0x14082D70C (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140830FE0 (RtlpGetWindowsPolicy.c)
 *     MmCreateMirror @ 0x14096BA60 (MmCreateMirror.c)
 *     SepIsLockedDown @ 0x1409C599C (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F9E40 (ExpGenuinePolicyPostProcess.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140B25110 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140B2A640 (WheapLoadPolicy.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B30458 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
