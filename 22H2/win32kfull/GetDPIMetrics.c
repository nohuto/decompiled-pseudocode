/*
 * XREFs of GetDPIMetrics @ 0x1C0041140
 * Callers:
 *     MNSetupAnimationDC @ 0x1C003E6D0 (MNSetupAnimationDC.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 *     MNAllocMenuState @ 0x1C01FF0D0 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0215328 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C02160D4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C0234404 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C0234904 (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0041198 (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 CurrentProcessWin32Process; // rax

  v1 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( !v1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(511LL);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v1 = *(_WORD *)(CurrentProcessWin32Process + 284);
  }
  return GetDPIMETRICSForDpi(v1);
}
