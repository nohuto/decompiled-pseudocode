/*
 * XREFs of ?QueryInterface@CBitmap@@$4PPPPPPPM@PI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F65B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 248), a2, a3);
}
