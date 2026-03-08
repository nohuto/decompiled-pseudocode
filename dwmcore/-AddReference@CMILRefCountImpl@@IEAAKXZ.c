/*
 * XREFs of ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984
 * Callers:
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180010F90 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180011074 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1TessellationSink@@@@UEAAKXZ @ 0x180017B10 (-Release@-$CMILCOMBaseT@UID2D1TessellationSink@@@@UEAAKXZ.c)
 *     ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x18001D230 (-AddRef@CProjectedShadowReceiver@@UEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@@@UEAAKXZ @ 0x18001F5B0 (-Release@-$CMILCOMBaseT@VICompositionSurfaceStatistics@@@@UEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180020340 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180020FD0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180024894 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180026D7C (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x180027590 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180030350 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180032AC0 (-GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034B20 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003550C (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1800387F8 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003BDC0 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18003CAD8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003D4AC (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18003DFE0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C79C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800524A0 (-QueryInterface@CDxHandleBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x180085A34 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x18009C188 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdropVisualImage@@@Z @ 0x1800A5C54 (--4-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdrop.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800A635C (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800A64F8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A840C (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1800A9278 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1800AA9C4 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x1800AAA30 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1800AAD08 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800ABBE8 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x1800ABF0C (--0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z.c)
 *     ??0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x1800ABF98 (--0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800B8080 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA334 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800C6CB0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800CB5F8 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800CB7BC (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800CD2B0 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800CD348 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1800CE5D0 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800CF778 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800D0218 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D18B4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1800D2250 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800D9DD0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800DE0B0 (-Release@CLegacyRenderTarget@@UEAAKXZ.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800E0CF8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?Release@CDrawListEntryBatch@@UEAAKXZ @ 0x1800E1C60 (-Release@CDrawListEntryBatch@@UEAAKXZ.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E2C04 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??0?$com_ptr_t@VCCpuClipAntialiasDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x1800E4524 (--0-$com_ptr_t@VCCpuClipAntialiasDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuC.c)
 *     ?Release@CAtlasBitmapResource@@UEAAKXZ @ 0x1800E6BB4 (-Release@CAtlasBitmapResource@@UEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAKXZ @ 0x1800E7970 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAKXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800EB3D8 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800EC864 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECCC8 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ??4?$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ED148 (--4-$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondary.c)
 *     ??0?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBackdropVisualImage@@@Z @ 0x1800ED728 (--0-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBackdropVisual.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F0E64 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800F195C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800F28AC (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@@@UEAAKXZ @ 0x1800F2AA0 (-Release@-$CMILRefCountBaseT@UIInteractionContextWrapper@@@@UEAAKXZ.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800F5524 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x1800F5910 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ @ 0x1800F59D0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800F6D28 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F70B0 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ @ 0x1800F95A8 (-AddRef@-$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC2A4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800FC314 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC400 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?AddRef@CComposition@@UEAAKXZ @ 0x1800FCA40 (-AddRef@CComposition@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FD62C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800FFB4C (-Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHA.c)
 *     ?AddRef@CColorKeyBitmap@@UEAAKXZ @ 0x1800FFBC0 (-AddRef@CColorKeyBitmap@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x180100100 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18010165C (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UIMessageConversationHost@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101F60 (-QueryInterface@-$CMILCOMBaseT@UIMessageConversationHost@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x180102210 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBaseWeakRef@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102AAC (-InternalQueryInterface@CMILCOMBaseWeakRef@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIUnknownWeakRefSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102AEC (-InternalQueryInterface@-$CMILCOMBaseT@VIUnknownWeakRefSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ @ 0x180102C6C (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@@@IEAAKXZ.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108E20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     ?Release@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@UEAAKXZ @ 0x18010A8F8 (-Release@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@UEAAKXZ.c)
 *     ?AddRef@CManipulationContext@@UEAAKXZ @ 0x180129640 (-AddRef@CManipulationContext@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x1801319E6 (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionResource@@@@UEAAKXZ @ 0x1801A1F70 (-Release@-$CMILRefCountBaseT@UIInteractionResource@@@@UEAAKXZ.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AF800 (-QueryInterface@-$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0090 (-QueryInterface@-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@@@UEAAKXZ @ 0x1801B0120 (-Release@-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z @ 0x1801B1304 (--4-$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Release@?$CMILCOMBaseT@UIMessageConversationHost@@@@UEAAKXZ @ 0x1801B1DD0 (-Release@-$CMILCOMBaseT@UIMessageConversationHost@@@@UEAAKXZ.c)
 *     ?GetDesktopTree@CLegacyRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801C12D0 (-GetDesktopTree@CLegacyRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ?GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801C1330 (-GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ??4?$com_ptr_t@VCCursorVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorVisual@@@Z @ 0x1801D83FC (--4-$com_ptr_t@VCCursorVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorVisual@@@.c)
 *     ?AddResponseRef@CResponseItem@@UEAAXXZ @ 0x1801DCC40 (-AddResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1801F69DC (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801F85EC (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 *     ?AddRef@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801FA820 (-AddRef@CSpectreCallbackRenderer@@UEAAKXZ.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1801FA830 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FAEB8 (--$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801FCBC0 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x180201908 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x180207878 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020C988 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18021504C (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18021FCB4 (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEM.c)
 *     ??4?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@Z @ 0x180221D7C (--4-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@.c)
 *     ?InternalRelease@?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1802228EC (-InternalRelease@-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180223760 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@IAEBUTelemetryInfo@CSuperWetInkScribbleBase@@@Z @ 0x180229654 (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z @ 0x18022B2D8 (-ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSect.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIAccelerator@@@@IEAAKXZ @ 0x18022FAC0 (-InternalRelease@-$CMILRefCountBaseT@UIAccelerator@@@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIScalarForce@@@@UEAAKXZ @ 0x18023A410 (-Release@-$CMILRefCountBaseT@UIScalarForce@@@@UEAAKXZ.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18024A310 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z @ 0x18024E474 (-ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSEC.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802518A0 (-Initialize@CTextVisual@@MEAAJXZ.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180256024 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180260E60 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180266F30 (-QueryInterface@-$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapResource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180267A48 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapResource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180269CD0 (-QueryInterface@-$CMILCOMBaseT@VICompositionSurfaceStatistics@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UIDwmCursorController@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180277380 (-QueryInterface@-$CMILCOMBaseT@UIDwmCursorController@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@UIDwmCursorController@@@@UEAAKXZ @ 0x180277410 (-Release@-$CMILCOMBaseT@UIDwmCursorController@@@@UEAAKXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapLock@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18027EBD8 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapLock@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18028280C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180284808 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIDDASwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802848F4 (-InternalQueryInterface@-$CMILCOMBaseT@VIDDASwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@VIUnknownWeakRef@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180288390 (-QueryInterface@-$CMILCOMBaseT@VIUnknownWeakRef@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@@@UEAAKXZ @ 0x180288430 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@@@UEAAKXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180295C98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ?AddRef@CD3DSurface@@UEAAKXZ @ 0x180298A5C (-AddRef@CD3DSurface@@UEAAKXZ.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180299118 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x180299768 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ??4?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompSwapChain@@@Z @ 0x18029A9A0 (--4-$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompSwapChain@.c)
 *     ?AddRef@CCompSwapChain@@UEAAKXZ @ 0x18029AA8C (-AddRef@CCompSwapChain@@UEAAKXZ.c)
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18029AC58 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VICompositionSwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029B13C (-InternalQueryInterface@-$CMILCOMBaseT@VICompositionSwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CCompSwapChain@@UEAAKXZ @ 0x18029B628 (-Release@CCompSwapChain@@UEAAKXZ.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 *     ??4?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@Z @ 0x18029F960 (--4-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@.c)
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18029FA80 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?Release@?$CMILCOMBaseT@VIDDASwapChain@@@@UEAAKXZ @ 0x1802A0030 (-Release@-$CMILCOMBaseT@VIDDASwapChain@@@@UEAAKXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0320 (-InternalQueryInterface@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802A103C (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802A12CC (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802A1414 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802A1580 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A1D18 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802A1FDC (-GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802A5B70 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802A92AC (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x1802AB580 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802ACCF8 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AD584 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802AFAA4 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VID2DBitmapCacheSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B400C (-InternalQueryInterface@-$CMILCOMBaseT@VID2DBitmapCacheSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B6028 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B68E0 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B8B58 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?AddRef@CMesh2DEffect@@UEAAKXZ @ 0x1802BB480 (-AddRef@CMesh2DEffect@@UEAAKXZ.c)
 *     ?QueryInterface@CMesh2DEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BBC00 (-QueryInterface@CMesh2DEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802BC55C (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountImpl::AddReference(CMILRefCountImpl *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( *(int *)this < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1803392B0,
        word_1803392B0,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v4 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        if ( (char)Response == 105 )
          goto LABEL_27;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_26;
          goto LABEL_24;
        }
LABEL_25:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_26:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        }
        if ( (char)Response == 71 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_26;
LABEL_24:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_26;
          }
          goto LABEL_25;
        }
LABEL_27:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
