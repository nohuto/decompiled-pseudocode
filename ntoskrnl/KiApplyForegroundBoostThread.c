/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1402E3178
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403CACA0 (KiProcessPendingForegroundBoosts.c)
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

char __fastcall KiApplyForegroundBoostThread(__int64 a1, unsigned __int64 a2)
{
  char v2; // r12
  char v4; // r15
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rsi
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r13
  volatile signed __int64 *v10; // r14
  char v11; // dl
  char v12; // si
  int v13; // edi
  int v14; // r12d
  int v15; // edx
  struct _KPRCB *v16; // rcx
  struct _SINGLE_LIST_ENTRY *v17; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r11
  int v22; // esi
  bool v23; // r9
  _QWORD *v24; // r12
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _WORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  struct _KPRCB *v35; // rcx
  struct _SINGLE_LIST_ENTRY *v36; // r8
  _SINGLE_LIST_ENTRY *v37; // rdx
  unsigned int v38; // eax
  _KPRIORITY_STATE *v39; // r8
  int v40; // ecx
  _BYTE *v41; // rax
  unsigned int v42; // ecx
  struct _KPRCB **v43; // r14
  __int64 v44; // r10
  struct _KPRCB *v45; // rsi
  unsigned __int8 *PriorityState; // r15
  char v47; // cl
  bool IsThreadRankNonZero; // al
  unsigned __int8 v49; // al
  void *SchedulerAssist; // rcx
  __int64 v51; // rdx
  unsigned int v52; // edx
  char v53; // al
  char v54; // al
  int v55; // edx
  _QWORD *v56; // rdx
  unsigned int v57; // ecx
  _QWORD *v58; // rax
  char v59; // r15
  char v60; // di
  __int64 v61; // rbx
  struct _KPRCB *v62; // r14
  unsigned __int64 *v63; // r8
  int v64; // edx
  unsigned __int64 v65; // r9
  __int64 v66; // rbx
  unsigned __int64 v68; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C0h] BYREF
  int v70; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v71; // [rsp+50h] [rbp-B0h]
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h]
  __int64 v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v76[42]; // [rsp+80h] [rbp-80h] BYREF

  v68 = a2;
  v2 = 0;
  v69 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)(a1 + 388);
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_9:
          v8 = *(unsigned int *)(a1 + 536);
          if ( (int)v8 >= 0 )
          {
            v5 = KiProcessorBlock[v8];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v69);
            if ( a1 == *(_QWORD *)(v5 + 8) )
              goto LABEL_11;
            goto LABEL_51;
          }
          break;
        case 3:
          v31 = *(unsigned int *)(a1 + 536);
          if ( (int)v31 >= 0 )
          {
            v5 = KiProcessorBlock[v31];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v69);
            if ( a1 == *(_QWORD *)(v5 + 16) )
              goto LABEL_11;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v31 )
              __fastfail(0x1Eu);
LABEL_51:
            KiReleasePrcbLocksForIsolationUnit(&v69);
          }
          break;
        case 5:
          v7 = *(_BYTE *)(a1 + 112) & 7;
          if ( v7 == 1 || (unsigned __int8)(v7 - 3) <= 3u )
            goto LABEL_11;
          v4 = 2;
          goto LABEL_9;
        default:
          goto LABEL_11;
      }
    }
    v32 = *(unsigned int *)(a1 + 536);
    if ( (int)v32 >= 0 )
      break;
    v33 = (unsigned int)v32;
    LODWORD(v33) = v32 & 0x7FFFFFFF;
    v70 = 0;
    v6 = *(volatile signed __int32 **)(KiProcessorBlock[v33] + 34888);
    while ( _interlockedbittestandset64(v6, 0LL) )
    {
      do
        KeYieldProcessorEx(&v70);
      while ( *(_QWORD *)v6 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v32 )
      goto LABEL_11;
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  }
  v5 = KiProcessorBlock[v32];
  KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v69);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v32 )
    goto LABEL_51;
