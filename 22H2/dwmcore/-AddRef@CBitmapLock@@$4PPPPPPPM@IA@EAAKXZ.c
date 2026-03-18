/*
 * XREFs of ?AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x18011E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 128));
}
