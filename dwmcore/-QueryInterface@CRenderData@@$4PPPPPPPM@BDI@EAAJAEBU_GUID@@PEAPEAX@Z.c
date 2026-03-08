/*
 * XREFs of ?QueryInterface@CRenderData@@$4PPPPPPPM@BDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 312), a2, a3);
}
