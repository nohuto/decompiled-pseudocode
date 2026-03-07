__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS started; // eax
  int v10; // ecx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v10 = 5;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87;
LABEL_10:
    UserSetLastError(v10);
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(*(_QWORD *)v6 + 64LL);
  if ( (v7 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v4 = 1LL;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
