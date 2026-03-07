__int64 __fastcall NtUserEnableSessionForMMCSS(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = EnableSessionForMMCSS(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
