/*
 * XREFs of StorNVMe_wil_init @ 0x1C0007C74
 * Callers:
 *     DriverEntry @ 0x1C000A530 (DriverEntry.c)
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x1C002B078 (wil_InitializeFeatureStaging.c)
 */

__int64 StorNVMe_wil_init()
{
  return wil_InitializeFeatureStaging();
}
