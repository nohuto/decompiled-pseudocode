/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14028E210
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1406F3C80 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406F3D20 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x140871900 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
