/*
 * XREFs of _SetSystemTimer @ 0x1C002CAB8
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0029168 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C002C93C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002C9C8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C002D5C0 (xxxTrackMouseMove.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E1074 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E7F40 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01E87EC (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C0202B50 (NtUserSetSystemTimer.c)
 *     xxxDrawDragRectEx @ 0x1C0211504 (xxxDrawDragRectEx.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0244990 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0246B40 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rcx

  if ( !a1 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( !a5 && PsGetCurrentProcessWin32Process(v9) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
