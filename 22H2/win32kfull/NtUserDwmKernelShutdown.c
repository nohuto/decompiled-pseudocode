/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C01F8060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C00E9620 (xxxDwmStopRedirection.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  NTSTATUS v11; // eax

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v6 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v7 = 5LL;
LABEL_10:
    UserSetLastError(v7, v4, v5);
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 8)) == 0 )
  {
    v7 = 87LL;
    goto LABEL_10;
  }
  v10 = *(unsigned int *)(*(_QWORD *)v9 + 64LL);
  if ( (v10 & 1) != 0 && (v11 = xxxDwmStopRedirection(), v11 < 0) )
    UserSetLastStatus(v11, 1);
  else
    v6 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
