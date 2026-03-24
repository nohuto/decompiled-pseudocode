/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C00D6DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0032378 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetShellWindow @ 0x1C00D6FA0 (xxxSetShellWindow.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+84h] [rbp+34h]
  struct tagWND *v22; // [rsp+88h] [rbp+38h] BYREF

  v21 = -1;
  v20 = 0x2000;
  v2 = 0;
  v19 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v5;
      HMLockObject(v5);
      if ( ValidateHWNDND(a2, &v22) )
      {
        if ( PsGetCurrentProcessWin32Process(v8)
          && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10),
              (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, &v20))
          && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v13) )
        {
          *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v18;
          *((_QWORD *)&v18 + 1) = v22;
          HMLockObject(v22);
          v2 = xxxSetShellWindow((struct tagWND *)v7);
          ThreadUnlock1(v14);
        }
        else
        {
          UserSetLastError(5LL, v9, v11);
        }
      }
      ThreadUnlock1(v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
