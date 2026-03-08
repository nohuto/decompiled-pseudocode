/*
 * XREFs of ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x1801190B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - 16));
}
