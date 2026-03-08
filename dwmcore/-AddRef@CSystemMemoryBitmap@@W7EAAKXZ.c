/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@W7EAAKXZ @ 0x180119090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CColorKeyBitmap::AddRef((CColorKeyBitmap *)(a1 - 8));
}
