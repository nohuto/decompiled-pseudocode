/*
 * XREFs of ?SetLatencyHint@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_LATENCY_HINT@@@Z @ 0x18011D1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::SetLatencyHint(__int64 a1)
{
  return CLegacySwapChain::SetLatencyHint(a1 - *(int *)(a1 - 4) - 424);
}
