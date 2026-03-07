__int64 __fastcall NtUserDrawMenuBar(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    v3 = (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v10;
      *((_QWORD *)&v10 + 1) = v2;
      HMLockObject(v2);
      LOBYTE(v8) = *(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v8 != 64 )
        xxxSetWindowPos(v5, 0LL, 0LL, 0LL, 0, 0, 55);
      ThreadUnlock1(v8, v6, v7);
      v4 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
