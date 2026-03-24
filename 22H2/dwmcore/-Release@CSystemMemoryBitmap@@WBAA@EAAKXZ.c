/*
 * XREFs of ?Release@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x1800F5560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 256));
}
