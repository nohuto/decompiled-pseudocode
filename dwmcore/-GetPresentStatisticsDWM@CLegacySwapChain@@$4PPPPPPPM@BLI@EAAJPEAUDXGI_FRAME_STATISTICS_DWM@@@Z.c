/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18011C810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(__int64 a1, struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  return CLegacySwapChain::GetPresentStatisticsDWM((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2);
}
