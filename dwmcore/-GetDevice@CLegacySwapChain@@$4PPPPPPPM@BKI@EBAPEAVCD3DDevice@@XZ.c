/*
 * XREFs of ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ @ 0x18011CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(__int64 a1)
{
  return CLegacySwapChain::GetDevice((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424));
}
