/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18011B710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(__int64 a1, struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return CLegacySwapChain::GetMultiplaneOverlayCaps((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432), a2);
}
