/*
 * XREFs of _SetSystemTimer @ 0x1C0006384
 * Callers:
 *     IncrementCompositedCount @ 0x1C00059EC (IncrementCompositedCount.c)
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006294 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01439F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0143AD6 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     zzzStartFade @ 0x1C01BE6C0 (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C01DDCF0 (NtUserSetSystemTimer.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02282E0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C022BFF0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C022E110 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8

  if ( a1 && (*(_BYTE *)(_HMPheFromObject() + 25) & 1) == 0 )
  {
    if ( a5 )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v10 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    UserSetLastError(5LL);
  }
  return 0LL;
}
