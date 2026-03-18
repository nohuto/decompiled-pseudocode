/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800118C8
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000E21C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18000E8C0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x1800118F4 (-GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this)
{
  unsigned int MaxTextureSize; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  MaxTextureSize = CDrawingContext::GetMaxTextureSize(this, 0);
  return v3 <= MaxTextureSize && v2 <= MaxTextureSize;
}
