/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18027B858
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18025D0F0 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180264948 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180023C58 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, const struct D2DVector4 *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DVector4 *v8; // rdx
  float v9; // xmm6_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = *(float *)a2;
  v7 = (float)((float)((float)(v6 * v6) + (float)(v3 * v3)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( WithinEpsilon_0(v7, 1.0) )
  {
    if ( a1 != v8 )
      *(_OWORD *)a1 = *(_OWORD *)v8;
  }
  else if ( v7 <= 1.1754944e-38 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  else
  {
    v9 = 1.0 / sqrtf_0(v7);
    *(float *)a1 = v6 * v9;
    *((float *)a1 + 1) = v3 * v9;
    *((float *)a1 + 2) = v4 * v9;
    *((float *)a1 + 3) = v5 * v9;
  }
  return a1;
}
