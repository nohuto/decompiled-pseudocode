/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x18027BBD8
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025F9B0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector2 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector4 *result; // rax
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm4_4

  result = a1;
  v4 = *(float *)a2;
  v5 = (float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 5));
  v6 = *((float *)a2 + 1) * *((float *)a3 + 6);
  v7 = *((float *)a2 + 1) * *((float *)a3 + 7);
  *(float *)a1 = (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
               + *((float *)a3 + 12);
  v8 = v4 * *((float *)a3 + 2);
  v9 = (float)(v4 * *((float *)a3 + 3)) + v7;
  *((float *)a1 + 1) = v5 + *((float *)a3 + 13);
  v10 = v9 + *((float *)a3 + 15);
  *((float *)a1 + 2) = (float)(v8 + v6) + *((float *)a3 + 14);
  *((float *)a1 + 3) = v10;
  return result;
}
