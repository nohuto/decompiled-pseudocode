bool __fastcall AreEquivalentDevModes(const struct _devicemodeW *const a1, const struct _devicemodeW *const a2)
{
  return a1->dmPelsWidth == a2->dmPelsWidth
      && a1->dmPelsHeight == a2->dmPelsHeight
      && a1->dmBitsPerPel == a2->dmBitsPerPel
      && a1->dmDisplayFrequency == a2->dmDisplayFrequency
      && a1->dmDisplayFixedOutput == a2->dmDisplayFixedOutput
      && a1->dmDisplayOrientation == a2->dmDisplayOrientation
      && a1->dmDisplayFlags == a2->dmDisplayFlags;
}
