/*
 * XREFs of GetDPIMetrics @ 0x1C00E0A9C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00E0960 (GetWindowNCMetrics.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetNCFonts @ 0x1C00E2938 (xxxSetNCFonts.c)
 *     MNSetupAnimationDC @ 0x1C00E5F18 (MNSetupAnimationDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     MNAllocMenuState @ 0x1C0221278 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0234F80 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA24 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C024BE2C (MNAnimate.c)
 *     MNEraseBackground @ 0x1C024C33C (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetProcessDpiMetrics @ 0x1C00E0FF8 (GetProcessDpiMetrics.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return GetProcessDpiMetrics();
  else
    return Get96DpiMetrics();
}
