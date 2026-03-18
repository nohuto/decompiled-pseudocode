/*
 * XREFs of ?AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011E880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 120));
}
