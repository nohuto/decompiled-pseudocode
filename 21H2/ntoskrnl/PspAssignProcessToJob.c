/*
 * XREFs of PspAssignProcessToJob @ 0x1406F5FF0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x1406F6D10 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PspIsSetJobIoAttribution @ 0x1405DAE80 (PspIsSetJobIoAttribution.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14062177C (PspDoesJobHierarchyPermitUILimits.c)
 *     PspLockJobAssignment @ 0x14067FC84 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x14067FCB0 (PspUnlockJobAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406F487C (PspApplyJobChainLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x1406F55A0 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406F56C0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1406F5884 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x1406F5948 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x1406F5E4C (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1406F5F64 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406F648C (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406F6508 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobAssignmentDisposition @ 0x1406F6B28 (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406F6C1C (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x1406F6C9C (PspGetJobLockHierarchyForAssignment.c)
 *     PspIsJobMovable @ 0x1409090E4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x14090935C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(_QWORD *Object, PEPROCESS Process, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  PEPROCESS NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // edi
  __int64 v17; // rdi
  char v18; // bl
  __int64 v19; // rdx
  char v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r13d
  _QWORD *v26; // rax
  unsigned int v27; // eax
  _BYTE v28[4]; // [rsp+40h] [rbp-59h] BYREF
  int v29; // [rsp+44h] [rbp-55h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v31; // [rsp+50h] [rbp-49h]
  unsigned int v32; // [rsp+58h] [rbp-41h] BYREF
  __int128 v33; // [rsp+60h] [rbp-39h] BYREF
  PEPROCESS v34; // [rsp+70h] [rbp-29h]
  __int128 v35; // [rsp+78h] [rbp-21h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h]
  int v37[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v38; // [rsp+A0h] [rbp+7h]
  __int64 v39; // [rsp+B0h] [rbp+17h]

  v28[0] = 0;
  v34 = 0LL;
  v4 = 0;
  v36 = 0LL;
  v39 = 0LL;
  v33 = 0LL;
  v5 = 0;
  NextJobProcess = Process;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  v29 = 0;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  if ( a4 == 5 )
  {
    a3 = Process[1].Affinity.Bitmap[16];
    NextJobProcess = (PEPROCESS)PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, &v35, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(Object, CurrentThread, &v35, NextJobProcess);
    v4 = v29;
  }
  if ( !NextJobProcess )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v37);
    v5 |= 6u;
    PspLockJobAssignment((__int64)CurrentThread);
    PspLockJobsAndProcessExclusive(v37, NextJobProcess, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(Object) )
      {
        v26 = (_QWORD *)NextJobProcess[1].Affinity.Bitmap[16];
        v29 = 5;
        if ( v26 == Object && (HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v4 = v29;
          goto LABEL_10;
        }
        v4 = v29;
        v16 = -1073741790;
LABEL_59:
        v24 = -1073741558;
        goto LABEL_60;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, NextJobProcess, a3, &v29);
      v4 = v29;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v29 == a4 )
        {
          if ( v29 != 2 )
          {
LABEL_10:
            if ( NextJobProcess && v4 != 5 )
            {
              a3 = NextJobProcess[1].Affinity.Bitmap[16];
              v4 = v29;
            }
            if ( v4 == 4
              && (Object[165] & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1320) & 0x10) != 0 || !PspDoesJobHierarchyPermitUILimits((_QWORD *)a3, 1))
              || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
              || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, (__int64)NextJobProcess, v4) )
            {
              goto LABEL_90;
            }
            v12 = 4294967292LL;
            if ( v4 == 5 )
            {
              if ( (Object[106] & 1) != 0 )
                goto LABEL_90;
            }
            else if ( ((v4 - 4) & 0xFFFFFFFC) != 0 || v4 == 6 )
            {
LABEL_20:
              if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
              {
                v13 = 0;
                while ( (unsigned int)(v13 - 1) <= 1
                     || (Object[165] & 0x2000000) == 0
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
                || !*((_DWORD *)Object + 337) && !PspIsSetJobIoAttribution(Object, v12, 0) )
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
                    v30 = v14;
                    if ( v15 )
                    {
                      v16 = PspValidateJobChainLimits(v15, v14, (__int64)NextJobProcess, 0);
                      if ( v16 < 0 )
                      {
LABEL_102:
                        CurrentThread = v31;
                        goto LABEL_59;
                      }
                    }
LABEL_34:
                    v16 = PspEstablishJobHierarchy((char *)Object, (__int64)NextJobProcess, a3, v4);
                    if ( v16 >= 0 )
                    {
                      if ( NextJobProcess )
                      {
                        if ( (Object[165] & 0x1000) != 0 )
                        {
                          v17 = 0LL;
                          do
                          {
                            if ( (*((_DWORD *)&NextJobProcess[2].AffinityPadding[8] + (int)v17) & 0x7FFFFFFF) != 0 )
                              PspChargeJobWakeCounter(
                                (char *)Object,
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
                              (char *)Object,
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
                          ExfTryToWakePushLock(&NextJobProcess[1]);
                        KeAbPostRelease((ULONG_PTR)&NextJobProcess[1]);
                        v4 = v29;
                        v18 = v5 | 8;
                        v19 = v30;
                        if ( v29 == 4 )
                          v19 = a3;
                        PspIncrementJobChainProcessCounts(v15, v19, (__int64)NextJobProcess, 0);
                        PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
                        CurrentThread = v31;
                        PspUnlockJobsAndProcessExclusive(v37, 0LL, v31);
                        v5 = v18 & 0xFB;
                        if ( (Object[165] & 0x1000000) == 0 )
                        {
                          PsQueryProcessAttributes(NextJobProcess, (__int64)v28, 0LL);
                          if ( v28[0] )
                            _InterlockedOr((volatile signed __int32 *)Object + 330, 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)Object + 330, 0x1800000u);
                          v4 = v29;
                        }
                        v16 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess);
                        if ( v16 >= 0 )
                        {
                          v20 = 0;
                          if ( v4 == 5 )
                            v20 = 4;
                          if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v20) )
                          {
                            PspUnlockJobAssignment((__int64)CurrentThread);
                            v5 &= ~2u;
                            --CurrentThread->KernelApcDisable;
                            PspChangeProcessExecutionState(NextJobProcess);
                            KeLeaveCriticalRegionThread((__int64)CurrentThread, v21, v22, v23);
                            if ( !*((_DWORD *)Object + 112) )
                              goto LABEL_57;
                            v27 = *((_DWORD *)Object + 120);
                            DWORD2(v33) = 1;
                            *(_QWORD *)&v33 = Object;
                            v34 = NextJobProcess;
                            v32 = v27;
                            if ( v27 <= 0xFFFFFFFD )
                            {
                              PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
                              v16 = PsInvokeWin32Callout(6, (__int64)&v33, 1, &v32);
                              PspUnlockJob((__int64)Object, (__int64)CurrentThread);
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
                    v30 = 0LL;
                    goto LABEL_34;
                }
                v15 = (__int64)Object;
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
  v24 = -1073741558;
  v16 = -1073741558;
LABEL_60:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink);
  if ( (v5 & 0x20) == 0 && v16 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, (ULONG_PTR)Object, v16);
    if ( v16 != -1073741558 )
      v24 = -1073741756;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, 0xAu, v24);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v37, NextJobProcess, CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v16;
}
