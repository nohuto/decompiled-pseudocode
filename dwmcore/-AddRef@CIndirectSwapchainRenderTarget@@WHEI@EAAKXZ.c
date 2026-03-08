/*
 * XREFs of ?AddRef@CIndirectSwapchainRenderTarget@@WHEI@EAAKXZ @ 0x180117E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 1864));
}
