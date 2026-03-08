/*
 * XREFs of ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800F42C0
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A4C4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 */

char __fastcall CBackdropVisualImage::CanUseAsEffectInput(CBackdropVisualImage *this)
{
  bool IsValid; // al
  __int64 v2; // rcx
  char v3; // dl

  IsValid = CBackdropVisualImage::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return *(_BYTE *)(v2 + 1952) != 0;
  return v3;
}
