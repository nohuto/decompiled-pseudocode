/*
 * XREFs of ?QueryInterface@CBlurredWallpaperBackdropBrush@@$4PPPPPPPM@GA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801189F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBlurredWallpaperBackdropBrush::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 96), a2, a3);
}
