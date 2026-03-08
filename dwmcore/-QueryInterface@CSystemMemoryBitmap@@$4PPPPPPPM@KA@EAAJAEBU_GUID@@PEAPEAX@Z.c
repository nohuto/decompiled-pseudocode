/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - *(int *)(a1 - 4) - 160), a2, a3);
}
