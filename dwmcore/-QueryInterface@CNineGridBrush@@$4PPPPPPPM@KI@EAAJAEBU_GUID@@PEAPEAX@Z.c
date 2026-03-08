/*
 * XREFs of ?QueryInterface@CNineGridBrush@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 168), a2, a3);
}
