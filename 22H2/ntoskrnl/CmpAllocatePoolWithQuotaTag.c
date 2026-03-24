/*
 * XREFs of CmpAllocatePoolWithQuotaTag @ 0x1404ECD50
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x14086B380 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B518 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall CmpAllocatePoolWithQuotaTag(int a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
}
