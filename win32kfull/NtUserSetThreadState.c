__int64 __fastcall NtUserSetThreadState(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(-1073741811);
    v7 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(gptiCurrent + 432LL);
    v6 = a1 ^ *(_DWORD *)(v5 + 396);
    v7 = 1LL;
    *(_DWORD *)(v5 + 396) ^= a2 & v6;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
