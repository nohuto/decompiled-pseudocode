/*
 * XREFs of ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764
 * Callers:
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180039564 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004B010 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004D740 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800F42C0 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImage::IsValid(CBackdropVisualImage *this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm0_4
  bool result; // al

  result = *((_QWORD *)this + 18)
        && (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
        && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0
        && (v1 = *((float *)this + 462), v2 = *((float *)this + 464), v2 >= v1)
        && (v3 = *((float *)this + 465), v3 >= *((float *)this + 463))
        && (float)(v2 - v1) >= 1.0
        && (float)(v3 - *((float *)this + 463)) >= 1.0
        && *((double *)this + 15) > 0.5
        && *((double *)this + 16) > 0.5;
  return result;
}
