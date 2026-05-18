/*
 * XREFs of sub_1800CCD24 @ 0x1800CCD24
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800E9A10 @ 0x1800E9A10 (sub_1800E9A10.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_18010A100 @ 0x18010A100 (sub_18010A100.c)
 *     sub_18010A150 @ 0x18010A150 (sub_18010A150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CCD24(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 65537LL;
  if ( a2 != 4 )
    v3 = 1LL;
  return a3 | ((__int64)a1 << 32) | v3;
}
