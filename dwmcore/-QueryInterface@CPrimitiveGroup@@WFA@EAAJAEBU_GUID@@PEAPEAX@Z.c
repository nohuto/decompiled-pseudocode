/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 80), a2, a3);
}
