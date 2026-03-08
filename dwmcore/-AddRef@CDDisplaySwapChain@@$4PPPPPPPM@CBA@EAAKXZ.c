/*
 * XREFs of ?AddRef@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 528));
}
