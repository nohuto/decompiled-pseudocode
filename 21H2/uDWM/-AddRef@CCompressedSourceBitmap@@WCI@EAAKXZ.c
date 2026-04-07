/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x1800582C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 40));
}
