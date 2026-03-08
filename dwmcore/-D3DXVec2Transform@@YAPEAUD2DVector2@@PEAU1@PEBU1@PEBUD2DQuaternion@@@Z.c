/*
 * XREFs of ?D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18027B384
 * Callers:
 *     ?Vector2Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025ECA8 (-Vector2Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector2 *__fastcall D3DXVec2Transform(
        struct D2DVector2 *a1,
        const struct D2DVector2 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm2_4
  struct D2DVector2 *result; // rax
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4

  v3 = *((float *)a3 + 1);
  result = a1;
  v5 = *((float *)a3 + 2);
  v6 = v5 + v5;
  v7 = *(float *)a3 * (float)(v3 + v3);
  v8 = v5 * (float)(v5 + v5);
  v9 = v6 * *((float *)a3 + 3);
  v10 = (float)(v7 - v9) * *((float *)a2 + 1);
  v11 = (float)(v7 + v9) * *(float *)a2;
  *(float *)a1 = (float)((float)((float)(1.0 - (float)(v3 * (float)(v3 + v3))) - v8) * *(float *)a2) + v10;
  *((float *)a1 + 1) = (float)((float)((float)(1.0 - (float)((float)(*(float *)a3 + *(float *)a3) * *(float *)a3)) - v8)
                             * *((float *)a2 + 1))
                     + v11;
  return result;
}
