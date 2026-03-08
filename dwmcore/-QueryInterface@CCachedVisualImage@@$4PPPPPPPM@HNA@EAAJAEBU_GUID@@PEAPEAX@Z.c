/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@$4PPPPPPPM@HNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 2000), a2, a3);
}
