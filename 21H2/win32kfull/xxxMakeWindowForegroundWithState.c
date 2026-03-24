/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C003AA88
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C004639C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0163CF0 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C021E8AC (xxxbFullscreenSwitch.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 *     WPP_RECORDER_SF_d @ 0x1C003AD34 (WPP_RECORDER_SF_d.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DDFC (zzzLockWindowUpdate2.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0072354 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  __int64 v4; // rdi
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 DesktopWindow; // rdi
  struct tagWND *v10; // rsi
  int v11; // ecx
  unsigned __int8 v13; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v22; // [rsp+50h] [rbp-31h] BYREF
  __int64 v23; // [rsp+60h] [rbp-21h]
  _QWORD v24[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v25[2]; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v26[2]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v27[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v21[2] = 0LL;
  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(a1, 4, 12, 12, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(a1, v5, 12, 13, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(a1, v6, 12, 14, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids, a2);
      }
    }
  }
  v7 = 1;
  if ( v4 )
  {
    if ( a2 == 2 )
    {
      v24[0] = &gspwndShouldBeForeground;
      v24[1] = v4;
      HMAssignmentLock(v24);
    }
    SetOrClrWF(0LL, v4, 1799LL, 1LL);
    SetOrClrWF(1LL, v4, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 )
    {
      LODWORD(a1) = gpqForeground;
      if ( !gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != v4 )
      {
        SetOrClrWF(0LL, v4, 1799LL, 1LL);
        SetOrClrWF(1LL, v4, 1796LL, 1LL);
      }
    }
  }
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1, 4, 12, 15, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    return v7;
  }
  WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)PsGetCurrentThreadId();
  v8 = gptiCurrent;
  v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v21;
  v21[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v21);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v8 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    }
    v10 = gspwndFullScreen;
    if ( (struct tagWND *)DesktopWindow == gspwndFullScreen )
      break;
    v13 = *(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 7;
    v27[2] = 0LL;
    ThreadLockExchange(DesktopWindow, v21);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v27[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v27;
    v27[1] = v10;
    if ( v10 )
      HMLockObject(v10);
    v25[0] = &gspwndFullScreen;
    v25[1] = DesktopWindow;
    HMAssignmentLock(v25);
    gbFullScreen = v13;
    if ( (v10 || gbNonServiceSession) && gbFullScreen == 2 && v13 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v16);
    }
    else
    {
      v23 = 0LL;
      v22 = 0LL;
      if ( v10 )
      {
        v15 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 23LL) & 7) == 1 )
          {
            SetOrClrWF(0LL, v10, 1799LL, 1LL);
            SetOrClrWF(1LL, v10, 1796LL, 1LL);
          }
          xxxSendMessage(v10, 58LL, 0LL, 0LL);
          v17 = *((_QWORD *)v10 + 2);
          if ( v17 != gptiCurrent )
          {
            LockW32Thread(v17, &v22);
            v17 = *((_QWORD *)v10 + 2);
            v2 = 1;
          }
          xxxCapture(v17, 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(&v22);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2(v10);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            v26[1] = v10;
            v26[0] = &gspwndFullScreen;
            HMAssignmentLock(v26);
            ThreadUnlock1(v19);
            ThreadUnlock1(v20);
            v7 = 0;
            goto LABEL_16;
          }
          gfGdiEnabled = 0;
          v15 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4960LL);
        }
      }
      ThreadUnlock1(v15);
      v8 = (unsigned int)v13 - 1;
      if ( v13 == 1 )
      {
        v18 = *(_QWORD *)(DesktopWindow + 16);
        if ( v18 != gptiCurrent )
        {
          LockW32Thread(v18, &v22);
          v18 = *(_QWORD *)(DesktopWindow + 16);
          v2 = 1;
        }
        xxxCapture(v18, DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock(&v22);
        xxxSendMessage(DesktopWindow, 58LL, 1LL, 0LL);
LABEL_58:
        v2 = 0;
        continue;
      }
      if ( v13 != 2 )
        goto LABEL_58;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      SetPointer(0LL);
      gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos(gptCursorFullScreen.x, gptCursorFullScreen.y, 2, 0);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey );
  ThreadUnlock1(v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v11, 4, 12, 16, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
LABEL_16:
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  return v7;
}
