/*
 * XREFs of PfSnIsSectionPrefetchedAfterPhase @ 0x1406A4C74
 * Callers:
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfSnIsSectionPrefetchedAfterPhase(__int64 a1, int a2, unsigned int a3)
{
  int v3; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 20) >> 8;
  if ( a2 != 1 )
    LOBYTE(v3) = *(_DWORD *)(a1 + 20) >> 1;
  if ( !_BitScanReverse(&v5, v3 & 0x7F) )
    return 0;
  _BitScanReverse(&v6, a3);
  return v5 > v6;
}
