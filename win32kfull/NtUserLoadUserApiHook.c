__int64 NtUserLoadUserApiHook()
{
  __int64 UserApiHook; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  UserApiHook = (int)xxxLoadUserApiHook();
  UserSessionSwitchLeaveCrit(v1);
  return UserApiHook;
}
