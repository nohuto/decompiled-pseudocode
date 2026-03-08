/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011A730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 152));
}
