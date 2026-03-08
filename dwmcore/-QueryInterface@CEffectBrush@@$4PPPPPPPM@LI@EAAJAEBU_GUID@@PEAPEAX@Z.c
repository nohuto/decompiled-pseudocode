/*
 * XREFs of ?QueryInterface@CEffectBrush@@$4PPPPPPPM@LI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 184), a2, a3);
}
