/*
 * XREFs of ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18027B2D4
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18025D0F0 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180264948 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180023C58 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2DVector2 *__fastcall D3DXVec2Normalize(struct D2DVector2 *a1, const struct D2DVector2 *a2)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm7
  float v5; // xmm2_4
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  float v8; // xmm8_4

  v3 = (__m128)*(unsigned int *)a2;
  v4 = (__m128)*((unsigned int *)a2 + 1);
  v5 = (float)(v3.m128_f32[0] * v3.m128_f32[0]) + (float)(v4.m128_f32[0] * v4.m128_f32[0]);
  if ( WithinEpsilon_0(v5, 1.0) )
  {
    if ( (_QWORD *)v7 != v6 )
      *(_QWORD *)v7 = *v6;
  }
  else if ( v5 <= 1.1754944e-38 )
  {
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
  }
  else
  {
    v8 = 1.0 / sqrtf_0(v5);
    v3.m128_f32[0] = v3.m128_f32[0] * v8;
    v4.m128_f32[0] = v4.m128_f32[0] * v8;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  }
  return a1;
}
