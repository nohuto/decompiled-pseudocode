/*
 * XREFs of _SetSystemTimer @ 0x1C00C2F28
 * Callers:
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C2E38 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0118B1C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C014C240 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01DC2FC (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E25D4 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01E2EB4 (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C01FE100 (NtUserSetSystemTimer.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240920 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0242A00 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( a1 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( a5 || PsGetCurrentProcessWin32Process(v9) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    UserSetLastError(5LL, v10);
  }
  return 0LL;
}
