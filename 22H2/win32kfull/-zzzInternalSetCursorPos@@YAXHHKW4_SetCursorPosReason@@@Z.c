/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484
 * Callers:
 *     EditionInternalSetCursorPos @ 0x1C005AF00 (EditionInternalSetCursorPos.c)
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C008DF60 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x1C01354D0 (xxxUserResetDisplayDevice.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A8AB8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01B7390 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C005B8C4 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C006D940 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v6; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6);
    LogicalToPhysicalDPIPoint(v8, v8, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v8[0];
  CCursorClip::BoundPoint(gpCursorClip, v8[0], 0LL, 1LL, gptCursorAsync);
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
