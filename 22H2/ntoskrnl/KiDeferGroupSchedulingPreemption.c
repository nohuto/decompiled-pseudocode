/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x140259970
 * Callers:
 *     KiDispatchInterrupt @ 0x140405BD0 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x140259B84 (KiShouldPreemptionBeDeferred.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F4130 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403435F4 (KiInsertDeferredPreemptionApc.c)
 *     KiPrcbInGroupAffinity @ 0x14035CFD4 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x14035D254 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rbp
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  bool IsThreadRankNonZero; // al
  char v17; // cl
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // edx
  int v25; // eax
  char v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v27 = 0;
  v26 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = SchedulerAssist[6];
        SchedulerAssist[6] = v21 + 1;
        if ( v21 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v20[6] - 1;
        v20[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v27, v4, v5, v6);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v10 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v12 = *(_QWORD *)(v10 + 104)) == 0
     || (v12 += *(unsigned int *)(a2 + 216)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v10, v12, v11, 1, (bool *)&v26)) == 0)
    && *(_BYTE *)(v10 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 && v13->NestingLevel <= 1u )
    {
      v25 = v14[6] - 1;
      v14[6] = v25;
      if ( !v25 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, (struct _KPRCB *)a2), v17 = 1, !IsThreadRankNonZero) )
  {
    v17 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v17;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v23 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v23 = (unsigned int)v17;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v23, 0LL);
  }
  *(_BYTE *)(v10 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v12, v10, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v10, *(char *)(v10 + 195), 1, v26);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v24 = v19[6] - 1;
      v19[6] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
