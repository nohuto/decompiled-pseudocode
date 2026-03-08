/*
 * XREFs of PpmQueryDripsResidency @ 0x140583550
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D1420 (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency(dword_140CF7A00);
}
