/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _SetWinEventHook @ 0x1C00225C4 (_SetWinEventHook.c)
 *     xxxGetTitleBarInfoEx @ 0x1C002E488 (xxxGetTitleBarInfoEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00320C0 (NtUserDeferWindowPosAndBand.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0032728 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0033220 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     _GetWindowPlacement @ 0x1C0040E78 (_GetWindowPlacement.c)
 *     _MonitorFromPoint @ 0x1C0042060 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C0042A0C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     GetDPIMETRICSForDpi @ 0x1C00480F0 (GetDPIMETRICSForDpi.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BA10 (TransformMessageBetweenCoordinateSpaces.c)
 *     cjCopyFontDataW @ 0x1C005EF80 (cjCopyFontDataW.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C005F448 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     NtUserGetScrollBarInfo @ 0x1C0060B90 (NtUserGetScrollBarInfo.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     NtUserSetWindowPos @ 0x1C006A5C0 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C0072000 (NtUserInvalidateRect.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0099DF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0099E30 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00FB2E0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00FB4E0 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserGetMenuBarInfo @ 0x1C00FB880 (NtUserGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C0102284 (xxxMenuBarCompute.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C010316C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     BitBltSysBmp @ 0x1C0106EBC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107010 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C010721C (PrepareHDCBITSBitmap.c)
 *     NtUserMoveWindow @ 0x1C010D210 (NtUserMoveWindow.c)
 *     _GetMessagePos @ 0x1C010F9A0 (_GetMessagePos.c)
 *     InternalGetRealClientRect @ 0x1C0111200 (InternalGetRealClientRect.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0111B98 (IsChildWindowDpiIsolationEnabled.c)
 *     NtUserGetUpdateRect @ 0x1C01179E0 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C011A0A8 (xxxSetWindowPlacement.c)
 *     _GetPointerDeviceRects @ 0x1C012282C (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0122924 (GetScreenRect.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01247A0 (NtUserGetWindowMinimizeRect.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124AE8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     NtUserGetComboBoxInfo @ 0x1C01529A0 (NtUserGetComboBoxInfo.c)
 *     _ChildWindowFromPointEx @ 0x1C015F050 (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0161080 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0161418 (_GetOwnerTransformedMonitorRect.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167424 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     _GetMouseMovePointsEx @ 0x1C01D990C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0498 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E3D5C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5164 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E5CA4 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6484 (xxxCallJournalPlaybackHook.c)
 *     zzzStartSonar @ 0x1C01E8308 (zzzStartSonar.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F63B4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01F8790 (NtUserGetAltTabInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA360 (NtUserGetMenuItemRect.c)
 *     NtUserMenuItemFromPoint @ 0x1C01FF350 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01FFB00 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0202DC0 (NtUserSetWindowShowState.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A580 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C2E0 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020C900 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020D970 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0233604 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02351A8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     _EnablePerMonitorMenuScaling @ 0x1C0236A90 (_EnablePerMonitorMenuScaling.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     _RealChildWindowFromPoint @ 0x1C0248D6C (_RealChildWindowFromPoint.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D000 (CaptureAndValidateUserModeDpiAwarenessContext.c)
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
