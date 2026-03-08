/*
 * XREFs of ?GetDevice@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDummyRemotingSwapChain::GetDevice(__int64 a1)
{
  return CDummyRemotingSwapChain::GetDevice((CDummyRemotingSwapChain *)(a1 - *(int *)(a1 - 4)));
}
