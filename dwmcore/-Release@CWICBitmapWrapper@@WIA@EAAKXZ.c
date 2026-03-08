/*
 * XREFs of ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x1801192B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - 128));
}
