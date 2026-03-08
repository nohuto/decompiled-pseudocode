/*
 * XREFs of StorNVMe_wil_init @ 0x1C00036D4
 * Callers:
 *     DriverEntry @ 0x1C0007584 (DriverEntry.c)
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x1C0037078 (wil_InitializeFeatureStaging.c)
 */

__int64 StorNVMe_wil_init()
{
  return wil_InitializeFeatureStaging();
}
