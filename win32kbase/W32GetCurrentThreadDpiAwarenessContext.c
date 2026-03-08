/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C000ACB0 (TransformPointBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     NtUserLockCursor @ 0x1C003A670 (NtUserLockCursor.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C003B5D4 (GetCurrentThreadCompositedDpi.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C003B720 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003B920 (LogicalToPhysicalDPIRect.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 *     NtUserGetDpiForMonitor @ 0x1C003DF40 (NtUserGetDpiForMonitor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00A8E10 (PhysicalToLogicalDPIRect.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00BFA60 (NtUserGetProcessDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00C1BB0 (LogicalToPhysicalDPIPoint.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00D83A0 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00F4962 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserClipCursor @ 0x1C016D9B0 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C016F6E0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C018C110 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C018C364 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C018C3A8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0041B80 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 18LL;
  v2 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 18LL;
  if ( *(_QWORD *)(v2 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  result = *(unsigned int *)(v2 + 340);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 280);
    return 18LL;
  }
  return result;
}
