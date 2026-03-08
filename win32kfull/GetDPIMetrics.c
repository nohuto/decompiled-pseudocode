/*
 * XREFs of GetDPIMetrics @ 0x1C009FD5C
 * Callers:
 *     GetWindowNCMetrics @ 0x1C00A40A8 (GetWindowNCMetrics.c)
 *     MNSetupAnimationDC @ 0x1C00C1D98 (MNSetupAnimationDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     MNAllocMenuState @ 0x1C0201C50 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0217EE8 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236ABC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C023756C (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C023AF44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C00A11BC (GetDPIMETRICSForDpi.c)
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
