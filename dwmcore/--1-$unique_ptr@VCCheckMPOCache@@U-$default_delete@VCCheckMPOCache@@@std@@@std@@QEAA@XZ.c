/*
 * XREFs of ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x180116E10
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180131260 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 *     ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680 (-CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180297AA0 (-InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV-$TMilRect@IUMilRec.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180116E44 (--1-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vl.c)
 */

void __fastcall std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(void **a1)
{
  char *v1; // rbx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::~vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>(v1 + 8);
    operator delete(v1);
  }
}
