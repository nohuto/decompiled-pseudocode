/*
 * XREFs of ?GetLastPresentCount@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x1800F6D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetLastPresentCount(__int64 a1)
{
  return CLegacySwapChain::GetLastPresentCount((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)));
}
