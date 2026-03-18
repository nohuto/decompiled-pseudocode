/*
 * XREFs of PpmQueryDripsResidency @ 0x1405C8960
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x14039A1C4 (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency(dword_140C542C0);
}
