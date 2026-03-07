__int64 __fastcall NtUserSetThreadQueueMergeSetting(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)SetThreadQueueMergeSetting(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
