/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180058180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 72));
}
