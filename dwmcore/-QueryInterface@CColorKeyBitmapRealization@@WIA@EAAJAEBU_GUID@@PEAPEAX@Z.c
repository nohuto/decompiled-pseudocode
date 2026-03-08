/*
 * XREFs of ?QueryInterface@CColorKeyBitmapRealization@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 128), a2, a3);
}
