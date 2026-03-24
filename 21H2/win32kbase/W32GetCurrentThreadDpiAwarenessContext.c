/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C000F770 (NtUserGetDpiForMonitor.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C006EFE4 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070250 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0070590 (TransformPointBetweenCoordinateSpaces.c)
 *     GetMonitorRect @ 0x1C0070684 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0070720 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0070860 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0070A80 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0070F00 (LogicalToPhysicalDPIPoint.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00714B4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     NtUserLockCursor @ 0x1C009C790 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00A6910 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00AF900 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserClipCursor @ 0x1C00BEAC0 (NtUserClipCursor.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CA2A8 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C012E8E0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C01422E0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0142498 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C01424D4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002AC0C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v5 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v5 + 340) )
        {
          v1 = *(_DWORD *)(v5 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
          if ( CurrentProcessWin32Process )
            v1 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v5 + 328) & 4) != 0 && (v1 & 0xF) == 2 && (v1 & 0xF0) == 0x20 )
          v1 |= 0x20000000u;
      }
    }
  }
  return v1;
}
