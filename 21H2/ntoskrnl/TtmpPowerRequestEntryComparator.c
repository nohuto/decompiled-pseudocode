/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x1409A5A54
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x1409A556C (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
