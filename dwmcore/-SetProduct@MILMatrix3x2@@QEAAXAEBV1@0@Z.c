/*
 * XREFs of ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800B520C
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000EFB4.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x180077420 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800B4190 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::SetProduct(
        MILMatrix3x2 *this,
        const struct MILMatrix3x2 *a2,
        const struct MILMatrix3x2 *a3)
{
  *(float *)this = (float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a2 + 1));
  *((float *)this + 1) = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
  *((float *)this + 2) = (float)(*((float *)a2 + 2) * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a2 + 3));
  *((float *)this + 3) = (float)(*((float *)a2 + 2) * *((float *)a3 + 1))
                       + (float)(*((float *)a3 + 3) * *((float *)a2 + 3));
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 4) * *(float *)a3)
                               + (float)(*((float *)a3 + 2) * *((float *)a2 + 5)))
                       + *((float *)a3 + 4);
  *((float *)this + 5) = (float)((float)(*((float *)a2 + 4) * *((float *)a3 + 1))
                               + (float)(*((float *)a3 + 3) * *((float *)a2 + 5)))
                       + *((float *)a3 + 5);
}
