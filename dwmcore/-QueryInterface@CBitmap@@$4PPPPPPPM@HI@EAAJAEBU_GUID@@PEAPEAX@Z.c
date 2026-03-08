/*
 * XREFs of ?QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - *(int *)(a1 - 4) - 120), a2, a3);
}
