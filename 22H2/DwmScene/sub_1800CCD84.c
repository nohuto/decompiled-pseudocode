/*
 * XREFs of sub_1800CCD84 @ 0x1800CCD84
 * Callers:
 *     sub_1800E9A10 @ 0x1800E9A10 (sub_1800E9A10.c)
 *     sub_18010A150 @ 0x18010A150 (sub_18010A150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CCD84(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048640LL;
  if ( a2 != 4 )
    v3 = 64LL;
  return a3 | ((__int64)a1 << 50) | v3;
}
