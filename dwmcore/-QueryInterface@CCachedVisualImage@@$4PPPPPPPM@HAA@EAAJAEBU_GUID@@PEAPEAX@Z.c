/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@$4PPPPPPPM@HAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 1792), a2, a3);
}
