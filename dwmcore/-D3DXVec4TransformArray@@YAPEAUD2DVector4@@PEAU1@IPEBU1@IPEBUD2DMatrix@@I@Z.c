/*
 * XREFs of ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18027BFF4
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18020EFFC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025E98C (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4TransformArray(
        struct D2DVector4 *a1,
        __int64 a2,
        const struct D2DVector4 *a3,
        __int64 a4,
        const struct D2DMatrix *a5)
{
  struct D2DVector4 *result; // rax
  float v6; // xmm7_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4

  result = a1;
  v6 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 1)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 5)))
             + (float)(*((float *)a3 + 2) * *((float *)a5 + 9)))
     + (float)(*((float *)a3 + 3) * *((float *)a5 + 13));
  v7 = *((float *)a3 + 2);
  v8 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 2)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 6)))
             + (float)(v7 * *((float *)a5 + 10)))
     + (float)(*((float *)a3 + 3) * *((float *)a5 + 14));
  v9 = *((float *)a3 + 3);
  v10 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 7)))
              + (float)(v7 * *((float *)a5 + 11)))
      + (float)(v9 * *((float *)a5 + 15));
  *(float *)a1 = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a5 + 4)) + (float)(*(float *)a3 * *(float *)a5))
                       + (float)(v7 * *((float *)a5 + 8)))
               + (float)(v9 * *((float *)a5 + 12));
  *((float *)a1 + 1) = v6;
  *((float *)a1 + 2) = v8;
  *((float *)a1 + 3) = v10;
  return result;
}
