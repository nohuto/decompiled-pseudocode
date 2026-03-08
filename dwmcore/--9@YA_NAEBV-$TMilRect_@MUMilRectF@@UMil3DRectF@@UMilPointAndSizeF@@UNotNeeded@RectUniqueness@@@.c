/*
 * XREFs of ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D3A9C
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180040AB8 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180052DC0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?SetViewbox@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUMilRectF@@@Z @ 0x1800D29D4 (-SetViewbox@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUMi.c)
 *     ?SetViewport@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUMilRectF@@@Z @ 0x1800D2A58 (-SetViewport@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUM.c)
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x1800D2ADC (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SET.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D32C4 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021B06C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
