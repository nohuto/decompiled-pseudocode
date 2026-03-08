/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1406FB110
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     PspTerminateProcessesJobCallback @ 0x1406F8A00 (PspTerminateProcessesJobCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 * Callees:
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     PspInitializeProcessExecutionState @ 0x14040BAC8 (PspInitializeProcessExecutionState.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspRequestProcessExecutionStateOld @ 0x14067CE2C (PspRequestProcessExecutionStateOld.c)
 *     PsQueryStatisticsProcess @ 0x1406A8F30 (PsQueryStatisticsProcess.c)
 *     PspUnlinkJobProcess @ 0x1406F811C (PspUnlinkJobProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406F8590 (PspFoldProcessAccountingIntoJob.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     PspLockRootJobFromProcess @ 0x1406F93EC (PspLockRootJobFromProcess.c)
 *     PspUnlockJobConditionally @ 0x1406FB418 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406FB448 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspRequestProcessExecutionState @ 0x1406FF388 (PspRequestProcessExecutionState.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x1409B03F8 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1409E26A8 (EtwTraceJobRemoveProcess.c)
 */

void __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  char v4; // r15
  bool v6; // zf
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v11; // r12
  __int64 v12; // rbx
  int v13; // esi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+20h] [rbp-79h]
  _BYTE v17[7]; // [rsp+21h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-71h] BYREF
  int v19; // [rsp+30h] [rbp-69h]
  __int64 v20; // [rsp+38h] [rbp-61h] BYREF
  struct _KTHREAD *v21; // [rsp+40h] [rbp-59h]
  __int64 v22[20]; // [rsp+50h] [rbp-49h] BYREF
  char v23; // [rsp+110h] [rbp+77h]

  v23 = a3;
  v4 = 0;
  v6 = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
  v7 = a3;
  v20 = 0LL;
  v18 = 0LL;
  v17[0] = 0;
  if ( v6 || (a3 & 1) != 0 )
  {
    memset(v22, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v21 = CurrentThread;
    v11 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v16 = 0;
    if ( (v7 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x40) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v16 = 1;
    }
    v19 = 1;
    PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v20, &v18);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v7, a4);
    if ( (v7 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess((__int64)Process, v22);
      v4 = 1;
    }
    v12 = v20;
    if ( v20 )
    {
      v13 = v19;
      do
      {
        PspLockJobConditionally(v12, &v18);
        if ( v11 )
        {
          --*(_DWORD *)(v12 + 216);
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x20) != 0 )
            --*(_DWORD *)(v12 + 1444);
        }
        if ( (v7 & 8) != 0 && v11 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 552) && ((1 << a2[1]) & *(_DWORD *)(v12 + 1088)) != 0 )
          PspSendJobNotification(v12, a2[1], a2[2], 0);
        if ( v4 )
        {
          PspFoldProcessAccountingIntoJob(v12, (__int64)Process, v22);
          if ( v12 != Process[1].Affinity.StaticBitmap[16] || *(_DWORD *)(v12 + 1448) == PspEnforcementSequenceNumber )
          {
            if ( v13 == 1 )
            {
              v14 = (_QWORD *)(v12 + 1336);
              if ( v12 + 1336 < (unsigned __int64)(v12 + 1440) )
              {
                while ( !*v14 )
                {
                  if ( (unsigned __int64)++v14 >= v12 + 1440 )
                    goto LABEL_36;
                }
                PspSubtractAccountingValues(v12 + 1336, v22);
                v13 = 2;
              }
            }
          }
          else
          {
            v13 = 0;
          }
        }
LABEL_36:
        PspUnlockJobConditionally(v12, &v18);
        v12 = *(_QWORD *)(v12 + 1288);
      }
      while ( v12 );
      v12 = v20;
      CurrentThread = v21;
      LOBYTE(v7) = v23;
    }
    PspLockJobConditionally(v12, &v18);
    if ( (v7 & 1) != 0 )
    {
      PspUnlinkJobProcess(v12, (__int64)Process);
      PspUnlockJobConditionally(v12, &v18);
      PspUnlockJob(v18, CurrentThread);
    }
    else
    {
      if ( v11 && (Process[1].DirectoryTableBase & 4) != 0 && !v16 )
      {
        if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
        {
          PspInitializeProcessExecutionState(v17);
          LOBYTE(v15) = v17[0];
          PspRequestProcessExecutionState(Process, v15, 0LL);
        }
        else
        {
          PspRequestProcessExecutionStateOld((__int64)Process, 0, 0);
        }
      }
      PspUnlockJobConditionally(v12, &v18);
      PspUnlockJob(v18, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
}
