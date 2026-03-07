__int64 __fastcall NtUserSetImeHotKey(unsigned int a1, unsigned int a2, unsigned int a3, HKL a4, unsigned int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  v9 = (int)SetImeHotKey(a1, a2, a3, a4, a5);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
