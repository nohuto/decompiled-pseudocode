/*
 * XREFs of ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18000E370 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x180019A54 (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 *     ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001BC20 (-GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020AA4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x180033774 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@VDisplayId@@W4Enum@CacheMode@@PEAPEAV1@@Z @ 0x18003466C (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003493C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800A4D24 (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8EE0 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x1800A9030 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800A911C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1800B6A80 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6844 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800EFB74 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800F4C2C (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800F7FC8 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108CA0 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801C88AC (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801C8B50 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801C8C90 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C9EE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801E6860 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801E971C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EBB44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x1801EE000 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1801F01CC (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1801F0450 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCColorTransformRes.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1801F1000 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1801F14D8 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV-$TMilRect_@M.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x1801F1DD0 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1801F22CC (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180214310 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180214448 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1802151A8 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapRealization@@M@Z @ 0x1802263E8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEBAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180226BB0 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEBAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802271E4 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1802274AC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x180246068 (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802469F4 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802470B0 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180247CF0 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180247EC4 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x18024A23C (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180252660 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x18029E818 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029EED0 (-NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x18029F648 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 *     ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A03C0 (-NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACF20 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x1802AD220 (-SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802B254C (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4594 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
