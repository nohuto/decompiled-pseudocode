/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180118930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(__int64 a1, bool a2)
{
  return CIndirectSwapchainRenderTarget::Present((CIndirectSwapchainRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
