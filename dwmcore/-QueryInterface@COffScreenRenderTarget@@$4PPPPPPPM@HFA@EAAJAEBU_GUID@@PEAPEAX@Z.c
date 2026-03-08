/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@$4PPPPPPPM@HFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801194F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 1872), a2, a3);
}
