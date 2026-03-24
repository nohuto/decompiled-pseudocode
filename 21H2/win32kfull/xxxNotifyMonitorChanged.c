/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C006C654
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C002C048 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040A20 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F1284 (xxxEnableChildWindowDpiMessageX.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E669C (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0013BBC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C003DF58 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostShellHookMessages @ 0x1C00435E0 (PostShellHookMessages.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006ABEC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E48EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  BOOL v8; // ebp
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  __int16 ScaledLogPixels; // bx

  v8 = 0;
  if ( *((_QWORD *)a1 + 13) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v8 = v10 == DesktopWindow;
  }
  v11 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1, 0, 0);
    v11 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) != 0 )
  {
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
        {
          v12 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow(a1) )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v13 + 284)),
                    (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
              {
                xxxSendGDIScaledDpiChangedMsgs(a1, a3);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    xxxSendDpiChangedMsgs(a1, a2, a3, a4);
  }
  if ( v8 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x18u, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow(a1) )
    {
      PostShellHookMessages(0x10uLL, *(_QWORD *)a1);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x14u, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
