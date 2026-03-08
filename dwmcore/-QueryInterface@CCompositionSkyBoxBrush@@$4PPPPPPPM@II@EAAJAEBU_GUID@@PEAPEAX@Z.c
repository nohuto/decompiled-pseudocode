/*
 * XREFs of ?QueryInterface@CCompositionSkyBoxBrush@@$4PPPPPPPM@II@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801189B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSkyBoxBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 136), a2, a3);
}
