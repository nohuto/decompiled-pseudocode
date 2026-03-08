/*
 * XREFs of ?GetMultiplaneOverlayCaps@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18011CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetMultiplaneOverlayCaps(__int64 a1, struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return CConversionSwapChain::GetMultiplaneOverlayCaps((CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 856), a2);
}
