/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _SetWinEventHook @ 0x1C0022664 (_SetWinEventHook.c)
 *     xxxGetTitleBarInfoEx @ 0x1C002E528 (xxxGetTitleBarInfoEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0032160 (NtUserDeferWindowPosAndBand.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C00327C8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C00332C0 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     _GetWindowPlacement @ 0x1C0040F18 (_GetWindowPlacement.c)
 *     _MonitorFromPoint @ 0x1C0042100 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C0042AAC (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     xxxMenuDraw @ 0x1C0043708 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0047C44 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C0048190 (GetDPIMETRICSForDpi.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BAB0 (TransformMessageBetweenCoordinateSpaces.c)
 *     cjCopyFontDataW @ 0x1C005F020 (cjCopyFontDataW.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C005F4E8 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     NtUserGetScrollBarInfo @ 0x1C0060C30 (NtUserGetScrollBarInfo.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     NtUserSetWindowPos @ 0x1C006A660 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C00720A0 (NtUserInvalidateRect.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0099E84 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0099EC0 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00FB630 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00FB830 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserGetMenuBarInfo @ 0x1C00FBBD0 (NtUserGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C01025D4 (xxxMenuBarCompute.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     BitBltSysBmp @ 0x1C010723C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107390 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C010759C (PrepareHDCBITSBitmap.c)
 *     NtUserMoveWindow @ 0x1C010D590 (NtUserMoveWindow.c)
 *     _GetMessagePos @ 0x1C010FD20 (_GetMessagePos.c)
 *     InternalGetRealClientRect @ 0x1C0111580 (InternalGetRealClientRect.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0111F18 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserGetUpdateRect @ 0x1C0117D60 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C011A428 (xxxSetWindowPlacement.c)
 *     _GetPointerDeviceRects @ 0x1C0122BAC (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0124B20 (NtUserGetWindowMinimizeRect.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124E68 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     NtUserGetComboBoxInfo @ 0x1C0152F60 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C015F800 (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0161850 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0161BE8 (_GetOwnerTransformedMonitorRect.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167BF4 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     _GetMouseMovePointsEx @ 0x1C01D9ECC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0A58 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E431C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5724 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6264 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6A44 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E88C8 (zzzStartSonar.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6974 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01F8D50 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA920 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01FF910 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C02000C0 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0203380 (NtUserSetWindowShowState.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020AB40 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C8A0 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0233BC4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0235768 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0237050 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     _RealChildWindowFromPoint @ 0x1C024932C (_RealChildWindowFromPoint.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C024CD80 (xxxMNInvertItem.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D0A0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 18;
  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v13);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return v2;
  }
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return v2;
  v8 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return v2;
  if ( *(_QWORD *)(v8 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  if ( *(_DWORD *)(v8 + 340) )
  {
    v2 = *(_DWORD *)(v8 + 340);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
  }
  result = v2;
  if ( (*(_DWORD *)(v8 + 328) & 4) != 0 )
  {
    result = v2;
    if ( (v2 & 0xF) == 2 )
    {
      if ( (v2 & 0xF0) == 0x20 )
        v2 |= 0x20000000u;
      return v2;
    }
  }
  return result;
}
