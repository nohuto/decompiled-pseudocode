/*
 * XREFs of ?QueryInterface@CVisualBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 120), a2, a3);
}
