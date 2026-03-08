/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x18011FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 144));
}
