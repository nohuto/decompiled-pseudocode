/*
 * XREFs of ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180037C60
 * Callers:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

struct D2D_VECTOR_2F __fastcall Matrix3x3::Get2DScaleDimensions(Matrix3x3 *this, struct D2D_VECTOR_2F a2)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  struct D2D_VECTOR_2F result; // rax

  v4 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v5 = sqrtf_0((float)(*((float *)this + 3) * *((float *)this + 3)) + (float)(*((float *)this + 4) * *((float *)this + 4)));
  result = a2;
  **(float **)&a2 = v4;
  *(float *)(*(_QWORD *)&a2 + 4LL) = v5;
  return result;
}
