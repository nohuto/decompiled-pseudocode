/*
 * XREFs of ?QueryInterface@CSectionBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011DCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 336), a2, a3);
}
