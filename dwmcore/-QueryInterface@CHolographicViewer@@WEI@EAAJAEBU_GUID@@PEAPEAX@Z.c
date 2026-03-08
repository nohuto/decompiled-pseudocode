/*
 * XREFs of ?QueryInterface@CHolographicViewer@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewer::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 72), a2, a3);
}
