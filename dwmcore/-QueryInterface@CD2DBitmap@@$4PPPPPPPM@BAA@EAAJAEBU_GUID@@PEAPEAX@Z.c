/*
 * XREFs of ?QueryInterface@CD2DBitmap@@$4PPPPPPPM@BAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 256), a2, a3);
}
