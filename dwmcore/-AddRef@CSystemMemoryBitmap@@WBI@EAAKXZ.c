/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ @ 0x1801190D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - 24));
}
