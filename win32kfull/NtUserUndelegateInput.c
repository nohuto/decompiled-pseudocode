__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == v11 )
      {
        _HandleDelegatedInput(*(struct tagTHREADINFO **)(v7 + 264), a2, 0LL);
        CleanupInputDelegation(v7);
        v6 = 1LL;
        goto LABEL_5;
      }
      v8 = 5;
    }
    else
    {
      v8 = 87;
    }
    UserSetLastError(v8);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
