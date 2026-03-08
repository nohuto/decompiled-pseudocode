/*
 * XREFs of ?QueryInterface@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011F970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 200), a2, a3);
}
