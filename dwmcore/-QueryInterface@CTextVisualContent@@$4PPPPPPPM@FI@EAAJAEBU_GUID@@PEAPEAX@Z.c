/*
 * XREFs of ?QueryInterface@CTextVisualContent@@$4PPPPPPPM@FI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801189D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 88), a2, a3);
}
