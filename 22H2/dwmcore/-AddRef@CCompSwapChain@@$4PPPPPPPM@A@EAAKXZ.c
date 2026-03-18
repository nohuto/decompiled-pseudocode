/*
 * XREFs of ?AddRef@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ @ 0x18011FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompSwapChain::AddRef(__int64 a1)
{
  return CCompSwapChain::AddRef((CCompSwapChain *)(a1 - *(int *)(a1 - 4)));
}
