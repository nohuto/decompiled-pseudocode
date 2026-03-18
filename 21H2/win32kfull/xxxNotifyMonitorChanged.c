/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C007563C
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0003D64 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E0AE0 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00FD850 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C00FE6DC (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01DF164 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(
        ShellWindowManagement *this,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  BOOL v8; // eax
  __int64 v9; // rcx
  BOOL v10; // r14d
  int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)this);
  v9 = *((_QWORD *)this + 5);
  v10 = v8;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(this);
    v9 = *((_QWORD *)this + 5);
  }
  v11 = *(_DWORD *)(v9 + 288) & 0xF;
  if ( v11 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 648LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(this, a2, a3, a4);
      goto LABEL_7;
    }
  }
  else if ( v11 == 3 )
  {
    xxxConsiderPreferredDpiChange(this);
    goto LABEL_7;
  }
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v12 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
        if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 && IsTopLevelWindow((__int64)this) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v13 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(this, a3);
          }
        }
      }
    }
  }
LABEL_7:
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(this, 1);
    if ( *((_QWORD *)this + 15) )
    {
      PostIAMShellHookMessage(24LL, *(_QWORD *)this);
    }
    else if ( IsTrayWindow((__int64)this, 1) )
    {
      PostShellHookMessages(16LL, *(_QWORD *)this);
      PostIAMShellHookMessage(20LL, *(_QWORD *)this);
      xxxCallHook(16, *(_QWORD *)this, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
