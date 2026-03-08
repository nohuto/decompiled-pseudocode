/*
 * XREFs of KiSetPriorityThread @ 0x1402273F0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     KeInsertPriQueue @ 0x14033F6C0 (KeInsertPriQueue.c)
 *     KiSetPriorityBoost @ 0x1403512FC (KiSetPriorityBoost.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14035538C (KiTryUnwaitThreadWithPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140227EF4 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402AE590 (KiPrepareReadyThreadForRescheduling.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x14040A730 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // eax
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char v13; // al
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  int v20; // r14d
  int v21; // ebx
  char v22; // r12
  int v23; // r13d
  int v24; // edx
  struct _SINGLE_LIST_ENTRY *v25; // r8
  struct _KPRCB *v26; // rcx
  char v27; // r15
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rbx
  bool v32; // r9
  unsigned __int64 v33; // r13
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _WORD *v38; // rcx
  __int64 v39; // rcx
  int v40; // r15d
  struct _KPRCB *v41; // rcx
  char v42; // al
  __int64 v43; // r15
  _SINGLE_LIST_ENTRY *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // r8
  int v47; // ecx
  _BYTE *v48; // rax
  unsigned int v49; // ecx
  __int64 *v50; // rsi
  __int64 v51; // r15
  _QWORD *v52; // rbx
  _BYTE *v53; // r14
  char IsThreadRankNonZero; // al
  char v55; // cl
  char v56; // al
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned int v59; // edx
  char v60; // al
  char v61; // al
  char v62; // cl
  int v63; // edx
  _QWORD *v64; // r8
  unsigned int v65; // ecx
  _QWORD *v66; // rax
  unsigned int v67; // edi
  unsigned int v68; // ebx
  unsigned __int8 *v69; // rdx
  unsigned __int8 v70; // al
  __int64 v71; // r15
  unsigned __int64 *v72; // r8
  int v73; // edx
  unsigned __int64 v74; // r9
  unsigned __int64 v76; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+38h] [rbp-C8h]
  __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  int v79; // [rsp+4Ch] [rbp-B4h]
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+58h] [rbp-A8h]
  int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  int v83; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v84; // [rsp+68h] [rbp-98h]
  struct _KPRCB *v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  _QWORD v87[42]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_DWORD *)(a1 + 856);
  LODWORD(v80) = a3;
  v76 = a2;
  if ( v3 )
  {
    _BitScanReverse(&v3, v3);
    v81 = v3;
    a3 = (unsigned __int8)a3;
    if ( (char)a3 < (char)v3 )
      a3 = (unsigned __int8)v3;
    LODWORD(v80) = a3;
  }
  v5 = *(char *)(a1 + 195);
  v79 = (char)a3;
  if ( v5 == (char)a3 )
    return 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int8 *)(a1 + 388);
  v78 = 0LL;
  v9 = v8;
  if ( v8 > 5 )
    goto LABEL_36;
  while ( 1 )
  {
    v7 = 0LL;
    v6 = 0LL;
    v10 = v9 - 1;
    if ( v10 )
      break;
    v17 = *(unsigned int *)(a1 + 536);
    if ( (int)v17 >= 0 )
    {
      v7 = KiProcessorBlock[v17];
      KiAcquirePrcbLocksForIsolationUnit(v7, 0LL, &v78);
      if ( *(_BYTE *)(a1 + 388) == 1 )
      {
        v15 = *(_DWORD *)(a1 + 536) == (_DWORD)v17;
        goto LABEL_31;
      }
LABEL_32:
      KiReleasePrcbLocksForIsolationUnit(&v78);
      goto LABEL_33;
    }
    v18 = (unsigned int)v17;
    v82 = 0;
    LODWORD(v18) = v17 & 0x7FFFFFFF;
    v6 = *(volatile signed __int32 **)(KiProcessorBlock[v18] + 34888);
    while ( _interlockedbittestandset64(v6, 0LL) )
    {
      do
        KeYieldProcessorEx(&v82);
      while ( *(_QWORD *)v6 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      goto LABEL_36;
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
LABEL_33:
    v8 = *(unsigned __int8 *)(a1 + 388);
    v7 = 0LL;
    v6 = 0LL;
    v9 = v8;
    if ( v8 > 5 )
      goto LABEL_36;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_14:
    v14 = *(unsigned int *)(a1 + 536);
    if ( (int)v14 >= 0 )
    {
      v7 = KiProcessorBlock[v14];
      KiAcquirePrcbLocksForIsolationUnit(v7, 0LL, &v78);
      v15 = a1 == *(_QWORD *)(v7 + 8);
LABEL_31:
      if ( v15 )
        goto LABEL_36;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 2 )
      goto LABEL_36;
    v13 = *(_BYTE *)(a1 + 112) & 7;
    if ( v13 == 1 || (unsigned __int8)(v13 - 3) <= 3u )
      goto LABEL_36;
    LOBYTE(v8) = 2;
    goto LABEL_14;
  }
  v16 = *(unsigned int *)(a1 + 536);
  if ( (int)v16 < 0 )
    goto LABEL_33;
  v7 = KiProcessorBlock[v16];
  KiAcquirePrcbLocksForIsolationUnit(v7, 0LL, &v78);
  if ( a1 != *(_QWORD *)(v7 + 16) )
  {
    if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      __fastfail(0x1Eu);
    goto LABEL_32;
  }
  v6 = 0LL;
LABEL_36:
  v77 = v7;
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v84 = v6;
  v21 = *(char *)(a1 + 195);
  v22 = 0;
  v83 = 0;
  v23 = v21;
  v85 = CurrentPrcb;
  memset(v87, 0, sizeof(v87));
  if ( (unsigned __int8)v8 == 1 )
  {
    v31 = v77;
    KiRemoveThreadFromAnyReadyQueue(v77, v84, a1, (unsigned int)v23);
    KiUpdateThreadPriority(0, v63, a1, v79, 0);
    v33 = v76;
    KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v79, v76);
    v32 = 0;
    goto LABEL_51;
  }
  if ( (unsigned __int8)v8 != 2 )
  {
    if ( (unsigned __int8)v8 != 3 )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v80;
      if ( (char)v80 > (char)v21 )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v25 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
          if ( *(_QWORD *)(a1 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = &v26->AbPropagateBoostsList;
            if ( v26 != (struct _KPRCB *)-35704LL )
            {
              v25->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v25;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
              KiAbQueueAutoBoostDpc(v26);
            }
          }
        }
      }
      *(_BYTE *)(a1 + 195) = v27;
      v29 = KiComputeHeteroThreadQos(a1, 0LL, v25);
      if ( v29 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
        KiSetThreadQosLevelUnsafe(a1, v29);
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v30) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v30);
      }
      v31 = v77;
      goto LABEL_49;
    }
    v31 = v77;
    v40 = v79;
    KiUpdateThreadPriority(v77, v24, a1, v79, 1);
    if ( v40 >= v23 )
      v20 = v40;
    v32 = v40 < v23;
LABEL_50:
    v33 = v76;
    goto LABEL_51;
  }
  v41 = KeGetCurrentPrcb();
  v42 = v80;
  v43 = *(_QWORD *)(v77 + 16);
  v86 = v43;
  if ( (char)v80 > (char)v21 )
  {
    if ( *(_BYTE *)(a1 + 793) )
    {
      v25 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
      if ( *(_QWORD *)(a1 + 808) == 1LL )
      {
        v44 = &v41->AbPropagateBoostsList;
        if ( v41 != (struct _KPRCB *)-35704LL )
        {
          v25->Next = v44->Next;
          v44->Next = v25;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
          KiAbQueueAutoBoostDpc(v41);
          v42 = v80;
        }
      }
    }
  }
  *(_BYTE *)(a1 + 195) = v42;
  v45 = KiComputeHeteroThreadQos(a1, 0LL, v25);
  if ( v45 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1, v45);
  v31 = v77;
  if ( !v43 )
  {
    v47 = *(_DWORD *)(a1 + 120) >> 1;
    v80 = v77;
    if ( (v47 & 1) != 0 )
    {
      v48 = *(_BYTE **)(v77 + 34904);
      v49 = (unsigned __int8)*v48;
      v50 = (__int64 *)(v48 + 8);
      if ( *v48 )
        goto LABEL_69;
    }
    else
    {
      v50 = &v80;
      v49 = 1;
LABEL_69:
      v51 = v49;
      v22 = 0;
      do
      {
        v52 = (_QWORD *)*v50;
        v53 = *(_BYTE **)(*v50 + 56);
        if ( (*(_BYTE *)(a1 + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, *v50), v55 = 1, !IsThreadRankNonZero) )
        {
          v55 = *(_BYTE *)(a1 + 195);
        }
        v56 = v55 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
        *v53 = v56;
        v57 = v52[4375];
        if ( v57 )
        {
          if ( a1 == v52[3] )
            v58 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v58 = v56 & 0x7F;
          KiSetSchedulerAssistPriority(v57, v58, 0LL);
        }
        v46 = v52[7];
        if ( KeHeteroSystem )
        {
          v59 = *(_DWORD *)(a1 + 80);
          v60 = (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(v46 + 64)) & 7 ^ *(_BYTE *)(v46 + 64);
          v61 = (v60 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v60;
          if ( v59 <= *(_DWORD *)(a1 + 84) )
            v59 = *(_DWORD *)(a1 + 84);
          v62 = 64;
          if ( v59 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v62 = 0;
          *(_BYTE *)(v46 + 64) = v62 | v61 & 0xBF;
        }
        ++v50;
        --v51;
      }
      while ( v51 );
      v20 = v83;
      v43 = v86;
      v31 = v77;
    }
    CurrentPrcb = v85;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    LOBYTE(v46) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v46);
  }
  if ( v43 )
  {
LABEL_49:
    v32 = 0;
    goto LABEL_50;
  }
  if ( v79 >= v23 )
  {
    if ( v79 <= v23 )
      goto LABEL_49;
    v32 = 0;
    v33 = v76;
    if ( *(_BYTE *)(a1 + 388) == 2 )
      v20 = v79;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 388) == 2 )
    {
      v32 = 1;
      goto LABEL_50;
    }
    v33 = v76;
    if ( (unsigned int)(*(_DWORD *)(v31 + 32472) | *(_DWORD *)(*(_QWORD *)(v31 + 34888) + 8LL)) >> (v79 + 1) )
      *(_BYTE *)(a1 + 112) |= 0x10u;
    v32 = 0;
  }
LABEL_51:
  v34 = 0;
  v35 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v36 = *(_QWORD *)(v35 + 34880);
  if ( v36 )
  {
    v37 = *(unsigned __int8 *)(v35 + 208);
    v38 = *(_WORD **)(a1 + 576);
    if ( (unsigned __int16)v37 >= *v38 )
      v39 = 0LL;
    else
      v39 = *(_QWORD *)&v38[4 * v37 + 4];
    LOBYTE(v34) = (v36 & v39) == v36;
  }
  if ( v34 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
  if ( v32 )
  {
    KiStartRescheduleContext(v87, &v78, 0LL);
    v64 = 0LL;
    v65 = 0;
    if ( LOBYTE(v87[0]) )
    {
      v66 = &v87[2];
      while ( *v66 != v31 )
      {
        ++v65;
        v66 += 5;
        if ( v65 >= LOBYTE(v87[0]) )
          goto LABEL_111;
      }
      v64 = v66;
    }
LABEL_111:
    *((_BYTE *)v64 + 34) |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v87, v33);
    v22 = 0;
    v67 = 0;
    v68 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v67 = 2;
    if ( LOBYTE(v87[0]) )
    {
      do
        v22 |= KiCommitRescheduleContextEntry(&v87[5 * v68++ + 2], CurrentPrcb, v67, v33);
      while ( v68 < LOBYTE(v87[0]) );
    }
    if ( LODWORD(v87[1]) == 1 )
    {
      v69 = *(unsigned __int8 **)(v87[2] + 34904LL);
      v70 = v69[1] + 1;
      if ( v70 >= *v69 )
        v70 = 0;
      v69[1] = v70;
    }
  }
  v71 = v77;
  if ( v77 )
  {
    v72 = 0LL;
    v73 = 0;
    v74 = v78 & 0xFFFFFFFFFFFFFFFEuLL;
    v76 = v78 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v78 & 1) == 0 )
    {
      v72 = &v76;
      v73 = 1;
      goto LABEL_126;
    }
    if ( (v78 & 1) == 1 )
    {
      v72 = (unsigned __int64 *)(*(_QWORD *)(v74 + 34904) + 8LL);
      v73 = **(unsigned __int8 **)(v74 + 34904);
    }
    while ( v73 )
LABEL_126:
      _InterlockedAnd64((volatile signed __int64 *)(v72[--v73] + 48), 0LL);
    v78 = 0LL;
  }
  if ( v84 )
    _InterlockedAnd64((volatile signed __int64 *)v84, 0LL);
  if ( v22 )
  {
    KiCompleteRescheduleContext(v87, CurrentPrcb);
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  }
  if ( v20 > 0 )
    KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v71, (unsigned int)v20);
  return 1;
}
