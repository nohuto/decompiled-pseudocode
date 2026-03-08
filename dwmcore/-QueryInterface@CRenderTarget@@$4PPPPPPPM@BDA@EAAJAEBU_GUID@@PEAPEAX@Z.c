/*
 * XREFs of ?QueryInterface@CRenderTarget@@$4PPPPPPPM@BDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801195F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 304), a2, a3);
}
