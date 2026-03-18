/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C0121980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS started; // eax
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v10 = 5LL;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87LL;
LABEL_10:
    UserSetLastError(v10, v3);
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
