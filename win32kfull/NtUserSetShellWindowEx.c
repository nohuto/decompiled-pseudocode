__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h]
  int v26; // [rsp+80h] [rbp+30h] BYREF
  int v27; // [rsp+84h] [rbp+34h]
  struct tagWND *v28; // [rsp+88h] [rbp+38h] BYREF

  v27 = -1;
  v26 = 0x2000;
  v25 = 0LL;
  v23 = 0LL;
  v4 = 0;
  v28 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v5;
      HMLockObject(v5);
      if ( (unsigned int)ValidateHWNDND(a2, &v28) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          goto LABEL_15;
        v13 = PsGetCurrentProcessWin32Process(v12);
        v14 = v13;
        if ( v13 )
          v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13;
        if ( !(unsigned __int8)CheckAccess(v14 + 864, &v26) )
          goto LABEL_15;
        v16 = PsGetCurrentProcessWin32Process(v15);
        v17 = v16;
        if ( v16 )
          v17 = -(__int64)(*(_QWORD *)v16 != 0LL) & v16;
        if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 424LL) == v17 )
        {
          *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v24;
          *((_QWORD *)&v24 + 1) = v28;
          HMLockObject(v28);
          v4 = xxxSetShellWindow(v7);
          ThreadUnlock1(v19, v18, v20);
        }
        else
        {
LABEL_15:
          UserSetLastError(5);
        }
      }
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
