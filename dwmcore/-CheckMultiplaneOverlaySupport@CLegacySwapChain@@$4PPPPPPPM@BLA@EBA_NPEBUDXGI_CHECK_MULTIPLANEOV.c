/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18011B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        __int64 a1,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  return CLegacySwapChain::CheckMultiplaneOverlaySupport((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432), a2, a3, a4);
}
