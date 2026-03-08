/*
 * XREFs of ?QueryInterface@CWICBitmapRealization@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 120), a2, a3);
}
