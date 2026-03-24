/*
 * XREFs of KiSetAffinityThread @ 0x14035D934
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403CABCC (KeSetAffinityProcess.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230760 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140340EE4 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140340F98 (KeSelectIdealProcessor.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x14035CFD4 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14035D000 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x14035E2C0 (KeSelectNodeForAffinity.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8280 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  struct _KPRCB *CurrentPrcb; // rbx
  __int128 *v6; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  char v15; // r15
  int v16; // r8d
  __int64 v17; // r14
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int result; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-3Ch]
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int64 *v30; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  v29 = 0LL;
  v4 = 0;
  v30 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (__int128 *)a3;
  v27 = 0;
  v31 = a2;
  v32 = 0LL;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = SchedulerAssist[6];
        SchedulerAssist[6] = v25 + 1;
        if ( v25 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v24[6] - 1;
        v24[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v27, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 196);
  v28 = *(_DWORD *)(a1 + 588);
  *(_WORD *)(a1 + 560) = *((_WORD *)v6 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v6;
  v10 = *(unsigned int *)(a1 + 196);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = KiProcessorBlock[v10];
  if ( !KiPrcbInGroupAffinity(v12, (__int64)v6) )
  {
    v13 = KeSelectNodeForAffinity(v6);
    WORD4(v32) = *((_WORD *)v6 + 4);
    *(_QWORD *)&v32 = *(_QWORD *)v6 & *(_QWORD *)(v13 + 136);
    v14 = KeSelectIdealProcessor(v13, &v32, 0LL, (unsigned int *)(v12 + 36));
    LODWORD(v10) = v14;
    *(_DWORD *)(a1 + 196) = v14;
    v11 = v14;
    v12 = KiProcessorBlock[v14];
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v17 = v29;
  }
  else
  {
    v15 = KiAcquireThreadStateLock(a1, &v29, (volatile signed __int32 **)&v30);
    *(_WORD *)(a1 + 584) = *((_WORD *)v6 + 4);
    *(_QWORD *)(a1 + 576) = *(_QWORD *)v6;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      v6 = &v32;
      WORD4(v32) = *(_WORD *)(a1 + 584);
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v10;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v12, a1);
    }
    LOBYTE(v16) = v15;
    v17 = v29;
    v18 = v30;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)v6, v16, v29, (__int64)v30, v31);
    KiReleaseThreadStateLock(v19, v17, v18);
    v11 = *(_DWORD *)(a1 + 196);
  }
  v20 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    v23 = *(unsigned int *)(v17 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v23 )
    {
      LOBYTE(v22) = 2;
      result = KiSendSoftwareInterrupt(v23, v22);
    }
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v28, v20);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v9, v11);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, v6);
  return result;
}
