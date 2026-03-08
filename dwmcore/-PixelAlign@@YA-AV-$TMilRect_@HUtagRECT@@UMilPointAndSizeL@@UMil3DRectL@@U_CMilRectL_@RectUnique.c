/*
 * XREFs of ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180045EB4 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x180046380 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C659C (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D9BD0 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800EEFA8 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETD.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6850 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6A08 (-ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180109ACC (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18012C2FE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801CA040 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_6991071fcff892ffb13e08e0d7abc234___ @ 0x1801CFB08 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E46D4 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E5208 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801E7B1C (-GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7D44 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F635C (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1802274AC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802B2014 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B56B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800140C0 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180074400 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

int *__fastcall PixelAlign(int *a1, float *a2)
{
  float v2; // xmm3_4
  int v5; // eax
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm3_4
  int v11; // eax
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  __m128 v17; // rt1
  float v18; // [rsp+40h] [rbp+8h]
  float v19; // [rsp+40h] [rbp+8h]
  float v20; // [rsp+40h] [rbp+8h]
  float v21; // [rsp+40h] [rbp+8h]

  v2 = *a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v13 = 0LL;
    v13.m128_f32[0] = (float)(int)v2 - v2;
    v5 = (int)v2 - _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v18 = v2 + 6291456.25;
    v5 = (int)(LODWORD(v18) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - (float)v5) & _xmm) > 0.00390625 )
    v5 = CFloatFPU::FloorSat(v2);
  v6 = a2[1];
  *a1 = v5;
  if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v14 = 0LL;
    v14.m128_f32[0] = (float)(int)v6 - v6;
    v7 = (int)v6 - _mm_cmple_ss(v14, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v19 = v6 + 6291456.25;
    v7 = (int)(LODWORD(v19) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - (float)v7) & _xmm) > 0.00390625 )
    v7 = CFloatFPU::FloorSat(v6);
  v8 = a2[2];
  a1[1] = v7;
  if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v15 = 0LL;
    v15.m128_f32[0] = (float)(int)v8 - v8;
    v9 = (int)v8 - _mm_cmple_ss(v15, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v20 = v8 + 6291456.25;
    v9 = (int)(LODWORD(v20) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - (float)v9) & _xmm) > 0.00390625 )
    v9 = CFloatFPU::CeilingSat(v8);
  v10 = a2[3];
  a1[2] = v9;
  if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v16 = 0LL;
    v16.m128_f32[0] = (float)(int)v10 - v10;
    v17.m128_f32[0] = FLOAT_N0_5;
    v11 = (int)v10 - _mm_cmple_ss(v16, v17).m128_u32[0];
  }
  else
  {
    v21 = v10 + 6291456.25;
    v11 = (int)(LODWORD(v21) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)v11) & _xmm) > 0.00390625 )
    v11 = CFloatFPU::CeilingSat(v10);
  a1[3] = v11;
  return a1;
}
