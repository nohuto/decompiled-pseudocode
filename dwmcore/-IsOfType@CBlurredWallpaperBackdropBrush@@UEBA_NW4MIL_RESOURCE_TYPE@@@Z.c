bool __fastcall CBlurredWallpaperBackdropBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 15) & 0xFFFFFFDD) == 0 && a2 != 49;
}
