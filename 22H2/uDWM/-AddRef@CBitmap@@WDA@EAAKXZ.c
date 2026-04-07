/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180057FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 48));
}
