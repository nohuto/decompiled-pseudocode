/*
 * XREFs of SetVisible @ 0x1C002DB8C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00929C4 (xxxCleanupMotherDesktopWindow.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100930 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxShowOwnedWindows @ 0x1C010189C (xxxShowOwnedWindows.c)
 *     zzzActiveCursorTracking @ 0x1C01B8530 (zzzActiveCursorTracking.c)
 *     NtUserSetVisible @ 0x1C01DE050 (NtUserSetVisible.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0225290 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1C00059EC (IncrementCompositedCount.c)
 *     DecrementCompositedCount @ 0x1C0016BB4 (DecrementCompositedCount.c)
 *     DecVisWindows @ 0x1C002A17C (DecVisWindows.c)
 *     _IsWindowVisible @ 0x1C002A980 (_IsWindowVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     IncVisWindows @ 0x1C002E484 (IncVisWindows.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     ClrFTrueVis @ 0x1C00FED00 (ClrFTrueVis.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v9; // r14d
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

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
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v5) = 0;
        }
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            v7,
            4,
            22,
            16,
            (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
            (char)a1);
        }
        zzzSetWindowCompositionCloak(a1, 0LL, 2u);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            v13,
            4,
            22,
            17,
            (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
            (char)a1);
        }
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
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
        PostIAMShellHookMessage(17LL, *(_QWORD *)a1);
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !(unsigned __int8)IsTrayWindow(a1, 1LL) || (v9 = 1, !(unsigned int)IsWindowVisible((__int64)a1)) )
        v9 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v9 )
          PostIAMShellHookMessage(22LL, *(_QWORD *)a1);
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows(a1);
      if ( (a2 & 8) == 0 )
      {
        v10 = *((_DWORD *)a1 + 80);
        if ( (v10 & 0x400) != 0 )
        {
          *((_DWORD *)a1 + 80) = v10 & 0xFFFFFBFF;
          PostShellHookMessagesEx(0x36uLL, *(_QWORD *)a1, 0LL);
        }
      }
    }
    return 1;
  }
  return 0LL;
}
