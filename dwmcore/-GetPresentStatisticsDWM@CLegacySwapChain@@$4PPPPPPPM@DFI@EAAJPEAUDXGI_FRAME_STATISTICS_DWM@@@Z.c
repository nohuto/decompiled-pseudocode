/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18011CED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(__int64 a1, struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  return CLegacySwapChain::GetPresentStatisticsDWM((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 856), a2);
}
