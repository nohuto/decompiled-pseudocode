/*
 * XREFs of ?GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011D470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacyRemotingSwapChain::GetDevice(__int64 a1)
{
  return CLegacyRemotingSwapChain::GetDevice((CLegacyRemotingSwapChain *)(a1 - *(int *)(a1 - 4)));
}
