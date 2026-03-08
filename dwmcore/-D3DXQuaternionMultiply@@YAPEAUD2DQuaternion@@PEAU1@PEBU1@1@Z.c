/*
 * XREFs of ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18027AE60
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800BF728 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800BFB1C (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x180259740 (-Concatenate@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DQuaternion *__fastcall D3DXQuaternionMultiply(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm5_4
  struct D2DQuaternion *result; // rax
  float v5; // xmm4_4
  float v6; // xmm8_4
  float v7; // xmm11_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4

  v3 = *((float *)a3 + 3);
  result = a1;
  v5 = *((float *)a2 + 3);
  v6 = *((float *)a3 + 1);
  v7 = (float)((float)((float)(*((float *)a2 + 1) * v3) - (float)(*((float *)a2 + 2) * *(float *)a3)) + (float)(v6 * v5))
     + (float)(*((float *)a3 + 2) * *(float *)a2);
  v8 = (float)((float)((float)(*((float *)a2 + 1) * *(float *)a3) + (float)(*((float *)a2 + 2) * v3))
             - (float)(v6 * *(float *)a2))
     + (float)(*((float *)a3 + 2) * v5);
  v9 = *((float *)a3 + 2);
  v10 = (float)((float)((float)(v5 * v3) - (float)(*(float *)a3 * *(float *)a2)) - (float)(*((float *)a2 + 1) * v6))
      - (float)(v9 * *((float *)a2 + 2));
  *(float *)a1 = (float)((float)((float)(*(float *)a3 * v5) + (float)(*(float *)a2 * v3))
                       + (float)(v6 * *((float *)a2 + 2)))
               - (float)(v9 * *((float *)a2 + 1));
  *((float *)a1 + 1) = v7;
  *((float *)a1 + 2) = v8;
  *((float *)a1 + 3) = v10;
  return result;
}
