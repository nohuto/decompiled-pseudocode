/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x14057864C
 * Callers:
 *     PpmParkDistributeUtility @ 0x1402CF3F0 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x140577E50 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityToNormalizedUtility(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 )
    return (v2 * a2) >> 16;
  return a2;
}
