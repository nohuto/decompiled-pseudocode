/*
 * XREFs of ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x180023A0C
 * Callers:
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023990 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x1801AD514 (_anonymous_namespace_--TransformAndNormalize.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1802391F0 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18025D0F0 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180264948 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18027A408 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18027AF94 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180023C58 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v9; // xmm6_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *(float *)a2;
  v6 = (float)((float)(v5 * v5) + (float)(v3 * v3)) + (float)(v4 * v4);
  if ( (unsigned int)WithinEpsilon_0() )
  {
    if ( a1 != (struct D2DVector3 *)v7 )
    {
      *(_QWORD *)a1 = *(_QWORD *)v7;
      *((_DWORD *)a1 + 2) = *(_DWORD *)(v7 + 8);
    }
  }
  else if ( v6 <= 1.1754944e-38 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_DWORD *)a1 + 2) = 0;
  }
  else
  {
    v9 = 1.0 / sqrtf_0(v6);
    *(float *)a1 = v5 * v9;
    *((float *)a1 + 1) = v3 * v9;
    *((float *)a1 + 2) = v4 * v9;
  }
  return a1;
}
