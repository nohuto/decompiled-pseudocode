/*
 * XREFs of SetVisible @ 0x1C00EBC94
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC (xxxCleanupMotherDesktopWindow.c)
 *     xxxShowOwnedWindows @ 0x1C00C4208 (xxxShowOwnedWindows.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00C5F30 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     zzzActiveCursorTracking @ 0x1C01B7390 (zzzActiveCursorTracking.c)
 *     NtUserSetVisible @ 0x1C01DD020 (NtUserSetVisible.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F56B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0224BB0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1C0005ADC (IncrementCompositedCount.c)
 *     DecrementCompositedCount @ 0x1C00178C4 (DecrementCompositedCount.c)
 *     ClrFTrueVis @ 0x1C008C27C (ClrFTrueVis.c)
 *     DecVisWindows @ 0x1C00A17FC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00A1908 (IncVisWindows.c)
 *     _IsWindowVisible @ 0x1C00A79A8 (_IsWindowVisible.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // r9
  int v7; // r14d
  int v8; // eax
  char v9; // dl
  __int64 v10; // r9
  char v11; // dl

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*((_DWORD *)a1 + 80) & 4) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
          || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v5,
            4u,
            0xCu,
            0x10u,
            (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
            a1);
        zzzSetWindowCompositionCloak(a1, 0LL, 2u);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
          || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v11 = 0;
        }
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v11,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v10,
            4u,
            0xCu,
            0x11u,
            (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
            a1);
        *((_DWORD *)a1 + 80) &= ~4u;
      }
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        IncrementCompositedCount((__int64)a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen(a1);
      if ( IsTrayWindow(a1, 1) )
        PostIAMShellHookMessage(0x11u);
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis((__int64)a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !IsTrayWindow(a1, 1) || (v7 = 1, !(unsigned int)IsWindowVisible((__int64)a1)) )
        v7 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v7 )
          PostIAMShellHookMessage(0x16u);
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows(a1);
      if ( (a2 & 8) == 0 )
      {
        v8 = *((_DWORD *)a1 + 80);
        if ( (v8 & 0x400) != 0 )
        {
          *((_DWORD *)a1 + 80) = v8 & 0xFFFFFBFF;
          PostShellHookMessagesEx(0x36u, *(_QWORD *)a1, 0LL);
        }
      }
    }
    return 1;
  }
  return 0LL;
}
