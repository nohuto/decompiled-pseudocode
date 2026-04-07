/*
 * XREFs of ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180058190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 80));
}
