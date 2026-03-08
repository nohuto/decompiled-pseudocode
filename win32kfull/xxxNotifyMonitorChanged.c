/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C0099554
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0012344 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0099104 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01BBDC8 (xxxForceWindowToDpiForTest.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0041748 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C009940C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BA8EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C0222570 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(
        struct tagWND *this,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  BOOL v8; // eax
  struct tagWND *v9; // rcx
  BOOL v10; // r14d
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)this);
  v10 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren(v9, 0, 0);
  v11 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF;
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
    if ( *((_QWORD *)PtiCurrentShared(v12) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v13) + 57) + 8LL) + 64LL) & 1) != 0 )
      {
        v14 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
        if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 && IsTopLevelWindow((__int64)this) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v15 + 284)),
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
    else if ( IsTrayWindow(this, 1) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)this, 0LL);
      PostIAMShellHookMessage(20LL, *(_QWORD *)this);
      xxxCallHook(16, *(_QWORD *)this, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
