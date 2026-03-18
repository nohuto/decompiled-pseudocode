/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C00999A0 (zzzResetSharedDesktops.c)
 *     EditionInternalSetCursorPos @ 0x1C009A5A0 (EditionInternalSetCursorPos.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154E50 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01DD5E8 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E0F20 (xxxCallJournalPlaybackHook.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C009D460 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6, v5);
    LogicalToPhysicalDPIPoint(v9, v9, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v9[0];
  CCursorClip::BoundPoint(gpCursorClip, v9[0], 0LL, 1LL, gptCursorAsync);
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
