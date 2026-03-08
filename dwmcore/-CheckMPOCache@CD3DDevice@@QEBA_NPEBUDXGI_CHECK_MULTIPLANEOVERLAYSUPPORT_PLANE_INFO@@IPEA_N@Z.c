/*
 * XREFs of ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180131180
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180131260 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 *     ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680 (-CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180297AA0 (-InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV-$TMilRect@IUMilRec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rdi

  v4 = (_QWORD *)*((_QWORD *)this + 181);
  v6 = (_QWORD *)*((_QWORD *)this + 182);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 0;
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, _QWORD, bool *))*v4)(
           *v4,
           a2,
           a3,
           a4) )
    {
      break;
    }
    ++v4;
  }
  return 1;
}
