/*
 * XREFs of sub_1800EF9F8 @ 0x1800EF9F8
 * Callers:
 *     sub_180008F70 @ 0x180008F70 (sub_180008F70.c)
 *     sub_180075FCD @ 0x180075FCD (sub_180075FCD.c)
 *     sub_1800EF421 @ 0x1800EF421 (sub_1800EF421.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800EF9F8(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx

  v3 = a2[7];
  if ( v3 >= 8 )
    sub_1800472E0(a2[4], 2 * v3 + 2);
  a2[7] = 7LL;
  a2[6] = 0LL;
  *((_WORD *)a2 + 16) = 0;
  return sub_1800472E0((__int64)a2, 0x48uLL);
}
