/*
 * XREFs of ?QueryInterface@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011FCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 208), a2, a3);
}
