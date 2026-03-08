/*
 * XREFs of ?QueryInterface@CD2DResource@@$4PPPPPPPM@GI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DResource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 104), a2, a3);
}
