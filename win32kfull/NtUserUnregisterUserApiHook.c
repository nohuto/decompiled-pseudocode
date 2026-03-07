__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  v1 = (int)UnregisterUserApiHook(v0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
