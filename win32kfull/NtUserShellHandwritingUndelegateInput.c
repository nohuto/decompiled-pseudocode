__int64 __fastcall NtUserShellHandwritingUndelegateInput(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( !a1 )
    goto LABEL_9;
  v5 = PtiFromThreadId(a1);
  v7 = (struct tagTHREADINFO *)v5;
  if ( !v5 || (*(_DWORD *)(v5 + 1276) & 0x40) == 0 || a2 - 1 > 1 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *((_QWORD *)v7 + 53) == CurrentProcessWin32Process )
  {
    _HandleShellHandwritingDelegatedInput(v7, a2, 0LL);
    CleanupShellHandwritingInputDelegation(v7);
    v4 = 1LL;
  }
  else
  {
LABEL_9:
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
