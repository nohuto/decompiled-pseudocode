/*
 * XREFs of ?QueryInterface@CHolographicFrameProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 24), a2, a3);
}
