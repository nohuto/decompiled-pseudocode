/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801191D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - 16), a2, a3);
}
