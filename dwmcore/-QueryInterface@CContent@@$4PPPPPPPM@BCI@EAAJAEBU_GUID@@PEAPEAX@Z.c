/*
 * XREFs of ?QueryInterface@CContent@@$4PPPPPPPM@BCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 296), a2, a3);
}
