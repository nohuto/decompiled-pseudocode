__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = 5;
LABEL_10:
    UserSetLastError(v5);
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    v5 = 87;
    goto LABEL_10;
  }
  v8 = *(unsigned int *)(*(_QWORD *)v7 + 64LL);
  if ( (v8 & 1) != 0 && (v9 = xxxDwmStopRedirection(), v9 < 0) )
    UserSetLastStatus(v9, 1);
  else
    v4 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
