/*
 * XREFs of ?SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_LATENCY_HINT@@@Z @ 0x18011BA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::SetLatencyHint(__int64 a1)
{
  return CLegacySwapChain::SetLatencyHint(a1 - *(int *)(a1 - 4));
}
