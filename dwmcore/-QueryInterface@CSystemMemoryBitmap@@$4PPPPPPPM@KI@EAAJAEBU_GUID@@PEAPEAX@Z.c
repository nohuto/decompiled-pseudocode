/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - *(int *)(a1 - 4) - 168), a2, a3);
}
