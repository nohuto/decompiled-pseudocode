/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800580F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 240), a2, a3);
}
