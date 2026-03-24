/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C0135DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     zzzDwmStartRedirection @ 0x1C00E942C (zzzDwmStartRedirection.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS started; // eax
  __int64 v12; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v6 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5LL;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 8)) == 0 )
  {
    v12 = 87LL;
LABEL_10:
    UserSetLastError(v12, v4, v5);
    goto LABEL_7;
  }
  v9 = *(unsigned int *)(*(_QWORD *)v8 + 64LL);
  if ( (v9 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v6 = 1LL;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
