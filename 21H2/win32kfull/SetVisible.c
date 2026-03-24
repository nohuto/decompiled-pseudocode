/*
 * XREFs of SetVisible @ 0x1C004BD40
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxShowOwnedWindows @ 0x1C002C1D4 (xxxShowOwnedWindows.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031D34 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BF90 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00D6DA4 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D2CA0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2B98 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C023F190 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     PostShellHookMessages @ 0x1C00435E0 (PostShellHookMessages.c)
 *     IncVisWindows @ 0x1C004BF54 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C004C300 (ComposeWindowIfNeeded.c)
 *     DecVisWindows @ 0x1C004C78C (DecVisWindows.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     CalcWindowFullScreen @ 0x1C006AA64 (CalcWindowFullScreen.c)
 *     ClrFTrueVis @ 0x1C00F54A0 (ClrFTrueVis.c)
 *     _IsWindowVisible @ 0x1C01260E4 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E7D0C (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E7F40 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // eax

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
      return v4;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0LL, a1, 3856LL, 1LL);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1LL, a1, 2312LL, 1LL);
    }
    else
    {
      SetOrClrWF(0LL, a1, 2312LL, 1LL);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x16u, *(_QWORD *)a1);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows(a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_QWORD *)a1 + 5);
      v8 = *(_DWORD *)(v7 + 232);
      if ( (v8 & 0x8000) != 0 )
      {
        *(_DWORD *)(v7 + 232) = v8 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    if ( (*((_DWORD *)a1 + 81) & 4) != 0 )
    {
      zzzSetWindowCompositionCloak((__int64)a1, 0LL, 2u);
      *((_DWORD *)a1 + 81) &= ~4u;
    }
    SetOrClrWF(1LL, a1, 3856LL, 1LL);
    SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
    IncVisWindows(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      IncrementCompositedCount(a1);
    if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
      ComposeWindowIfNeeded(a1, 0LL);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x11u, *(_QWORD *)a1);
    return 1;
  }
  return v4;
}
