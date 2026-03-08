/*
 * XREFs of ?Release@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - *(int *)(a1 - 4) - 152));
}
