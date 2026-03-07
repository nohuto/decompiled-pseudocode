__int64 __fastcall NtUserSetProgmanWindow(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  v2 = 0;
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0LL;
  }
  v2 = SetProgmanWindow(v3);
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
