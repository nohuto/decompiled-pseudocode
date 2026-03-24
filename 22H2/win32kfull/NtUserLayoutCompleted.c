/*
 * XREFs of NtUserLayoutCompleted @ 0x1C011C250
 * Callers:
 *     <none>
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DAB0 (PostIAMShellHookMessageEx.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     EtwTraceLayoutChangeStop @ 0x1C011C3A0 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x1C011C408 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C0210AC8 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C0273CF0 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 TopLevelWindow; // rax
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v11 = (void *)ReferenceDwmApiPort(v7, v6);
      DwmAsyncCancelRotationDelay(v11);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v8 = *(_QWORD *)(TopLevelWindow + 40);
        if ( (*(_WORD *)(v8 + 42) & 0x2FFF) != 0x29D )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v8);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
