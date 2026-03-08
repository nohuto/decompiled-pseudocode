/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x18027BC68
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025F9B0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector2 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm5_4
  struct D2DVector4 *result; // rax
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm10_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm0_4

  v3 = *((float *)a3 + 2);
  result = a1;
  v5 = v3 + v3;
  v6 = *((float *)a3 + 1);
  v7 = *((float *)a3 + 3);
  v8 = *(float *)a3;
  v9 = v6 + v6;
  v10 = v7 * (float)(v3 + v3);
  *((_DWORD *)a1 + 3) = 1065353216;
  v11 = v3 * (float)(v3 + v3);
  v12 = v6 * v5;
  v13 = 1.0 - (float)(v6 * (float)(v6 + v6));
  v14 = v8 * (float)(v6 + v6);
  v15 = (float)(v14 + v10) * *(float *)a2;
  *(float *)a1 = (float)((float)(v13 - v11) * *(float *)a2) + (float)((float)(v14 - v10) * *((float *)a2 + 1));
  v16 = (float)((float)((float)(v7 * (float)(v8 + v8)) + v12) * *((float *)a2 + 1))
      + (float)((float)((float)(v8 * v5) - (float)(v7 * v9)) * *(float *)a2);
  *((float *)a1 + 1) = (float)((float)((float)(1.0 - (float)(v8 * (float)(v8 + v8))) - v11) * *((float *)a2 + 1)) + v15;
  *((float *)a1 + 2) = v16;
  return result;
}
