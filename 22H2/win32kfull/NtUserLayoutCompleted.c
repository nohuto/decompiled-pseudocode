/*
 * XREFs of NtUserLayoutCompleted @ 0x1C00C5C40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceLayoutChangeStop @ 0x1C00C5D94 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x1C00C5DFC (GreWindowLayoutComplete.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     HandleAsyncResizeComplete @ 0x1C01F2228 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026C5CC (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 TopLevelWindow; // rax
  void *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v8);
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 24) + 304LL) == v8 )
    {
      v15 = (void *)ReferenceDwmApiPort(v9);
      DwmAsyncCancelRotationDelay(v15);
    }
    PostIAMShellHookMessage(38LL, a1);
    if ( *(char *)(*(_QWORD *)(v8 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v8);
      if ( TopLevelWindow )
      {
        v11 = *(_QWORD *)(TopLevelWindow + 40);
        v10 = *(_WORD *)(v11 + 42) & 0x2FFF;
        if ( (_DWORD)v10 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v11, v10, v12);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
