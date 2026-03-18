/*
 * XREFs of GetDPIMetrics @ 0x1C00BE974
 * Callers:
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     MNSetupAnimationDC @ 0x1C00D4628 (MNSetupAnimationDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     MNAllocMenuState @ 0x1C021B978 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022EBFC (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( !v2 )
    v2 = *(_WORD *)(PsGetCurrentProcessWin32Process(511LL) + 284);
  return GetDPIMETRICSForDpi(v2);
}
