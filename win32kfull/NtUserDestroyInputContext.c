__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  int v2; // ebx
  struct tagIMC *v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = (struct tagIMC *)HMValidateHandle(a1, 0x11u);
    v2 = 0;
    if ( v3 )
      v2 = DestroyInputContext(v3);
  }
  else
  {
    UserSetLastError(120);
    v2 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
