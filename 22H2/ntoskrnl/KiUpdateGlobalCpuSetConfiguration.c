/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x140258BE4 (KiCheckThreadAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiComputeThreadAffinity @ 0x14035D000 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiTryToAcquireThreadLock @ 0x14035E7D8 (KiTryToAcquireThreadLock.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 i; // r15
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  int v14; // r14d
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rsi
  struct _KPRCB *v18; // rcx
  char v19; // al
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  struct _KPRCB *v24; // rsi
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  char v29; // cl
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  int v40; // eax
  bool IsThreadRankNonZero; // al
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // [rsp+78h] [rbp+10h] BYREF
  int v46; // [rsp+80h] [rbp+18h] BYREF
  int v47; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v7 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v7 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v45 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[6];
            SchedulerAssist[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v27 = CurrentPrcb->SchedulerAssist;
        if ( v27 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v31 = v27[6] - 1;
            v27[6] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v45, a2, a3, a4);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v10 = *(_QWORD *)(v7 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v10, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v10 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = (__int64)v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v32 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      v22 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v33 = v23[6];
            v23[6] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
          break;
        v34 = v22->SchedulerAssist;
        if ( v34 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v35 = v34[6] - 1;
            v34[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v46, v21, v11, v12);
        while ( *(_QWORD *)(v10 + 64) );
      }
      v24 = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v36 = v25[6];
            v25[6] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v26 = v24->SchedulerAssist;
        if ( v26 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v37 = v26[6] - 1;
            v26[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v47, v21, v11, v12);
        while ( *(_QWORD *)(v7 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 868));
      if ( v10 == *(_QWORD *)(v7 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v40 = v39[6] - 1;
          v39[6] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      KiReleaseThreadLockSafe(v10);
    }
    v13 = *(_DWORD *)(v10 + 588);
    v14 = 0;
    if ( !KiCheckThreadAffinity(v10) )
    {
      KiComputeThreadAffinity(v15);
      v19 = *(_BYTE *)(v10 + 388);
      if ( v19 == 2 || v19 == 5 )
        v14 = KiRescheduleThreadAfterAffinityChange(v10, v10 + 576, 2, v7, 0LL, a1);
    }
    v16 = *(_DWORD *)(v10 + 588);
    KiReleaseThreadLockSafe(v10);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v10, 1350LL, v13, v16);
    v17 = *(_QWORD *)(v7 + 16);
    if ( v17 && !KiCheckThreadAffinity(*(_QWORD *)(v7 + 16)) )
    {
      v28 = *(_QWORD *)(v7 + 8);
      if ( (*(_BYTE *)(v28 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v7 + 8), (struct _KPRCB *)v7),
            v29 = 1,
            !IsThreadRankNonZero) )
      {
        v29 = *(_BYTE *)(v28 + 195);
      }
      **(_BYTE **)(v7 + 56) = v29;
      if ( *(_QWORD *)(v7 + 33976) )
      {
        v42 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v28 != *(_QWORD *)(v7 + 24) )
          v42 = (unsigned int)v29;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v7 + 33976), v42, 0LL);
      }
      KiSelectNextThread((struct _KPRCB *)v7, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v17 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v17);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    v18 = KeGetCurrentPrcb();
    a2 = (__int64)v18->SchedulerAssist;
    if ( a2 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v43 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( v14 )
    {
      v44 = *(unsigned int *)(v7 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v44 )
      {
        LOBYTE(a2) = 2;
        KiSendSoftwareInterrupt(v44, a2);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
