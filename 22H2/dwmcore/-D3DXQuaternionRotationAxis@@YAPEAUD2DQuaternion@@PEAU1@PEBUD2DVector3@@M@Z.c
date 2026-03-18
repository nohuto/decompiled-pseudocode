/*
 * XREFs of ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18027E6D4
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x18023C8D0 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180261374 (-QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x180023AFC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x18011B8A8 (cosf_0.c)
 *     sinf_0 @ 0x18011B944 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationAxis(
        struct D2DQuaternion *a1,
        const struct D2DVector3 *a2,
        float a3)
{
  float v4; // xmm7_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  struct D2DQuaternion *result; // rax
  float v8; // xmm1_4
  float v9; // xmm7_4
  float v10[4]; // [rsp+20h] [rbp-38h] BYREF

  D3DXVec3Normalize((struct D2DVector3 *)v10, a2);
  v4 = sinf_0(a3 * 0.5);
  v5 = cosf_0(a3 * 0.5);
  v6 = v4 * v10[1];
  result = a1;
  v8 = v10[0] * v4;
  v9 = v4 * v10[2];
  *((float *)a1 + 3) = v5;
  *(float *)a1 = v8;
  *((float *)a1 + 2) = v9;
  *((float *)a1 + 1) = v6;
  return result;
}
