/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00F1190
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetShellWindow @ 0x1C00F1340 (xxxSetShellWindow.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+84h] [rbp+34h]
  struct tagWND *v25; // [rsp+88h] [rbp+38h] BYREF

  v24 = -1;
  v23 = 0x2000;
  v22 = 0LL;
  v20 = 0LL;
  v4 = 0;
  v25 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v19;
      *((_QWORD *)&v19 + 1) = v5;
      HMLockObject(v5);
      if ( ValidateHWNDND(a2, &v25) )
      {
        if ( PsGetCurrentProcessWin32Process(v9)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, &v23))
          && *(_QWORD *)(*((_QWORD *)v7 + 2) + 424LL) == PsGetCurrentProcessWin32Process(v14) )
        {
          *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v21;
          *((_QWORD *)&v21 + 1) = v25;
          HMLockObject(v25);
          v4 = xxxSetShellWindow(v7);
          ThreadUnlock1(v16, v15, v17);
        }
        else
        {
          UserSetLastError(5LL, v11);
        }
      }
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
