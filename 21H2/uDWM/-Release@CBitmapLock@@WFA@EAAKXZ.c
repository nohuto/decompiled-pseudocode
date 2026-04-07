/*
 * XREFs of ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x180058520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 80));
}
