__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, char a3)
{
  struct tagWND *v6; // rbx
  unsigned int v7; // ebx
  struct tagIMC *v8; // rax
  __int64 v9; // rcx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_2;
  if ( (*gpsi & 4) != 0 )
  {
    if ( a2 )
    {
      v8 = (struct tagIMC *)HMValidateHandle(a2, 0x11u);
      if ( !v8 )
        goto LABEL_2;
    }
    else
    {
      v8 = 0LL;
    }
    v7 = AssociateInputContextEx(v6, v8, a3);
    goto LABEL_10;
  }
  UserSetLastError(120);
LABEL_2:
  v7 = 2;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
