/*
 * XREFs of sub_1800543D0 @ 0x1800543D0
 * Callers:
 *     sub_180054330 @ 0x180054330 (sub_180054330.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_1800BF1AC @ 0x1800BF1AC (sub_1800BF1AC.c)
 *     sub_1800BF350 @ 0x1800BF350 (sub_1800BF350.c)
 *     sub_1800C0FE0 @ 0x1800C0FE0 (sub_1800C0FE0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     sub_18005444C @ 0x18005444C (sub_18005444C.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

float __fastcall sub_1800543D0(__int64 a1)
{
  double v2; // xmm0_8

  o_pow();
  v2 = (sub_18005444C(a1) - *(double *)(a1 + 24)) / (*(double *)(a1 + 32) - *(double *)(a1 + 24));
  if ( v2 >= 1.0 )
    v2 = 1.0;
  if ( v2 <= 0.0 )
    return 0.0;
  return v2;
}
