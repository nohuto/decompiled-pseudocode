/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01D6050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v4; // edi
  struct tagWND *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v4 = 0;
  v17 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v6;
      HMLockObject(v6);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v11 == *(_QWORD *)(*((_QWORD *)v8 + 2) + 424LL) )
      {
        if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
          v4 = xxxInheritWindowMonitor(v8, v5, 1);
      }
      else
      {
        UserSetLastError(5);
      }
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