LABEL_11:
  v71 = v6;
  v9 = v5;
  v10 = (volatile signed __int64 *)v6;
  if ( (unsigned __int8)(v4 - 1) > 2u && v4 != 7 )
    goto LABEL_135;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) != 2 )
    goto LABEL_135;
  if ( *(_BYTE *)(a1 + 564) )
    goto LABEL_135;
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    goto LABEL_135;
  v11 = *(_BYTE *)(a1 + 195);
  if ( v11 <= 0 )
    goto LABEL_135;
  v12 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
  if ( v12 >= 16 )
    v12 = 15;
  if ( v12 <= v11 )
  {
LABEL_135:
    if ( v5 )
      KiReleasePrcbLocksForIsolationUnit(&v69);
    if ( v10 )
      _InterlockedAnd64(v10, 0LL);
  }
  else
  {
    v13 = v12;
    v14 = *(char *)(a1 + 195);
    *(_BYTE *)(a1 + 564) = (v12 - v11) & 0xF;
    CurrentPrcb = KeGetCurrentPrcb();
    memset(v76, 0, sizeof(v76));
    if ( v4 == 1 )
    {
      KiRemoveThreadFromAnyReadyQueue(v9, (__int64)v10, a1, (unsigned int)v14);
      KiUpdateThreadPriority(0, v55, a1, v12, 0);
      v24 = (_QWORD *)v68;
      KiPrepareReadyThreadForRescheduling(a1, v12, v68);
      v22 = 0;
      LODWORD(v21) = 1;
      v23 = 0;
      goto LABEL_33;
    }
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        v16 = KeGetCurrentPrcb();
        if ( *(_BYTE *)(a1 + 793) )
        {
          v17 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
          if ( *(_QWORD *)(a1 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = &v16->AbPropagateBoostsList;
            if ( v16 != (struct _KPRCB *)-35704LL )
            {
              v17->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v17;
              _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
              KiAbQueueAutoBoostDpc(v16);
            }
          }
        }
        *(_BYTE *)(a1 + 195) = v12;
        v19 = KiComputeHeteroThreadQos(a1, 0LL);
        if ( v19 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
          KiSetThreadQosLevelUnsafe(a1, v19);
        LODWORD(v21) = 1;
        if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
        {
          LOBYTE(v20) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v20);
        }
        goto LABEL_31;
      }
      KiUpdateThreadPriority(v9, v15, a1, v12, 1);
      v22 = 0;
      LODWORD(v21) = 1;
      if ( v13 >= v14 )
        v22 = v13;
      v23 = v13 < v14;
LABEL_32:
      v24 = (_QWORD *)v68;
      goto LABEL_33;
    }
    v34 = *(_QWORD *)(v9 + 16);
    v35 = KeGetCurrentPrcb();
    v74 = v34;
    if ( *(_BYTE *)(a1 + 793) )
    {
      v36 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
      if ( *(_QWORD *)(a1 + 808) == 1LL )
      {
        v37 = &v35->AbPropagateBoostsList;
        if ( v35 != (struct _KPRCB *)-35704LL )
        {
          v36->Next = v37->Next;
          v37->Next = v36;
          _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
          KiAbQueueAutoBoostDpc(v35);
        }
      }
    }
    *(_BYTE *)(a1 + 195) = v12;
    v38 = KiComputeHeteroThreadQos(a1, 0LL);
    if ( v38 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
      KiSetThreadQosLevelUnsafe(a1, v38);
    v21 = 1LL;
    if ( !v34 )
    {
      v40 = *(_DWORD *)(a1 + 120) >> 1;
      v75 = v9;
      if ( (v40 & 1) != 0 )
      {
        v41 = *(_BYTE **)(v9 + 34904);
        v42 = (unsigned __int8)*v41;
        v43 = (struct _KPRCB **)(v41 + 8);
        if ( *v41 )
          goto LABEL_67;
      }
      else
      {
        v43 = (struct _KPRCB **)&v75;
        v42 = 1;
LABEL_67:
        v44 = v42;
        v73 = v42;
        do
        {
          v45 = *v43;
          PriorityState = (unsigned __int8 *)(*v43)->PriorityState;
          if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(a1, *v43);
            v21 = 1LL;
            v47 = 1;
            if ( !IsThreadRankNonZero )
              v47 = *(_BYTE *)(a1 + 195);
            v44 = v73;
          }
          else
          {
            v47 = *(_BYTE *)(a1 + 195);
          }
          v49 = v47 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
          *PriorityState = v49;
          SchedulerAssist = v45->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( (_KTHREAD *)a1 == v45->IdleThread )
              v51 = (unsigned int)KiVpThreadSystemWorkPriority;
            else
              v51 = v49 & 0x7F;
            KiSetSchedulerAssistPriority(SchedulerAssist, v51, 0LL);
          }
          v39 = v45->PriorityState;
          if ( KeHeteroSystem )
          {
            v52 = *(_DWORD *)(a1 + 80);
            v53 = (*(_BYTE *)(a1 + 512) ^ v39[64].AllFields) & 7 ^ v39[64].AllFields;
            v54 = (v53 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v53;
            if ( v52 <= *(_DWORD *)(a1 + 84) )
              v52 = *(_DWORD *)(a1 + 84);
            v39[64].AllFields = (v52 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v54 & 0xBF;
          }
          ++v43;
          v44 -= v21;
          v73 = v44;
        }
        while ( v44 );
      }
      v34 = v74;
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    {
      LOBYTE(v39) = v21;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v39);
    }
    if ( v34 )
    {
LABEL_31:
      v22 = 0;
      v23 = 0;
      goto LABEL_32;
    }
    if ( v13 >= v14 )
    {
      v23 = 0;
      if ( v13 <= v14 )
      {
        v22 = 0;
        goto LABEL_32;
      }
      v24 = (_QWORD *)v68;
      if ( *(_BYTE *)(a1 + 388) == 2 )
        v22 = v13;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
        v23 = v21;
        goto LABEL_32;
      }
      v23 = 0;
      v24 = (_QWORD *)v68;
      if ( (unsigned int)(*(_DWORD *)(v9 + 32472) | *(_DWORD *)(*(_QWORD *)(v9 + 34888) + 8LL)) >> (v13 + 1) )
        *(_BYTE *)(a1 + 112) |= 0x10u;
    }
