/*
 * XREFs of StorNVMe_wil_init @ 0x1C000FC84
 * Callers:
 *     DriverEntry @ 0x1C000E12C (DriverEntry.c)
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x1C0034078 (wil_InitializeFeatureStaging.c)
 */

__int64 StorNVMe_wil_init()
{
  return wil_InitializeFeatureStaging();
}
