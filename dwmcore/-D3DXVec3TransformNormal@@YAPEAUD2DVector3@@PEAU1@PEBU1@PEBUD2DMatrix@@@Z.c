/*
 * XREFs of ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B7C0
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802398F8 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x18025F4EC (-Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ.c)
 *     _lambda_c2661e01401ae061a9dc9ee442c48f39_::operator() @ 0x180273934 (_lambda_c2661e01401ae061a9dc9ee442c48f39_--operator().c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformNormal(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector3 *result; // rax
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm2_4

  result = a1;
  v4 = (float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
     + (float)(*((float *)a2 + 2) * *((float *)a3 + 9));
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 6)))
     + (float)(v5 * *((float *)a3 + 10));
  *(float *)a1 = (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
               + (float)(v5 * *((float *)a3 + 8));
  *((float *)a1 + 1) = v4;
  *((float *)a1 + 2) = v6;
  return result;
}
