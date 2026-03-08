/*
 * XREFs of ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18027ACB8
 * Callers:
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800BFB1C (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180023C58 (WithinEpsilon_0.c)
 */

__m128 *__fastcall D3DXQuaternionInverse(__m128 *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm2_4
  __m128 v7; // xmm3

  v2 = *((float *)a2 + 1);
  v3 = *(float *)a2;
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( v6 <= 1.0842022e-19 )
  {
    a1->m128_i32[0] = 0;
    a1->m128_i32[1] = 0;
    a1->m128_i32[2] = 0;
    a1->m128_i32[3] = 0;
  }
  else
  {
    a1->m128_f32[3] = v5;
    a1->m128_i32[0] = LODWORD(v3) ^ _xmm;
    v7 = (__m128)(unsigned int)FLOAT_1_0;
    a1->m128_i32[1] = LODWORD(v2) ^ _xmm;
    a1->m128_i32[2] = LODWORD(v4) ^ _xmm;
    if ( !WithinEpsilon_0(v6, 1.0) )
    {
      v7.m128_f32[0] = 1.0 / v6;
      *a1 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *a1);
    }
  }
  return a1;
}
