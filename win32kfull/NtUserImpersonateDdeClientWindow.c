__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rcx
  char v14; // [rsp+40h] [rbp+18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  v5 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    v8 = ValidateHwnd(a2);
    v10 = v8;
    if ( v8 )
    {
      v11 = *(struct tagTHREADINFO **)(v8 + 16);
      if ( v11 == PtiCurrentShared(v9) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == *((_QWORD *)v11 + 53) )
          v6 = 1;
        else
          v6 = ImpersonateDdeClientWindow(v7, v10);
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}
