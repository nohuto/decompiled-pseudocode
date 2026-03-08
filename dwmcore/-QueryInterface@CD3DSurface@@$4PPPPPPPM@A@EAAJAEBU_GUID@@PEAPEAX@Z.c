/*
 * XREFs of ?QueryInterface@CD3DSurface@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CD3DSurface::QueryInterface((CD3DSurface *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
