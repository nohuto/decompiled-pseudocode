/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140258040
 * Callers:
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140259218 (KiCheckForMaxOverQuotaScb.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14025923C (KiGroupSchedulingGenerationEnd.c)
 *     KiComputeGroupSchedulingRank @ 0x1402594A0 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x140259B84 (KiShouldPreemptionBeDeferred.c)
 *     KiSelectReadyThread @ 0x1402C7F90 (KiSelectReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F4130 (KiAddThreadToPrcbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14030DA40 (KiCheckMaxOverQuotaTransition.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403435F4 (KiInsertDeferredPreemptionApc.c)
 *     KiChooseLowestRankedThread @ 0x14035C520 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14035CD9C (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x14035D254 (KiAddThreadToScbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14035DE50 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r15
  unsigned __int64 v7; // rsi
  char v8; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // r12
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rsi
  char v17; // al
  char v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rdi
  int ThreadEffectiveRankNonZero; // eax
  __int64 v22; // rcx
  __int64 ready; // rax
  __int64 v24; // rdi
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KPRCB *v30; // rdi
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  char v38; // cl
  __int64 v39; // rax
  bool v40; // al
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  bool IsThreadRankNonZero; // al
  char v46; // cl
  __int64 v47; // rax
  __int64 v48; // rdx
  bool v49; // zf
  __int64 v50; // r10
  __int64 v51; // r10
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  char v56; // [rsp+30h] [rbp-58h] BYREF
  int v57; // [rsp+34h] [rbp-54h] BYREF
  int v58; // [rsp+38h] [rbp-50h] BYREF
  __int64 v59; // [rsp+40h] [rbp-48h]
  __int64 v60; // [rsp+48h] [rbp-40h]
  char v61; // [rsp+90h] [rbp+8h]

  v4 = 0LL;
  v5 = a2;
  v59 = 0LL;
  LOBYTE(a2) = 0;
  v56 = 0;
  v61 = 0;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v57 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v41 = SchedulerAssist[6];
      SchedulerAssist[6] = v41 + 1;
      if ( v41 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v36 = CurrentPrcb->SchedulerAssist;
    if ( v36 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v42 = v36[6] - 1;
        v36[6] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v57, a2, v4, a4);
    while ( *(_QWORD *)(a1 + 48) );
    v37 = CurrentPrcb->SchedulerAssist;
    if ( v37 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v43 = v37[6];
        v37[6] = v43 + 1;
        if ( v43 == -1 )
          goto LABEL_70;
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v60 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
      v13 += *(unsigned int *)(a1 + 216);
  }
  if ( v7 > *(_QWORD *)(a1 + 33624) )
  {
    KiGroupSchedulingGenerationEnd(a1, v7, 0LL);
    return;
  }
  v14 = *(_QWORD *)(v5 + 104);
  v15 = v14;
  v59 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(a1 + 216) + v14;
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_BYTE *)(v16 + 112);
        if ( (v17 & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v15, a1, v16);
        if ( (*(_BYTE *)(v16 + 112) & 4) == 0 )
          goto LABEL_16;
        v10 = 1;
        v8 = 1;
        if ( v13 != v16 )
          goto LABEL_16;
        v18 = 1;
        v61 = 1;
LABEL_17:
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
        {
          v19 = *(_QWORD *)(v5 + 104);
          v20 = v60;
          if ( v19 )
            v19 += *(unsigned int *)(a1 + 216);
          if ( !v10 || v60 )
          {
            if ( v8 && v60 && v13 )
            {
              if ( v13 == v19 )
                goto LABEL_41;
              while ( v13 )
              {
                v13 = *(_QWORD *)(v13 + 408);
                if ( v13 == v19 )
                  goto LABEL_41;
              }
              if ( !v19 || v18 )
              {
LABEL_41:
                v34 = KiChooseLowestRankedThread(a1, v60, (unsigned int)(*(char *)(v60 + 195) + 1));
                if ( v34 )
                {
                  *(_BYTE *)(v20 + 388) = 1;
                  *(_DWORD *)(v20 + 436) = MEMORY[0xFFFFF78000000320];
                  if ( (*(_BYTE *)(v34 + 2) & 4) == 0
                    || (IsThreadRankNonZero = KiIsThreadRankNonZero(v34, (struct _KPRCB *)a1),
                        v46 = 1,
                        !IsThreadRankNonZero) )
                  {
                    v46 = *(_BYTE *)(v34 + 195);
                  }
                  **(_BYTE **)(a1 + 56) = v46;
                  v47 = *(_QWORD *)(a1 + 33976);
                  if ( v47 )
                  {
                    v48 = (unsigned int)KiVpThreadSystemWorkPriority;
                    if ( v34 != *(_QWORD *)(a1 + 24) )
                      v48 = (unsigned int)v46;
                    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v48, 0LL);
                    v47 = *(_QWORD *)(a1 + 33976);
                  }
                  v49 = v34 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v34;
                  if ( v47 )
                    *(_BYTE *)(v47 + 16) = v49;
                  if ( *(_BYTE *)(v34 + 388) == 1 )
                    *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132)
                                           - *(_DWORD *)(v34 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v34 + 388) = 3;
                  v50 = *(_QWORD *)(v20 + 104);
                  if ( v50 )
                    v50 += *(unsigned int *)(a1 + 216);
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v20, v50, v35, 1, (bool *)&v56) )
                    KiAddThreadToScbQueue(a1, v51, v20, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v20, *(char *)(v20 + 195), 1, v56);
                }
              }
            }
          }
          else
          {
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v19, v4, 1, 0LL);
            v22 = (unsigned int)*(char *)(v5 + 195);
            if ( ThreadEffectiveRankNonZero )
              ready = KiChooseLowestRankedThread(a1, v5, (unsigned int)v22);
            else
              ready = KiSelectReadyThread(v22, a1);
            v24 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) == 0
                || (v40 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1), v38 = 1, !v40) )
              {
                v38 = *(_BYTE *)(v24 + 195);
              }
              **(_BYTE **)(a1 + 56) = v38;
              v39 = *(_QWORD *)(a1 + 33976);
              if ( v39 )
              {
                v44 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v24 != *(_QWORD *)(a1 + 24) )
                  v44 = (unsigned int)v38;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v44, 0LL);
                v39 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v24;
              if ( v39 )
                *(_BYTE *)(v39 + 16) = v24 == *(_QWORD *)(a1 + 24);
              if ( *(_BYTE *)(v24 + 388) == 1 )
                *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v24 + 388) = 3;
            }
          }
          if ( v19 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(v5) )
            {
              if ( (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v25 = KeGetCurrentPrcb();
                v26 = v25->SchedulerAssist;
                if ( v26 )
                {
                  if ( v25->NestingLevel <= 1u )
                  {
                    v52 = v26[6] - 1;
                    v26[6] = v52;
                    if ( !v52 )
                      KiRemoveSystemWorkPriorityKick(v25);
                  }
                }
                KiInsertDeferredPreemptionApc(a1, v5, 0LL);
                v30 = KeGetCurrentPrcb();
                v58 = 0;
                v31 = v30->SchedulerAssist;
                if ( v31 )
                {
                  if ( v30->NestingLevel <= 1u )
                  {
                    v53 = v31[6];
                    v31[6] = v53 + 1;
                    if ( v53 == -1 )
LABEL_106:
                      KiRemoveSystemWorkPriorityKick(v30);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  v32 = v30->SchedulerAssist;
                  if ( v32 )
                  {
                    if ( v30->NestingLevel <= 1u )
                    {
                      v54 = v32[6] - 1;
                      v32[6] = v54;
                      if ( !v54 )
                        KiRemoveSystemWorkPriorityKick(v30);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v58, v27, v28, v29);
                  while ( *(_QWORD *)(a1 + 48) );
                  v33 = v30->SchedulerAssist;
                  if ( v33 )
                  {
                    if ( v30->NestingLevel <= 1u )
                    {
                      v55 = v33[6];
                      v33[6] = v55 + 1;
                      if ( v55 == -1 )
                        goto LABEL_106;
                    }
                  }
                }
              }
            }
            else if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v19) && !*(_QWORD *)(a1 + 16) )
            {
              KiSelectNextThread((struct _KPRCB *)a1, a4);
            }
          }
          return;
        }
        v15 = v16 - *(unsigned int *)(a1 + 216);
        v59 = v15;
      }
      if ( (v17 & 2) == 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v16, v15) )
        {
          if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
          {
            LOBYTE(v4) = 1;
            KiRemoveSchedulingGroupQueue(a1, v16, v4);
          }
        }
        else
        {
          if ( *(_QWORD *)v16 < *(_QWORD *)(v16 + 24) )
          {
            if ( a3 )
              v10 = 1;
            goto LABEL_16;
          }
          KiRecomputeGroupSchedulingRank(v15, v16, a1);
          if ( v13 == v16 )
          {
            v10 = 1;
            v61 = 1;
            v8 = 1;
            goto LABEL_16;
          }
        }
      }
      v10 = 1;
      v8 = 1;
LABEL_16:
      v18 = v61;
      goto LABEL_17;
    }
  }
}
