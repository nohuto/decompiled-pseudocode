__int64 __fastcall NtUserSetSystemCursor(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagCURSOR *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandle(a1, 3u);
  v6 = 0LL;
  v7 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v12 = 0LL;
    v13 = 0LL;
    ThreadLock(v4, &v12);
    v6 = (unsigned __int8)zzzSetSystemCursor(v7, a2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
