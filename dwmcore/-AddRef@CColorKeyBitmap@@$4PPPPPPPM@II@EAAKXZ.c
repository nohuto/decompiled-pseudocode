/*
 * XREFs of ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x18011FD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - *(int *)(a1 - 4) - 136));
}
