/*
 * XREFs of ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18027B42C
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1802391F0 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x18025F068 (-Vector3Cross@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Cross(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  struct D2DVector3 *result; // rax
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm4_4

  result = a1;
  v4 = *((float *)a3 + 2);
  v5 = *((float *)a3 + 1);
  v6 = (float)(*(float *)a3 * *((float *)a2 + 2)) - (float)(*(float *)a2 * v4);
  v7 = (float)(*(float *)a2 * v5) - (float)(*(float *)a3 * *((float *)a2 + 1));
  *(float *)a1 = (float)(v4 * *((float *)a2 + 1)) - (float)(v5 * *((float *)a2 + 2));
  *((float *)a1 + 1) = v6;
  *((float *)a1 + 2) = v7;
  return result;
}
