/*
 * XREFs of GetDpiForSystem @ 0x1C006878C
 * Callers:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025E68 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     SetTiledRect @ 0x1C006458C (SetTiledRect.c)
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0065364 (CalcSBStuff2.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00A2E38 (xxxCreateClassSmIcon.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00BA6DC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00BB5A4 (GetWindowBorders.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00C8B70 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     NtUserBitBltSysBmp @ 0x1C014C140 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C014ECB0 (NtUserGetOemBitmapSize.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C0157CE0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D23E4 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01DEC3C (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02400B0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241420 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0242E14 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiForSystem(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rcx
  unsigned __int16 v4; // bx
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v3 = 511LL;
  v4 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    if ( !*(_QWORD *)(v5 + 456) )
      return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v3) + 284);
    v7 = 0LL;
    v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v8 )
      v7 = *v8;
    v3 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v7 + 456) + 8LL) + 64LL);
    if ( (v3 & 1) == 0 )
      return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v3) + 284);
  }
  if ( !v4 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v3) + 284);
  return v4;
}
