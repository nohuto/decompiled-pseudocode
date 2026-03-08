/*
 * XREFs of ?GetDevice@CDDisplaySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011AA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDDisplaySwapChain::GetDevice(__int64 a1)
{
  return CDDisplaySwapChain::GetDevice((CDDisplaySwapChain *)(a1 - *(int *)(a1 - 4)));
}
