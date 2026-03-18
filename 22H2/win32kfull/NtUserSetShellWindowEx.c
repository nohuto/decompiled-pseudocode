/*
 * XREFs of NtUserSetShellWindowEx @ 0x1C003A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028D5C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetShellWindow @ 0x1C003ABAC (xxxSetShellWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int128 v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+38h] [rbp-18h] BYREF
  __int64 v29; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+80h] [rbp+30h] BYREF
  int v31; // [rsp+84h] [rbp+34h]
  struct tagWND *v32; // [rsp+88h] [rbp+38h] BYREF

  v31 = -1;
  v30 = 0x2000;
  v29 = 0LL;
  v27 = 0LL;
  v4 = 0;
  v32 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v26;
      *((_QWORD *)&v26 + 1) = v5;
      HMLockObject(v5);
      LOBYTE(v11) = ValidateHWNDND(a2, &v32);
      if ( v11 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          goto LABEL_15;
        v17 = PsGetCurrentProcessWin32Process(v16);
        v18 = v17;
        if ( v17 )
          v18 = -(__int64)(*(_QWORD *)v17 != 0LL) & v17;
        if ( !(unsigned __int8)CheckAccess(v18 + 888, &v30) )
          goto LABEL_15;
        v20 = PsGetCurrentProcessWin32Process(v19);
        v21 = v20;
        if ( v20 )
          v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
        if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) == v21 )
        {
          *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v28;
          *((_QWORD *)&v28 + 1) = v32;
          HMLockObject(v32);
          v4 = xxxSetShellWindow(v10);
          ThreadUnlock1(v23, v22, v24);
        }
        else
        {
LABEL_15:
          UserSetLastError(5LL);
        }
      }
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
