/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - *(int *)(a1 - 4) - 152), a2, a3);
}
