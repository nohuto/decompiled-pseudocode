__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage();
  EnterSharedCrit(v7, v6, v8);
  v9 = 0LL;
  v15 = 0;
  v11 = PtiCurrentShared(v10);
  v12 = (__int64 *)zzzSetWindowsHookEx(0LL, 0LL, (__int64)v11, v4, a2, a3, &v15);
  if ( v12 )
  {
    if ( !v15 || (byte_1C0319261[v4] & 8) != 0 )
    {
      v9 = (__int64)v12;
      if ( v12 != (__int64 *)-1LL )
        v9 = *v12;
    }
  }
  else
  {
    v9 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
