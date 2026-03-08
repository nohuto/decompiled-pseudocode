/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@$4PPPPPPPM@HII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 1928), a2, a3);
}
