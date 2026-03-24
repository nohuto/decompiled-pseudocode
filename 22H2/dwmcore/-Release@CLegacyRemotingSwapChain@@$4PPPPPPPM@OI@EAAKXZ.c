/*
 * XREFs of ?Release@CLegacyRemotingSwapChain@@$4PPPPPPPM@OI@EAAKXZ @ 0x1800F7CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyRemotingSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 232));
}
