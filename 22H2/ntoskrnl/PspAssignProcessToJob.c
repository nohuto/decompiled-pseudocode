/*
 * XREFs of PspAssignProcessToJob @ 0x14071E800
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14071E780 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14060514C (PspApplyJobChainLimitsToProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     PspLockJobAssignment @ 0x140616484 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x1406164B0 (PspUnlockJobAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x140618278 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140618BD4 (PspLockJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     PspIsSetJobIoAttribution @ 0x14065DAC0 (PspIsSetJobIoAttribution.c)
 *     PspGetNextJobProcess @ 0x14068EDB0 (PspGetNextJobProcess.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406A54AC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14071EC9C (PspUnlockJobsAndProcessExclusive.c)
 *     PspIncrementJobChainProcessCounts @ 0x14071ED18 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x14071EDDC (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x14071F290 (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14071F3A8 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14071F434 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobAssignmentDisposition @ 0x14071FA48 (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x14071FB3C (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14071FBBC (PspGetJobLockHierarchyForAssignment.c)
 *     PspIsJobMovable @ 0x140908FD4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x14090924C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(ULONG_PTR a1, PEPROCESS Process, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  PEPROCESS NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  ULONG_PTR v15; // r12
  int v16; // edi
  __int64 v17; // rdi
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  _DWORD *v23; // r9
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned int v28; // r13d
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  char v32[4]; // [rsp+40h] [rbp-59h] BYREF
  int v33; // [rsp+44h] [rbp-55h] BYREF
  __int64 v34; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v35; // [rsp+50h] [rbp-49h]
  unsigned int v36; // [rsp+58h] [rbp-41h] BYREF
  __int128 v37; // [rsp+60h] [rbp-39h] BYREF
  PEPROCESS v38; // [rsp+70h] [rbp-29h]
  __int128 v39; // [rsp+78h] [rbp-21h] BYREF
  __int64 v40; // [rsp+88h] [rbp-11h]
  int v41[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v42; // [rsp+A0h] [rbp+7h]
  __int64 v43; // [rsp+B0h] [rbp+17h]

  v32[0] = 0;
  v38 = 0LL;
  v4 = 0;
  v40 = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  v5 = 0;
  NextJobProcess = Process;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v33 = 0;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  if ( a4 == 5 )
  {
    a3 = Process[1].Affinity.Bitmap[16];
    NextJobProcess = (PEPROCESS)PspGetNextJobProcess(a1, (__int64)CurrentThread, &v39, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(a1, CurrentThread, &v39, NextJobProcess);
    v4 = v33;
  }
  if ( !NextJobProcess )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment(a1, (_DWORD)NextJobProcess, a3, a4, (__int64)v41);
    v5 |= 6u;
    PspLockJobAssignment((__int64)CurrentThread);
    PspLockJobsAndProcessExclusive(v41, NextJobProcess, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(a1) )
      {
        v30 = NextJobProcess[1].Affinity.Bitmap[16];
        v33 = 5;
        if ( v30 == a1 && (HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v4 = v33;
          goto LABEL_10;
        }
        v4 = v33;
        v16 = -1073741790;
LABEL_59:
        v28 = -1073741558;
        goto LABEL_60;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(a1, NextJobProcess, a3, &v33);
      v4 = v33;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v33 == a4 )
        {
          if ( v33 != 2 )
          {
LABEL_10:
            if ( NextJobProcess && v4 != 5 )
            {
              a3 = NextJobProcess[1].Affinity.Bitmap[16];
              v4 = v33;
            }
            if ( v4 == 4
              && (*(_DWORD *)(a1 + 1320) & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1320) & 0x10) != 0 || !PspDoesJobHierarchyPermitUILimits((_QWORD *)a3, 1))
              || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(a1, a3, NextJobProcess, v4)
              || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(a1, a3, NextJobProcess, v4) )
            {
              goto LABEL_90;
            }
            v12 = 4294967292LL;
            if ( v4 == 5 )
            {
              if ( (*(_DWORD *)(a1 + 848) & 1) != 0 )
                goto LABEL_90;
            }
            else if ( ((v4 - 4) & 0xFFFFFFFC) != 0 || v4 == 6 )
            {
LABEL_20:
              if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
              {
                v13 = 0;
                while ( (unsigned int)(v13 - 1) <= 1
                     || (*(_DWORD *)(a1 + 1320) & 0x2000000) == 0
                     || (*(_DWORD *)(a3 + 1320) & 0x2000000) == 0 )
                {
                  if ( ++v13 >= 3 )
                    goto LABEL_25;
                }
                goto LABEL_90;
              }
LABEL_25:
              if ( ((v4 - 4) & 0xFFFFFFFC) != 0
                || v4 == 6
                || !*(_DWORD *)(a3 + 1348) && !PspIsSetJobIoAttribution((_QWORD *)a3, 4294967292LL, 1)
                || !*(_DWORD *)(a1 + 1348) && !PspIsSetJobIoAttribution((_QWORD *)a1, v12, 0) )
              {
                switch ( v4 )
                {
                  case 1u:
                  case 3u:
                    v14 = a3;
                    break;
                  case 4u:
                    v14 = 0LL;
                    break;
                  case 5u:
                    v15 = a3;
                    v14 = 0LL;
LABEL_32:
                    v34 = v14;
                    if ( v15 )
                    {
                      v16 = PspValidateJobChainLimits(v15, v14, NextJobProcess, 0LL);
                      if ( v16 < 0 )
                      {
LABEL_102:
                        CurrentThread = v35;
                        goto LABEL_59;
                      }
                    }
LABEL_34:
                    v16 = PspEstablishJobHierarchy((PVOID)a1);
                    if ( v16 >= 0 )
                    {
                      if ( NextJobProcess )
                      {
                        if ( (*(_DWORD *)(a1 + 1320) & 0x1000) != 0 )
                        {
                          v17 = 0LL;
                          do
                          {
                            if ( (*((_DWORD *)&NextJobProcess[2].AffinityPadding[8] + (int)v17) & 0x7FFFFFFF) != 0 )
                              PspChargeJobWakeCounter(
                                (char *)a1,
                                (char *)a3,
                                v17,
                                *((_DWORD *)&NextJobProcess[2].AffinityPadding[8] + (int)v17) & 0x7FFFFFFF,
                                0,
                                0LL,
                                6451018LL);
                            _interlockedbittestandset(
                              (volatile signed __int32 *)&NextJobProcess[2].AffinityPadding[8] + v17,
                              0x1Fu);
                            v17 = (unsigned int)(v17 + 1);
                          }
                          while ( (unsigned int)v17 < 7 );
                          if ( (HIDWORD(NextJobProcess[2].ReadyListHead.Flink) & 0x7FFFFFFF) != 0 )
                            PspChargeJobWakeCounter(
                              (char *)a1,
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
                        v4 = v33;
                        v18 = v5 | 8;
                        v19 = v34;
                        if ( v33 == 4 )
                          v19 = a3;
                        PspIncrementJobChainProcessCounts(v15, v19, NextJobProcess, 0LL);
                        PspApplyJobChainLimitsToProcess(a1, a3, (__int64)NextJobProcess);
                        CurrentThread = v35;
                        PspUnlockJobsAndProcessExclusive(v41, 0LL, v35);
                        v5 = v18 & 0xFB;
                        if ( (*(_DWORD *)(a1 + 1320) & 0x1000000) == 0 )
                        {
                          PsQueryProcessAttributes(NextJobProcess, (__int64)v32, 0LL);
                          if ( v32[0] )
                            _InterlockedOr((volatile signed __int32 *)(a1 + 1320), 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)(a1 + 1320), 0x1800000u);
                          v4 = v33;
                        }
                        v16 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess, v20, v21, v22);
                        if ( v16 >= 0 )
                        {
                          v24 = 0;
                          if ( v4 == 5 )
                            v24 = 4;
                          if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v24, v23) )
                          {
                            PspUnlockJobAssignment((__int64)CurrentThread);
                            v5 &= ~2u;
                            --CurrentThread->KernelApcDisable;
                            PspChangeProcessExecutionState(NextJobProcess, v25, v26, v27);
                            KeLeaveCriticalRegionThread((__int64)CurrentThread);
                            if ( !*(_DWORD *)(a1 + 448) )
                              goto LABEL_57;
                            v31 = *(_DWORD *)(a1 + 480);
                            DWORD2(v37) = 1;
                            *(_QWORD *)&v37 = a1;
                            v38 = NextJobProcess;
                            v36 = v31;
                            if ( v31 <= 0xFFFFFFFD )
                            {
                              PspLockJobExclusive(a1, (__int64)CurrentThread);
                              v16 = PsInvokeWin32Callout(6, (__int64)&v37, 1, (__int64)&v36);
                              PspUnlockJob(a1, (__int64)CurrentThread);
                            }
                            if ( v16 >= 0 )
                            {
LABEL_57:
                              if ( v4 == 5 )
                              {
                                v16 = -1073741267;
                                v5 |= 0x20u;
                              }
                            }
                          }
                          else
                          {
                            v16 = -1073741756;
                          }
                        }
                        goto LABEL_59;
                      }
                      v16 = 0;
                    }
                    goto LABEL_102;
                  default:
                    v15 = 0LL;
                    v34 = 0LL;
                    goto LABEL_34;
                }
                v15 = a1;
                goto LABEL_32;
              }
LABEL_90:
              v16 = -1073741637;
              goto LABEL_59;
            }
            if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
              goto LABEL_90;
            goto LABEL_20;
          }
          v16 = 0;
        }
        else
        {
          v16 = -1073741267;
        }
        goto LABEL_59;
      }
    }
    v16 = -1073741790;
    goto LABEL_59;
  }
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink) )
  {
    v5 |= 0x10u;
    goto LABEL_6;
  }
  v28 = -1073741558;
  v16 = -1073741558;
LABEL_60:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink);
  if ( (v5 & 0x20) == 0 && v16 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, a1, v16);
    if ( v16 != -1073741558 )
      v28 = -1073741756;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, 0xAu, v28);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v41, NextJobProcess, CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v16;
}
