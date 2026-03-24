/*
 * XREFs of ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18021D98C
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801D7838 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180200338 (-QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C7848 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x1800F3F93 (cosf_0.c)
 *     sinf_0 @ 0x1800F3FCF (sinf_0.c)
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
