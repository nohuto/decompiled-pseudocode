/*
 * XREFs of PpmQueryDripsResidency @ 0x140585A80
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D6940 (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency(dword_140CF7E40);
}
