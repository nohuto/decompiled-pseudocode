/*
 * XREFs of ?Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z @ 0x1800B3C6C
 * Callers:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B3950 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Get2DPointUsing2DInverse(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm5_4
  bool result; // al
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4

  v3 = *((float *)this + 3);
  result = 0;
  v5 = (float)(a2->x * *((float *)this + 7)) - *((float *)this + 4);
  v6 = (float)(*((float *)this + 7) * a2->y) - *((float *)this + 5);
  v7 = (float)(a2->x * v3) - *(float *)this;
  v8 = (float)(v3 * a2->y) - *((float *)this + 1);
  if ( (float)(v7 * v6) != (float)(v5 * v8) )
  {
    v9 = (float)(v7 * v6) - (float)(v5 * v8);
    result = 1;
    v10 = (float)(*((float *)this + 15) * a2->x) - *((float *)this + 12);
    v11 = (float)(*((float *)this + 15) * a2->y) - *((float *)this + 13);
    a3->y = (float)((float)(v10 * v8) - (float)(v11 * v7)) / v9;
    a3->x = (float)((float)(v11 * v5) - (float)(v10 * v6)) / v9;
  }
  return result;
}
