/*
 * XREFs of GetDpiForSystem @ 0x1C0045E5C
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0013CD4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C0021910 (GetWindowBorders.c)
 *     _DrawIconEx @ 0x1C003B618 (_DrawIconEx.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C003B9FC (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C003BA40 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     SetTiledRect @ 0x1C0045B74 (SetTiledRect.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     InternalGetRealClientRect @ 0x1C00A2710 (InternalGetRealClientRect.c)
 *     GetWindowNCMetrics @ 0x1C00A40A8 (GetWindowNCMetrics.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     CalcSBStuff @ 0x1C00D9FC8 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00DA144 (CalcSBStuff2.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00F0E4C (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateClassSmIcon @ 0x1C0107B5C (xxxCreateClassSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0109E10 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxCreateWindowSmIcon @ 0x1C010A268 (xxxCreateWindowSmIcon.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01BA230 (ExpandedMonitorSpace.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C1D64 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01C8684 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C874C (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C92D0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CA160 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     NtUserBitBltSysBmp @ 0x1C01CDE10 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C01D3AB0 (NtUserGetOemBitmapSize.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02270EC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022B780 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022C83C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C022CAE8 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E530 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E6C4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0236044 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C02372BC (MNDrawArrow.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C023AF44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C023B4C8 (xxxMNCompute.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
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
