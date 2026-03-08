/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x1409A279C
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x1409A22B8 (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
