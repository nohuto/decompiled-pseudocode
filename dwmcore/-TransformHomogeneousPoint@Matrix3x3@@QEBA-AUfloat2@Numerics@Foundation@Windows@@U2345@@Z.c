/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x1800E5A70
 * Callers:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1800E5A20 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::TransformHomogeneousPoint(float *a1, float *a2, __int64 a3)
{
  float v3; // xmm2_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float *result; // rax

  v3 = (float)((float)(*((float *)&a3 + 1) * a1[3]) + (float)(*(float *)&a3 * *a1)) + a1[6];
  v4 = (float)((float)(*((float *)&a3 + 1) * a1[5]) + (float)(*(float *)&a3 * a1[2])) + a1[8];
  v5 = (float)((float)(*((float *)&a3 + 1) * a1[4]) + (float)(*(float *)&a3 * a1[1])) + a1[7];
  if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v3 = v3 / v4;
    v5 = v5 / v4;
  }
  *a2 = v3;
  result = a2;
  a2[1] = v5;
  return result;
}
