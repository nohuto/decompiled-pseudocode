/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180058430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 240));
}
