/*
 * XREFs of ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0
 * Callers:
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x18000F130 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180012A10 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180044C68 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18005A02C (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180079180 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180091D54 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B077C (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800B2248 (-CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B24C4 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B3D8C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18012C2FE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D2850 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB45C (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E6D30 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x18026CB38 (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A39C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D9FD8 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedPreserving(CMILMatrix *this)
{
  char v2; // r11

  if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)this)
    || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(this) )
  {
    return 1;
  }
  return v2;
}
