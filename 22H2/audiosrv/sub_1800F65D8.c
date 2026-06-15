/*
 * XREFs of sub_1800F65D8 @ 0x1800F65D8
 * Callers:
 *     sub_1800F6770 @ 0x1800F6770 (sub_1800F6770.c)
 * Callees:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_1800F6198 @ 0x1800F6198 (sub_1800F6198.c)
 */

__int64 __fastcall sub_1800F65D8(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v11; // ebx

  v11 = sub_1800F6198(a8);
  sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, 1, v11, 0LL, 0);
  return v11;
}
