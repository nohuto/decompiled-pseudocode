/*
 * XREFs of ?QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 144), a2, a3);
}
