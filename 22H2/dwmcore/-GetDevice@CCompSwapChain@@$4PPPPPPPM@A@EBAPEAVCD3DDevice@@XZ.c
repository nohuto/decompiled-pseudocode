/*
 * XREFs of ?GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x180120000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCompSwapChain::GetDevice(__int64 a1)
{
  return CCompSwapChain::GetDevice((CCompSwapChain *)(a1 - *(int *)(a1 - 4)));
}
