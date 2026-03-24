/*
 * XREFs of GetDPIMetrics @ 0x1C00E0DEC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00E0CB0 (GetWindowNCMetrics.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetNCFonts @ 0x1C00E2C88 (xxxSetNCFonts.c)
 *     MNSetupAnimationDC @ 0x1C00E6268 (MNSetupAnimationDC.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     MNAllocMenuState @ 0x1C0221838 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235540 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BFE4 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C024C3EC (MNAnimate.c)
 *     MNEraseBackground @ 0x1C024C8FC (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E8C0 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetProcessDpiMetrics @ 0x1C00E1348 (GetProcessDpiMetrics.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return GetProcessDpiMetrics();
  else
    return Get96DpiMetrics();
}
