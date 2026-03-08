/*
 * XREFs of ?AddRef@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@HLI@EAAKXZ @ 0x180117E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 1976));
}
