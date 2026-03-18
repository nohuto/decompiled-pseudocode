/*
 * XREFs of _SetSystemTimer @ 0x1C0006474
 * Callers:
 *     IncrementCompositedCount @ 0x1C0005ADC (IncrementCompositedCount.c)
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006384 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01506F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C01507D6 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     zzzStartFade @ 0x1C01BD520 (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C01DCCC0 (NtUserSetSystemTimer.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02255E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02292D0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C022B3F0 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
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
