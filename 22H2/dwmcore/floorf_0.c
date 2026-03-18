/*
 * XREFs of floorf_0 @ 0x18011B8D8
 * Callers:
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800141B0 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?InflateToHalf@@YAMM@Z @ 0x180030350 (-InflateToHalf@@YAMM@Z.c)
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180035DEC (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063690 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A650 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073C30 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x180097FEC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800B43D8 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B4E60 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800E8E80 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F790C (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801D3AE0 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x1801DE0CC (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1801F564C (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F5B54 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F6014 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180218E68 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Floor@CExpressionValueStack@@QEAAJXZ @ 0x18025D65C (-Floor@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x180261924 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18027F9B8 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1802876A0 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1802B6F4C (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BD7E0 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
