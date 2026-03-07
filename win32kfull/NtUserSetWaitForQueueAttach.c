__int64 __fastcall NtUserSetWaitForQueueAttach(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetWaitForQueueAttach(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
