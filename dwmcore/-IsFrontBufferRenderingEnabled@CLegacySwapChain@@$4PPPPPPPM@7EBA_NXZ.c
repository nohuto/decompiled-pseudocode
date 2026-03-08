/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x18011C910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(__int64 a1)
{
  return CLegacySwapChain::IsFrontBufferRenderingEnabled((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 8));
}
