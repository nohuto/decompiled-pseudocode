/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1406167F8
 * Callers:
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x14068ECF0 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PspSendJobNotification @ 0x14031D13C (PspSendJobNotification.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspRequestProcessExecutionState @ 0x140605920 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     PspLockRootJobFromProcess @ 0x140616734 (PspLockRootJobFromProcess.c)
 *     PspLockJobConditionally @ 0x1406167C8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x140619120 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x1406193EC (PspUnlockJobConditionally.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406902DC (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x1406970A8 (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x140909C38 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x140935F28 (EtwTraceJobRemoveProcess.c)
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
  _DWORD *v16; // r9
  _QWORD *v17; // rax
  char v18; // [rsp+28h] [rbp-69h]
  __int64 v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  struct _KTHREAD *v21; // [rsp+40h] [rbp-51h]
  _BYTE v22[160]; // [rsp+48h] [rbp-49h] BYREF
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
      PsTerminateProcess(Process, a4);
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
          PspFoldProcessAccountingIntoJob(v13, Process, v22);
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
      PspUnlinkJobProcess(v13, Process);
      PspUnlockJobConditionally(v13, &v19);
      return (_QWORD *)PspUnlockJob(v19, CurrentThread);
    }
    else
    {
      if ( v11 && (Process[1].DirectoryTableBase & 4) != 0 && !v18 )
        PspRequestProcessExecutionState((__int64)Process, 0, 0);
      PspUnlockJobConditionally(v13, &v19);
      PspUnlockJob(v19, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process, v14, v15, v16);
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  return result;
}
