/*
 * XREFs of ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x180056F8C
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002A1D4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800443C0 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180044708 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180056D0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 */

HWND __fastcall CWindowData::GetWindowTabOwner(CWindowData *this)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
    return (HWND)*((_QWORD *)this + 95);
  else
    return 0LL;
}
