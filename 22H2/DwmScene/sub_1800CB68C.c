/*
 * XREFs of sub_1800CB68C @ 0x1800CB68C
 * Callers:
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 * Callees:
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800CB68C(__int64 *a1, _QWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  size_t v11; // [rsp+40h] [rbp-28h]

  *(_OWORD *)a1 = 0LL;
  sub_180017744(a2, a1, 1u);
  sub_18006294C(*a1, 1, 0);
  sub_18006294C(*a1, 2, 0);
  sub_18006294C(*a1, 4, 0);
  LODWORD(v11) = 0;
  sub_18009A1D4(*a1, a3, a4, 0, a5, a6, a7, 0LL, v11, 0LL);
  return a1;
}
