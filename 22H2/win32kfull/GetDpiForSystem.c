/*
 * XREFs of GetDpiForSystem @ 0x1C00EDB80
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     PrepareHDCBITSBitmap @ 0x1C0016A4C (PrepareHDCBITSBitmap.c)
 *     xxxCreateWindowSmIcon @ 0x1C001FABC (xxxCreateWindowSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C001FD1C (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxCreateClassSmIcon @ 0x1C0020AF8 (xxxCreateClassSmIcon.c)
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00287B8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0028B20 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserGetIconInfo @ 0x1C002BFF0 (NtUserGetIconInfo.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00B8E9C (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     CalcSBStuff @ 0x1C00C7878 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00C7CF4 (CalcSBStuff2.c)
 *     SetTiledRect @ 0x1C00ECFB8 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C00EF568 (InternalGetRealClientRect.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01B9090 (ExpandedMonitorSpace.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01C7524 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C75EC (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C8170 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C9060 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     NtUserBitBltSysBmp @ 0x1C01CCDC0 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C01D2A60 (NtUserGetOemBitmapSize.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C02160D4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0228A60 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0229B1C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0229DC8 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022B810 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B9A4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0234654 (MNDrawArrow.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C0238860 (xxxMNCompute.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetDpiForSystem(__int64 a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v2 = 511LL;
  v3 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (v2 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL), (*(_DWORD *)(v2 + 64) & 1) == 0))
    || !v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    return *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  }
  return v3;
}
