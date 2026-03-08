/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@HLI@EAAKXZ @ 0x180118DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 1976));
}
