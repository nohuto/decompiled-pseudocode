/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180285660
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680 (-CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLA.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        __int64 a3,
        bool *a4)
{
  return CDDisplaySwapChain::CheckMultiplaneOverlaySupportInternal(this, a2, a3, 1LL, a4);
}
