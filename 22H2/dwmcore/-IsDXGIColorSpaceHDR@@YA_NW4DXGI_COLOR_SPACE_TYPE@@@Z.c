/*
 * XREFs of ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091420
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020B94 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B5D8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1800913BC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800FAF04 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180103578 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801304AE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801D6A7C (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E90F4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801ECA1C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EE18C (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EEE44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1801F34CC (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802AAC50 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180082964 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall IsDXGIColorSpaceHDR(int a1)
{
  char v1; // al
  char v2; // cl

  if ( a1 == 1 )
    return 1;
  v1 = IsDXGIColorSpaceRec2020(a1);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
