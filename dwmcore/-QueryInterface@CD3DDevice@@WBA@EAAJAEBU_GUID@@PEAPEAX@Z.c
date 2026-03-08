/*
 * XREFs of ?QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 16), a2, a3);
}
