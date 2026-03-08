/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180023B58
 * Callers:
 *     EncodeTBNFrameToQuaternion @ 0x180006D24 (EncodeTBNFrameToQuaternion.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023AC0 (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18025D0F0 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180023C58 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DQuaternion *v8; // rdx
  float v10; // xmm6_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = *(float *)a2;
  v7 = (float)((float)((float)(v6 * v6) + (float)(v3 * v3)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( (unsigned int)WithinEpsilon_0() )
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
    v10 = 1.0 / sqrtf_0(v7);
    *(float *)a1 = v6 * v10;
    *((float *)a1 + 1) = v3 * v10;
    *((float *)a1 + 2) = v4 * v10;
    *((float *)a1 + 3) = v5 * v10;
  }
  return a1;
}
