/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00E6430
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 TopLevelWindow; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = 0LL;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v7 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
    *(_QWORD *)&v15 = *(_QWORD *)(v7 + 416);
    *(_QWORD *)(v7 + 416) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    HMLockObject(v6);
    v11 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF;
    if ( (_DWORD)v11 != 3 )
    {
      v12 = 0LL;
      if ( (_DWORD)v11 != 2 )
      {
LABEL_6:
        ThreadUnlock1(v11, v9, v10);
        v4 = v12;
        goto LABEL_7;
      }
      TopLevelWindow = GetTopLevelWindow(v6);
      if ( v6 != TopLevelWindow )
      {
        if ( TopLevelWindow )
        {
          if ( (*(_DWORD *)(TopLevelWindow + 320) & 0x100000) != 0 )
            v4 = 1LL;
          v12 = v4;
        }
        goto LABEL_6;
      }
    }
    v12 = 1LL;
    goto LABEL_6;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
