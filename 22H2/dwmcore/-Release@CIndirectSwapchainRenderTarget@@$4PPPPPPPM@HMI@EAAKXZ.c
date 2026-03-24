/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@HMI@EAAKXZ @ 0x1800F4E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 1992));
}
