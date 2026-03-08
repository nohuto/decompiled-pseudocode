/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C0096870 (zzzResetSharedDesktops.c)
 *     EditionInternalSetCursorPos @ 0x1C00F6250 (EditionInternalSetCursorPos.c)
 *     xxxUserResetDisplayDevice @ 0x1C01293C0 (xxxUserResetDisplayDevice.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A9CBC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01B8530 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BC8CC (xxxCallJournalPlaybackHook.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C001FD80 (IsCurrentDesktopComposed.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(v7, v7, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v7[0];
  CCursorClip::BoundPoint(gpCursorClip, v7[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  CursorApiRouter::MovePointer(
    gpsi,
    *(HDEV *)(gpDispInfo + 40LL),
    *(_DWORD *)(gpsi + 4960LL),
    *(_DWORD *)(gpsi + 4964LL),
    1u);
  CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
