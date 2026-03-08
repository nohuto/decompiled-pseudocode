/*
 * XREFs of ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18011CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatistics(__int64 a1, struct DXGI_FRAME_STATISTICS *a2)
{
  return CLegacySwapChain::GetPresentStatistics((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 856), a2);
}
