/*
 * XREFs of sub_18005D3C0 @ 0x18005D3C0
 * Callers:
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_1800C0FE0 @ 0x1800C0FE0 (sub_1800C0FE0.c)
 *     sub_1800C12E0 @ 0x1800C12E0 (sub_1800C12E0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     sub_18005D53C @ 0x18005D53C (sub_18005D53C.c)
 *     _o_log10 @ 0x18006AB50 (_o_log10.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

__int64 __fastcall sub_18005D3C0(__int64 a1, float a2)
{
  double v3; // xmm0_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  __int64 result; // rax

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = sub_18005D53C();
  if ( o_pow() > v3 )
    v4 = -192.0;
  else
    v4 = o_log10() * 20.0;
  v5 = v4;
  result = 0LL;
  *(float *)(a1 + 4) = fminf(v5, *(float *)(a1 + 20));
  return result;
}
