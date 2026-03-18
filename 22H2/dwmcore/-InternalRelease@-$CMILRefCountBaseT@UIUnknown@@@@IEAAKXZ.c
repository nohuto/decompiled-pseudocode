/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F334
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033E90 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034B30 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034E64 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800352EC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800355FC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003CABC (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18003CBC8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DB54 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800764A4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C678 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180090B90 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5970 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800A89D8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A8B2C (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1800A9998 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AEC50 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7F08 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800BA514 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA814 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C8978 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D1B1C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ED6AC (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x1800EDC90 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ??4?$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800EDD78 (--4-$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondary.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800F570C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800F9A30 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180135B96 (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??1?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B3C98 (--1-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B4C44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801C017C (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std.c)
 *     ??_G?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1801C2A38 (--_G-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801FB838 (--1-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022CBB8 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022CF20 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022D800 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180299418 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ?BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z @ 0x18029A980 (-BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x18029B890 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z @ 0x18029BB00 (-SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x18029FC70 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A4664 (--1CHolographicManager@@EEAA@XZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A5498 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802ACA2C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1802AF1A0 (-Release@CHolographicFrameProcessor@@UEAAKXZ.c)
 *     ?Release@CHolographicExclusivePresentData@@UEAAKXZ @ 0x1802AF460 (-Release@CHolographicExclusivePresentData@@UEAAKXZ.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802B01E0 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802B0478 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802B0D04 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B3224 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802B3A30 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B3C3C (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B3D4C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<IUnknown>::InternalRelease(volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = a1 + 2;
  v3 = _InterlockedDecrement(a1 + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 2));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 32LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v5 + 24))(a1, 1LL);
    }
  }
  return v3;
}
