/*
 * XREFs of sub_1800C1C58 @ 0x1800C1C58
 * Callers:
 *     sub_1800C1BA0 @ 0x1800C1BA0 (sub_1800C1BA0.c)
 * Callees:
 *     sub_18005D53C @ 0x18005D53C (sub_18005D53C.c)
 *     sub_1800B8920 @ 0x1800B8920 (sub_1800B8920.c)
 */

__int64 __fastcall sub_1800C1C58(__int64 a1, float a2)
{
  double v3; // xmm0_8
  __int64 v4; // rcx
  double v5; // xmm0_8
  __int64 result; // rax
  float v7; // xmm1_4

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  *(_QWORD *)&v3 = sub_18005D53C(a1, (*(double *)(a1 + 32) - *(double *)(a1 + 24)) * a2 + *(double *)(a1 + 24)).m128_u64[0];
  v5 = sub_1800B8920(v4, v3);
  result = 0LL;
  v7 = v5;
  *(float *)(a1 + 20) = v7;
  return result;
}
