/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x1406140C4
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x140A0F190 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A0F4A0 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(a1 | 1, a2, a3);
}
