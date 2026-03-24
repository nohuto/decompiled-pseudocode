/*
 * XREFs of ?Release@CDDARenderTarget@@WII@EAAKXZ @ 0x1800F56A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 136));
}
