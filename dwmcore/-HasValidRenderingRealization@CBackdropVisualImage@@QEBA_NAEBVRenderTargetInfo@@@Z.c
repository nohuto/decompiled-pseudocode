/*
 * XREFs of ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004B010
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004D740 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 */

bool __fastcall CBackdropVisualImage::HasValidRenderingRealization(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  const struct RenderTargetInfo *v2; // rdx
  CBackdropVisualImage *v3; // rcx

  return CBackdropVisualImage::IsValid(this) && !CBackdropVisualImage::RequiresRendering(v3, v2);
}
