/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x14067FFF8
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14060A430 (PspTerminateProcessesJobCallback.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140681F80 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 * Callees:
 *     PspSendJobNotification @ 0x14024234C (PspSendJobNotification.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14060BA1C (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x1406132B8 (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PspLockRootJobFromProcess @ 0x14067FF34 (PspLockRootJobFromProcess.c)
 *     PspLockJobConditionally @ 0x14067FFC8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x140682920 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x140682BEC (PspUnlockJobConditionally.c)
 *     PspRequestProcessExecutionState @ 0x1406F5050 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     PspSubtractAccountingValues @ 0x140909D48 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1409360A8 (EtwTraceJobRemoveProcess.c)
 */

_QWORD *__fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  _QWORD *result; // rax
  char v5; // r15
  bool v7; // zf
  unsigned int v8; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v11; // r12
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  char v18; // [rsp+28h] [rbp-69h]
  __int64 v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  struct _KTHREAD *v21; // [rsp+40h] [rbp-51h]
  __int64 v22[20]; // [rsp+48h] [rbp-49h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  char v25; // [rsp+108h] [rbp+77h]

  result = &retaddr;
  v25 = a3;
  v5 = 0;
  v7 = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
  v8 = a3;
  v20 = 0LL;
  v19 = 0LL;
  if ( v7 || (a3 & 1) != 0 )
  {
    memset(v22, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v21 = CurrentThread;
    v11 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v18 = 0;
    if ( (v8 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (BYTE4(Process[2].Header.WaitListHead.Flink) & 0x40) == 0 )
    {
      PsTerminateProcess((ULONG_PTR)Process);
      v18 = 1;
    }
    v12 = 1;
    PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v20, &v19);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v8, a4);
    if ( (v8 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v22);
      v5 = 1;
    }
    v13 = v20;
    if ( v20 )
    {
      do
      {
        PspLockJobConditionally(v13, &v19);
        if ( v11 )
        {
          --*(_DWORD *)(v13 + 216);
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x20) != 0 )
            --*(_DWORD *)(v13 + 1228);
        }
        if ( (v8 & 8) != 0 && v11 )
          ++*(_DWORD *)(v13 + 220);
        if ( a2 && (!*a2 || *a2 == v13) && *(_QWORD *)(v13 + 456) && ((1 << a2[1]) & *(_DWORD *)(v13 + 876)) != 0 )
          PspSendJobNotification(v13, a2[1], a2[2], 0);
        if ( v5 )
        {
          PspFoldProcessAccountingIntoJob(v13, (__int64)Process, v22);
          if ( v13 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v13 + 1232) != PspEnforcementSequenceNumber )
            v12 = 0;
          if ( v12 == 1 )
          {
            v17 = (_QWORD *)(v13 + 1120);
            if ( v13 + 1120 < (unsigned __int64)(v13 + 1224) )
            {
              while ( !*v17 )
              {
                if ( (unsigned __int64)++v17 >= v13 + 1224 )
                  goto LABEL_13;
              }
              PspSubtractAccountingValues(v13 + 1120, v22);
              v12 = 2;
            }
          }
        }
LABEL_13:
        PspUnlockJobConditionally(v13, &v19);
        v13 = *(_QWORD *)(v13 + 1072);
      }
      while ( v13 );
      v13 = v20;
      CurrentThread = v21;
      LOBYTE(v8) = v25;
    }
    PspLockJobConditionally(v13, &v19);
    if ( (v8 & 1) != 0 )
    {
      PspUnlinkJobProcess(v13, (__int64)Process);
      PspUnlockJobConditionally(v13, &v19);
      return (_QWORD *)PspUnlockJob(v19, CurrentThread);
    }
    else
    {
      if ( v11 && (Process[1].DirectoryTableBase & 4) != 0 && !v18 )
        PspRequestProcessExecutionState(Process, 0LL, 0LL);
      PspUnlockJobConditionally(v13, &v19);
      PspUnlockJob(v19, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      return KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
    }
  }
  return result;
}
