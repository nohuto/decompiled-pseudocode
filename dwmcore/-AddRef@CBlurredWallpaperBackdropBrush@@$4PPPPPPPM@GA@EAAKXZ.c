/*
 * XREFs of ?AddRef@CBlurredWallpaperBackdropBrush@@$4PPPPPPPM@GA@EAAKXZ @ 0x180117D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBlurredWallpaperBackdropBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 96));
}
