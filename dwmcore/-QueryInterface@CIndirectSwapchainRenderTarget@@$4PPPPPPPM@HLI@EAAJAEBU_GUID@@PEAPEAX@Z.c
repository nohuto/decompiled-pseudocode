/*
 * XREFs of ?QueryInterface@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@HLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 1976), a2, a3);
}
