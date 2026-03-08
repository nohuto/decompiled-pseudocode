/*
 * XREFs of NtUserLayoutCompleted @ 0x1C0098EE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     GreWindowLayoutComplete @ 0x1C0098D74 (GreWindowLayoutComplete.c)
 *     EtwTraceLayoutChangeStop @ 0x1C0098E78 (EtwTraceLayoutChangeStop.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     HandleAsyncResizeComplete @ 0x1C01F3408 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026F07C (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct DWMSPRITE *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 TopLevelWindow; // rax
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  void *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 296LL) == v5 )
    {
      v14 = (void *)ReferenceDwmApiPort(v6);
      DwmAsyncCancelRotationDelay(v14);
    }
    PostIAMShellHookMessage(38LL, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      v11 = TopLevelWindow;
      if ( TopLevelWindow )
      {
        v8 = *(_QWORD *)(TopLevelWindow + 40);
        v7 = (struct DWMSPRITE *)(*(_WORD *)(v8 + 42) & 0x2FFF);
        if ( (_DWORD)v7 != 669 )
        {
          v12 = *(Gre::Base **)TopLevelWindow;
          v17 = 0;
          GreWindowLayoutComplete(v12, v7, v9, &v17);
          if ( v17 )
            HandleAsyncResizeComplete(v11);
        }
      }
    }
    ThreadUnlock1(v8, v7, v9);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
