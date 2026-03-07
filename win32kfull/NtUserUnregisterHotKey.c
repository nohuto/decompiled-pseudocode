__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  int v4; // ebx
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = _UnregisterHotKey(v5, a2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
