/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801191B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - 8), a2, a3);
}
