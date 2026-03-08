/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18027BA58
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025F9B0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector4 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm8_4
  float v6; // xmm11_4
  float v7; // xmm12_4
  struct D2DVector4 *result; // rax
  float v9; // xmm10_4
  float v10; // xmm13_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm11_4
  float v24; // xmm4_4
  float v25; // xmm1_4

  v3 = *((float *)a3 + 2);
  v4 = v3 + v3;
  v5 = *(float *)a3;
  v6 = *(float *)a3 * (float)(v3 + v3);
  v7 = *((float *)a3 + 3);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
  result = a1;
  v9 = v7;
  v10 = *((float *)a3 + 1);
  v11 = v7 * (float)(v3 + v3);
  v12 = v10 + v10;
  v13 = v3 * (float)(v3 + v3);
  v14 = v7 * (float)(v5 + v5);
  v15 = v10 * v4;
  v16 = *((float *)a3 + 1) * v12;
  v17 = v9 * v12;
  v18 = v5 * v12;
  v19 = 1.0 - (float)(v5 * (float)(v5 + v5));
  v20 = (float)((float)((float)((float)(1.0 - v16) - v13) * *(float *)a2)
              + (float)((float)((float)(v5 * v12) - v11) * *((float *)a2 + 1)))
      + (float)((float)(v6 + v17) * *((float *)a2 + 2));
  v21 = v19 - v13;
  v22 = (float)(v15 - v14) * *((float *)a2 + 2);
  v23 = (float)((float)(v6 - v17) * *(float *)a2) + (float)((float)(v15 + v14) * *((float *)a2 + 1));
  v24 = (float)(v19 - v16) * *((float *)a2 + 2);
  v25 = (float)(v21 * *((float *)a2 + 1)) + (float)((float)(v18 + v11) * *(float *)a2);
  *(float *)a1 = v20;
  *((float *)a1 + 2) = v23 + v24;
  *((float *)a1 + 1) = v25 + v22;
  return result;
}
