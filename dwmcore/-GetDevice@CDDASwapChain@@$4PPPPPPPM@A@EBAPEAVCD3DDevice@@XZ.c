/*
 * XREFs of ?GetDevice@CDDASwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDDASwapChain::GetDevice(__int64 a1)
{
  return CDDASwapChain::GetDevice((CDDASwapChain *)(a1 - *(int *)(a1 - 4)));
}
