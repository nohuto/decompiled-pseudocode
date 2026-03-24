/*
 * XREFs of ?Release@CDDASwapChain@@$4PPPPPPPM@KI@EAAKXZ @ 0x1800F5E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDASwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 168));
}
