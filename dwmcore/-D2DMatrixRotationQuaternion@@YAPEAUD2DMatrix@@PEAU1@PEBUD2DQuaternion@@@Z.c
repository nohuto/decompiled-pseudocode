/*
 * XREFs of ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18027A59C
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1802391F0 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Matrix4x4FromQuaternion@CExpressionValueStack@@QEAAJXZ @ 0x18025BD1C (-Matrix4x4FromQuaternion@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18025C95C (-Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixRotationQuaternion(struct D2DMatrix *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm1_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm10_4
  struct D2DMatrix *result; // rax
  float v14; // xmm12_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm3_4

  v2 = *((float *)a2 + 3);
  v3 = *((float *)a2 + 2);
  v4 = v3 + v3;
  v5 = *(float *)a2;
  v6 = *((float *)a2 + 1);
  v7 = v3 * (float)(v3 + v3);
  v8 = *(float *)a2 + *(float *)a2;
  *((_DWORD *)a1 + 3) = 0;
  v9 = v2 * v4;
  *((_DWORD *)a1 + 7) = 0;
  v10 = v6 + v6;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  v11 = v6;
  v12 = v2 * v8;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  result = a1;
  v14 = v6 * v4;
  *((_DWORD *)a1 + 15) = 1065353216;
  v15 = v2 * v10;
  v16 = v11 * v10;
  v17 = 1.0 - (float)(v5 * v8);
  *(float *)a1 = (float)(1.0 - v16) - v7;
  *((float *)a1 + 2) = (float)(v5 * v4) - v15;
  *((float *)a1 + 8) = (float)(v5 * v4) + v15;
  *((float *)a1 + 1) = (float)(v5 * v10) + v9;
  *((float *)a1 + 4) = (float)(v5 * v10) - v9;
  *((float *)a1 + 9) = v14 - v12;
  *((float *)a1 + 5) = v17 - v7;
  *((float *)a1 + 6) = v14 + v12;
  *((float *)a1 + 10) = v17 - v16;
  return result;
}
