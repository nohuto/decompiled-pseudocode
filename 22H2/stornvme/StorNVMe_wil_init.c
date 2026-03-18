/*
 * XREFs of StorNVMe_wil_init @ 0x1C0004538
 * Callers:
 *     DriverEntry @ 0x1C00076D8 (DriverEntry.c)
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x1C0037078 (wil_InitializeFeatureStaging.c)
 */

__int64 StorNVMe_wil_init()
{
  return wil_InitializeFeatureStaging();
}
