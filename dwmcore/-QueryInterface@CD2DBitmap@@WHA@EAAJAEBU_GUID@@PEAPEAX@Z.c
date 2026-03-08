/*
 * XREFs of ?QueryInterface@CD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 112), a2, a3);
}
