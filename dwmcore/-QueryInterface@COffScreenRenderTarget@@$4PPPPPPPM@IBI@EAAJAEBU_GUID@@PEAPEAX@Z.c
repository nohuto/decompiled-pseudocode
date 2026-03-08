/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@$4PPPPPPPM@IBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 2072), a2, a3);
}
