__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v7);
  v4 = BlockInput(a1, v2, v3);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
