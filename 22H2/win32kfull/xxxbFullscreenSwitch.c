/*
 * XREFs of xxxbFullscreenSwitch @ 0x1C021E2EC
 * Callers:
 *     xxxConsoleControl @ 0x1C003BBB8 (xxxConsoleControl.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     xxxSleepThread2 @ 0x1C00586B0 (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5200 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbFullscreenSwitch(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v12[2] = 0LL;
  v3 = 1;
  v4 = ValidateHwnd(a2);
  v5 = v4;
  if ( !v4 || (((*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
    return 4294967291LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v5;
  HMLockObject(v5);
  while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    xxxSleepThread2(0, 1u, 0, 0, 0LL);
  if ( !gfSwitchInProgress && !gProtocolType && !gfSessionSwitchBlock )
  {
    gfSessionSwitchBlock = 1;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 23LL) & 7) != 1 )
      {
        xxxShowWindowEx((struct tagWND *)v5, 2u, gdwPUDFlags & 0x10000);
        xxxInternalUpdateWindow((struct tagWND *)v5, 1u);
      }
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 1) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v10 = gbFullScreen == 1;
    }
    else
    {
      if ( !(unsigned int)xxxMakeWindowForegroundWithState(v5, 0) || WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_19;
      v10 = gbFullScreen == 2;
    }
    if ( v10 )
    {
LABEL_22:
      ThreadUnlock1(v9);
      result = v3;
      gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(v9, v8, 3, 17, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    }
    v3 = 0;
    goto LABEL_22;
  }
  ThreadUnlock1(v7);
  return 0LL;
}
