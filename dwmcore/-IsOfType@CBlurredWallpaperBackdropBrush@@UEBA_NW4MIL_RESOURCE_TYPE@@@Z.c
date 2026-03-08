/*
 * XREFs of ?IsOfType@CBlurredWallpaperBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F0CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBlurredWallpaperBackdropBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 15) & 0xFFFFFFDD) == 0 && a2 != 49;
}
