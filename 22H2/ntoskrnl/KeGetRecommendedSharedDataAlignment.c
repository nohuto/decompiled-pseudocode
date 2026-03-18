/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140322120
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1407926D0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140792770 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1408747C0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
