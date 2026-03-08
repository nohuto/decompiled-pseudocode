/*
 * XREFs of ?QueryInterface@CRadialGradientBrush@@$4PPPPPPPM@BBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRadialGradientBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 272), a2, a3);
}
