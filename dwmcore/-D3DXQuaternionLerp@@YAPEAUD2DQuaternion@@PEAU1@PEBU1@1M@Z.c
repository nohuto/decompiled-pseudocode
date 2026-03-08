/*
 * XREFs of ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18027AD7C
 * Callers:
 *     ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x18025DDF4 (-QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

// local variable allocation has failed, the output may be wrong!
struct D2DQuaternion *__fastcall D3DXQuaternionLerp(struct D2DQuaternion *a1, __m128 *a2, __m128 *a3, double a4)
{
  __m128 v5; // xmm7
  __m128 v6; // xmm6
  __m128 v7; // xmm6
  __m128 v8; // xmm4
  __m128 v9; // xmm6
  struct D2DQuaternion *result; // rax

  v5 = (__m128)(unsigned int)FLOAT_1_0;
  v6 = (__m128)(unsigned int)FLOAT_1_0;
  v6.m128_f32[0] = 1.0 - *(float *)&a4;
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *a2);
  v8 = _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0), *a3);
  if ( (float)((float)((float)((float)(a2->m128_f32[1] * a3->m128_f32[1]) + (float)(a2->m128_f32[0] * a3->m128_f32[0]))
                     + (float)(a2->m128_f32[2] * a3->m128_f32[2]))
             + (float)(a2->m128_f32[3] * a3->m128_f32[3])) < 0.0 )
    v9 = _mm_sub_ps(v7, v8);
  else
    v9 = _mm_add_ps(v7, v8);
  *(__m128 *)a1 = v9;
  v5.m128_f32[0] = 1.0
                 / sqrtf_0(
                     (float)((float)((float)(*(float *)a1 * *(float *)a1)
                                   + (float)(*((float *)a1 + 1) * *((float *)a1 + 1)))
                           + (float)(*((float *)a1 + 2) * *((float *)a1 + 2)))
                   + (float)(*((float *)a1 + 3) * *((float *)a1 + 3)));
  result = a1;
  *(__m128 *)a1 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v9);
  return result;
}
