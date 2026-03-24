/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800F5580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 40));
}
