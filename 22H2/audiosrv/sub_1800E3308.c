/*
 * XREFs of sub_1800E3308 @ 0x1800E3308
 * Callers:
 *     sub_1800E2748 @ 0x1800E2748 (sub_1800E2748.c)
 * Callees:
 *     sub_1800E31E8 @ 0x1800E31E8 (sub_1800E31E8.c)
 */

_QWORD *__fastcall sub_1800E3308(_QWORD *a1)
{
  sub_1800E31E8(a1);
  *a1 = off_1801554E0;
  a1[73] = 0LL;
  a1[1] = off_180155350;
  a1[31] = off_180155330;
  a1[32] = off_180155300;
  return a1;
}