LABEL_33:
    v25 = 0;
    v26 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
    v27 = *(_QWORD *)(v26 + 34880);
    if ( v27 )
    {
      v28 = *(unsigned __int8 *)(v26 + 208);
      v29 = *(_WORD **)(a1 + 576);
      if ( (unsigned __int16)v28 >= *v29 )
        v30 = 0LL;
      else
        v30 = *(_QWORD *)&v29[4 * v28 + 4];
      LOBYTE(v25) = (v27 & v30) == v27;
    }
    if ( v25 != ((unsigned int)v21 & (*(_DWORD *)(a1 + 120) >> 13)) )
      _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
    if ( v23 )
    {
      KiStartRescheduleContext((__int64)v76, &v69, 0LL);
      v56 = 0LL;
      v57 = 0;
      if ( LOBYTE(v76[0]) )
      {
        v58 = &v76[2];
        while ( *v58 != v9 )
        {
          ++v57;
          v58 += 5;
          if ( v57 >= LOBYTE(v76[0]) )
            goto LABEL_109;
        }
        v56 = v58;
      }
LABEL_109:
      *((_BYTE *)v56 + 34) |= 2u;
      KiSearchForNewThreadsForRescheduleContext(v76, (__int64)v24);
      v59 = 0;
      v60 = 0;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        v60 = 2;
      v61 = 0LL;
      if ( LOBYTE(v76[0]) )
      {
        v62 = CurrentPrcb;
        do
        {
          v59 |= KiCommitRescheduleContextEntry((__int64)&v76[5 * v61 + 2], v62, v60, v24);
          LODWORD(v21) = 1;
          v61 = (unsigned int)(v61 + 1);
        }
        while ( (unsigned int)v61 < LOBYTE(v76[0]) );
      }
      else
      {
        LODWORD(v21) = 1;
      }
      if ( LODWORD(v76[1]) == 1 )
        *(_BYTE *)(*(_QWORD *)(v76[2] + 34904LL) + 1LL) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v76[2] + 34904LL)
                                                                                     + 1LL)
                                                                          + 1) < **(_BYTE **)(v76[2] + 34904LL)
                                                        ? *(_BYTE *)(*(_QWORD *)(v76[2] + 34904LL) + 1LL) + 1
                                                        : 0;
    }
    else
    {
      v59 = 0;
    }
    if ( v9 )
    {
      v63 = 0LL;
      v64 = 0;
      v65 = v69 & 0xFFFFFFFFFFFFFFFEuLL;
      v68 = v69 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( ((unsigned int)v21 & (unsigned int)v69) == 0 )
      {
        v63 = &v68;
        v64 = v21;
        goto LABEL_126;
      }
      if ( ((unsigned int)v21 & (unsigned int)v69) == 1 )
      {
        v63 = (unsigned __int64 *)(*(_QWORD *)(v65 + 34904) + 8LL);
        v64 = **(unsigned __int8 **)(v65 + 34904);
      }
      while ( v64 )
LABEL_126:
        _InterlockedAnd64((volatile signed __int64 *)(v63[--v64] + 48), 0LL);
      v69 = 0LL;
    }
    if ( v71 )
      _InterlockedAnd64((volatile signed __int64 *)v71, 0LL);
    v66 = (__int64)CurrentPrcb;
    if ( v59 )
    {
      KiCompleteRescheduleContext(v76, CurrentPrcb);
      KiFlushSoftwareInterruptBatch(v66 + 12760);
    }
    if ( v22 > 0 )
      KiHvEnlightenedGuestPriorityKick(v66, v9, v22);
    return 1;
  }
  return v2;
}
