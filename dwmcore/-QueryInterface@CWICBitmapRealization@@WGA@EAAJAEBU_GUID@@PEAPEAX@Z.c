/*
 * XREFs of ?QueryInterface@CWICBitmapRealization@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011DDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 96), a2, a3);
}
