/*
 * XREFs of sub_1801298F7 @ 0x1801298F7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018C60 @ 0x180018C60 (sub_180018C60.c)
 */

void __fastcall sub_1801298F7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    sub_180018C60((__int64 *)(a2 + 64));
  }
}
