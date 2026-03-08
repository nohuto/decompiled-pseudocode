/*
 * XREFs of ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C748
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081BBC (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004C70C (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x18004CC04 (-GetMinSupportedMax2DTextureSize@CComposition@@QEBA-BIXZ.c)
 */

bool __fastcall CBackdropVisualImage::RequireClippedBounds(float *a1)
{
  CComposition *v1; // rcx
  float *v2; // r8
  float MinSupportedMax2DTextureSize; // xmm1_4
  bool result; // al

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a1)
        || (MinSupportedMax2DTextureSize = (float)(int)CComposition::GetMinSupportedMax2DTextureSize(v1),
            (float)(v2[2] - *v2) > MinSupportedMax2DTextureSize)
        || (float)(v2[3] - v2[1]) > MinSupportedMax2DTextureSize;
  return result;
}
