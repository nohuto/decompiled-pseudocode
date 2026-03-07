__int64 __fastcall PspAssignProcessToJob(ULONG_PTR BugCheckParameter3, PEPROCESS Process, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  PEPROCESS NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  __int64 v12; // rax
  ULONG_PTR v13; // r12
  int v14; // edi
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // r13d
  int v20; // ecx
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  char v24[4]; // [rsp+40h] [rbp-59h] BYREF
  int v25; // [rsp+44h] [rbp-55h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-51h] BYREF
  __int64 v27; // [rsp+50h] [rbp-49h]
  struct _KTHREAD *v28; // [rsp+58h] [rbp-41h]
  __int128 v29; // [rsp+60h] [rbp-39h] BYREF
  PEPROCESS v30; // [rsp+70h] [rbp-29h]
  __int128 v31; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+88h] [rbp-11h]
  _OWORD v33[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+17h]

  v24[0] = 0;
  v30 = 0LL;
  v4 = 0;
  v32 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  v5 = 0;
  NextJobProcess = Process;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread;
  v25 = 0;
  memset(v33, 0, sizeof(v33));
  if ( a4 == 5 )
  {
    a3 = Process[1].Affinity.StaticBitmap[16];
    NextJobProcess = (PEPROCESS)PspGetNextJobProcess(BugCheckParameter3, (__int64)CurrentThread, &v31, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(BugCheckParameter3, CurrentThread, &v31, NextJobProcess);
    v4 = v25;
  }
  if ( !NextJobProcess )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment(BugCheckParameter3, (_DWORD)NextJobProcess, a3, a4, (__int64)v33);
    v5 |= 6u;
    PspLockJobAssignment(CurrentThread);
    PspLockJobsAndProcessExclusive(v33, NextJobProcess, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(BugCheckParameter3) )
      {
        v22 = NextJobProcess[1].Affinity.StaticBitmap[16];
        v25 = 5;
        if ( v22 == BugCheckParameter3 && (HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v4 = v25;
LABEL_10:
          if ( NextJobProcess && v4 != 5 )
          {
            a3 = NextJobProcess[1].Affinity.StaticBitmap[16];
            v4 = v25;
          }
          if ( v4 == 4
            && (*(_DWORD *)(BugCheckParameter3 + 1536) & 0x10) != 0
            && ((*(_DWORD *)(a3 + 1536) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
            || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(BugCheckParameter3, a3, NextJobProcess, v4)
            || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(BugCheckParameter3, a3, NextJobProcess, v4)
            || v4 == 5 && (*(_DWORD *)(BugCheckParameter3 + 1040) & 1) != 0
            || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1086) + 1 > 0x64 )
          {
            goto LABEL_93;
          }
          if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
          {
            v20 = 0;
            while ( (unsigned int)(v20 - 1) <= 1
                 || !_bittest((const signed __int32 *)(BugCheckParameter3 + 1536), 0x19u)
                 || !_bittest((const signed __int32 *)(a3 + 1536), 0x19u) )
            {
              if ( ++v20 >= 3 )
                goto LABEL_19;
            }
            goto LABEL_93;
          }
LABEL_19:
          if ( ((v4 - 4) & 0xFFFFFFFC) == 0
            && v4 != 6
            && (*(_DWORD *)(a3 + 1564) || (unsigned __int8)PspIsSetJobIoAttribution(a3))
            && (*(_DWORD *)(BugCheckParameter3 + 1564) || (unsigned __int8)PspIsSetJobIoAttribution(BugCheckParameter3)) )
          {
LABEL_93:
            v14 = -1073741637;
            goto LABEL_43;
          }
          switch ( v4 )
          {
            case 1u:
            case 3u:
              v12 = a3;
              break;
            case 4u:
              v12 = 0LL;
              break;
            case 5u:
              v13 = a3;
              v12 = 0LL;
LABEL_23:
              v27 = v12;
              if ( v13 )
              {
                v14 = PspValidateJobChainLimits(v13, v12, NextJobProcess, 0LL);
                if ( v14 < 0 )
                {
LABEL_109:
                  CurrentThread = v28;
                  goto LABEL_43;
                }
              }
LABEL_25:
              v14 = PspEstablishJobHierarchy((PVOID)BugCheckParameter3);
              if ( v14 >= 0 )
              {
                if ( NextJobProcess )
                {
                  if ( (*(_DWORD *)(BugCheckParameter3 + 1536) & 0x1000) != 0 )
                  {
                    v21 = 0LL;
                    do
                    {
                      if ( (*((_DWORD *)&NextJobProcess[2].Affinity.StaticBitmap[28] + (int)v21) & 0x7FFFFFFF) != 0 )
                        PspChargeJobWakeCounter(
                          (char *)BugCheckParameter3,
                          (char *)a3,
                          v21,
                          *((_DWORD *)&NextJobProcess[2].Affinity.StaticBitmap[28] + (int)v21) & 0x7FFFFFFF,
                          0,
                          0LL,
                          6451018LL);
                      _interlockedbittestandset(
                        (volatile signed __int32 *)&NextJobProcess[2].Affinity.StaticBitmap[28] + v21,
                        0x1Fu);
                      v21 = (unsigned int)(v21 + 1);
                    }
                    while ( (unsigned int)v21 < 7 );
                    if ( (HIDWORD(NextJobProcess[2].ReadyListHead.Flink) & 0x7FFFFFFF) != 0 )
                      PspChargeJobWakeCounter(
                        (char *)BugCheckParameter3,
                        (char *)a3,
                        0,
                        HIDWORD(NextJobProcess[2].ReadyListHead.Flink) & 0x7FFFFFFF,
                        4,
                        0LL,
                        6451018LL);
                    _interlockedbittestandset(
                      (volatile signed __int32 *)&NextJobProcess[2].ReadyListHead.Flink + 1,
                      0x1Fu);
                  }
                  if ( (_InterlockedExchangeAdd64(
                          (volatile signed __int64 *)&NextJobProcess[1].Header.Lock,
                          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)&NextJobProcess[1].Header.Lock);
                  KeAbPostRelease((ULONG_PTR)&NextJobProcess[1]);
                  v4 = v25;
                  v15 = v5 | 8;
                  v16 = v27;
                  if ( v25 == 4 )
                    v16 = a3;
                  PspIncrementJobChainProcessCounts(v13, v16, NextJobProcess, 0LL);
                  PspApplyJobChainLimitsToProcess(BugCheckParameter3, a3, (__int64)NextJobProcess);
                  CurrentThread = v28;
                  PspUnlockJobsAndProcessExclusive(v33, 0LL, v28);
                  v5 = v15 & 0xFB;
                  if ( (*(_DWORD *)(BugCheckParameter3 + 1536) & 0x1000000) == 0 )
                  {
                    PsQueryProcessAttributes((__int64)NextJobProcess, (__int64)v24, 0LL);
                    if ( v24[0] )
                      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1536), 0x1000000u);
                    else
                      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1536), 0x1800000u);
                    v4 = v25;
                  }
                  v14 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess);
                  if ( v14 >= 0 )
                  {
                    v17 = 0LL;
                    if ( v4 == 5 )
                      v17 = 4LL;
                    if ( (unsigned int)MmAssignProcessToJob(NextJobProcess, a3, v17) )
                    {
                      PspUnlockJobAssignment(CurrentThread);
                      --CurrentThread->KernelApcDisable;
                      v5 &= ~2u;
                      PspChangeProcessExecutionState(NextJobProcess);
                      KeLeaveCriticalRegionThread((__int64)CurrentThread);
                      if ( !*(_DWORD *)(BugCheckParameter3 + 544) )
                        goto LABEL_41;
                      v23 = *(_DWORD *)(BugCheckParameter3 + 576);
                      DWORD2(v29) = 1;
                      *(_QWORD *)&v29 = BugCheckParameter3;
                      v30 = NextJobProcess;
                      v26 = v23;
                      if ( v23 > 0xFFFFFFFD
                        || (PspLockJobExclusive(BugCheckParameter3, (__int64)CurrentThread),
                            v14 = PsInvokeWin32Callout(6LL, &v29, 1LL, &v26),
                            PspUnlockJob(BugCheckParameter3, (__int64)CurrentThread),
                            v14 >= 0) )
                      {
LABEL_41:
                        if ( v4 == 5 )
                        {
                          v14 = -1073741267;
                          v5 |= 0x20u;
                        }
                      }
                    }
                    else
                    {
                      v14 = -1073741756;
                    }
                  }
                  goto LABEL_43;
                }
                v14 = 0;
              }
              goto LABEL_109;
            default:
              v13 = 0LL;
              v27 = 0LL;
              goto LABEL_25;
          }
          v13 = BugCheckParameter3;
          goto LABEL_23;
        }
        v4 = v25;
        v14 = -1073741790;
LABEL_43:
        v18 = -1073741558;
        goto LABEL_44;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(BugCheckParameter3, NextJobProcess, a3, &v25);
      v4 = v25;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v25 == a4 )
        {
          if ( v25 != 2 )
            goto LABEL_10;
          v14 = 0;
        }
        else
        {
          v14 = -1073741267;
        }
        goto LABEL_43;
      }
    }
    v14 = -1073741790;
    goto LABEL_43;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink) )
  {
    v5 |= 0x10u;
    goto LABEL_6;
  }
  v18 = -1073741558;
  v14 = -1073741558;
LABEL_44:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink);
  if ( (v5 & 0x20) == 0 && v14 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, BugCheckParameter3, v14);
    if ( v14 != -1073741558 )
      v18 = -1073741756;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, 0xAu, v18);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v33, NextJobProcess, CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment(CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v14;
}
