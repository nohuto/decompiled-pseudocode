/*
 * XREFs of ?Release@CSystemMemoryBitmap@@WEA@EAAKXZ @ 0x1800F4E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 64));
}
