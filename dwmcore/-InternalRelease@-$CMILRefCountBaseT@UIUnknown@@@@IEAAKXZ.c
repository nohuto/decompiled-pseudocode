/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034D74 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800351FC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003550C (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C9CC (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18003CAD8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DA64 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x1800909C0 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800A82B8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A840C (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1800A9278 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800BA034 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA334 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C7F18 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECA7C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x1800ED060 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ??4?$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ED148 (--4-$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondary.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800F4ACC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800F8DF0 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x1801319E6 (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??1?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B0A98 (--1-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801BCF4C (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std.c)
 *     ??_G?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1801BF808 (--_G-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F84B8 (--1-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022957C (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1802298E0 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022A1C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180295C98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ?BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z @ 0x180297200 (-BoostFrameRate@CLegacySwapChain@@UEAA_N_N@Z.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x180298110 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z @ 0x180298380 (-SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x18029C4F0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A0EE4 (--1CHolographicManager@@EEAA@XZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A1D18 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802A92AC (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1802ABA20 (-Release@CHolographicFrameProcessor@@UEAAKXZ.c)
 *     ?Release@CHolographicExclusivePresentData@@UEAAKXZ @ 0x1802ABCE0 (-Release@CHolographicExclusivePresentData@@UEAAKXZ.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802ACA60 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802ACCF8 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AD584 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802AFAA4 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802B02B0 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B04BC (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B05CC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
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
