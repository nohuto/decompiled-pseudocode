/*
 * XREFs of ?CheckMultiplaneOverlaySupport@COverlayContext@@AEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801D9AC0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x1801D9464 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::CheckMultiplaneOverlaySupport(
        COverlayContext *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v7; // rax

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  return (*(__int64 (__fastcall **)(__int64, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, _QWORD, bool *))(*(_QWORD *)v7 + 144LL))(
           v7,
           a2,
           a3,
           a4);
}
