char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // r8
  char v4; // cl
  char v5; // dl
  int v6; // edi
  char v7; // r8
  char v8; // al
  int v9; // edi
  struct _KPRCB *CurrentPrcb; // r14
  struct _KPRCB *v11; // r15
  int v12; // esi
  char v13; // di
  int v14; // r12d
  char v15; // r13
  struct _KPRCB *v16; // r8
  struct _SINGLE_LIST_ENTRY *v17; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rcx
  unsigned int v19; // eax
  _KPRIORITY_STATE *v20; // r8
  _KTHREAD *v21; // r10
  int v22; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  struct _KPRCB **Prcbs; // rsi
  __int64 v26; // r12
  struct _KPRCB *v27; // rdi
  unsigned __int8 *PriorityState; // r15
  bool IsThreadRankNonZero; // al
  char v30; // cl
  unsigned __int8 v31; // al
  void *SchedulerAssist; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edx
  char v35; // al
  char v36; // al
  char v37; // cl
  char v38; // r9
  unsigned int v39; // esi
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  _WORD *v44; // rcx
  __int64 v45; // rcx
  struct _KPRCB **v46; // r8
  unsigned int v47; // ecx
  struct _KPRCB **v48; // rax
  unsigned int i; // edi
  unsigned __int8 *v50; // rdx
  unsigned __int8 v51; // al
  unsigned __int64 *v52; // r8
  int v53; // edx
  unsigned __int64 v54; // r9
  char v55; // di
  bool v56; // zf
  int v58; // [rsp+20h] [rbp-E0h]
  __int64 v59; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v60; // [rsp+30h] [rbp-D0h] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h]
  int v63; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+44h] [rbp-BCh]
  struct _KPRCB *v65; // [rsp+48h] [rbp-B8h]
  _KTHREAD *NextThread; // [rsp+50h] [rbp-B0h]
  struct _KPRCB *v67; // [rsp+58h] [rbp-A8h] BYREF
  struct _KPRCB *v68; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v69; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v70[42]; // [rsp+70h] [rbp-90h] BYREF

  v65 = (struct _KPRCB *)a1;
  v59 = 0LL;
  v60 = 0LL;
  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v61 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v61);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v3 = *(_BYTE *)(a2 + 564);
  v4 = *(_BYTE *)(a2 + 195);
  v5 = v3 & 0xF;
  v6 = (unsigned __int8)(v4 - (v3 & 0xF));
  if ( (v3 & 0xF) == 0 )
    v6 = *(unsigned __int8 *)(a2 + 195);
  v7 = v3 >> 4;
  v64 = v6;
  if ( !v7 )
  {
    v55 = v6 + 1;
    goto LABEL_89;
  }
  *(_BYTE *)(a2 + 564) = v5;
  v8 = KiComputePriorityFloor(a2, (unsigned __int8)(v4 - v7));
  v9 = v8;
  if ( v8 != *(_BYTE *)(a2 + 195) )
  {
    CurrentPrcb = v65;
    if ( !v65 )
      CurrentPrcb = KeGetCurrentPrcb();
    v65 = CurrentPrcb;
    KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v59);
    v11 = KeGetCurrentPrcb();
    v58 = v9;
    v12 = v9;
    v62 = 0;
    v13 = *(_BYTE *)(a2 + 195);
    v63 = v13;
    v14 = 0;
    v68 = v11;
    v15 = 0;
    memset(v70, 0, sizeof(v70));
    v16 = v11;
    NextThread = CurrentPrcb->NextThread;
    if ( (char)v12 > v13 )
    {
      if ( *(_BYTE *)(a2 + 793) )
      {
        v17 = (struct _SINGLE_LIST_ENTRY *)(a2 + 808);
        if ( *(_QWORD *)(a2 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &v11->AbPropagateBoostsList;
          if ( v11 != (struct _KPRCB *)-35704LL )
          {
            v17->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v17;
            _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
            KiAbQueueAutoBoostDpc(v11);
          }
        }
      }
    }
    *(_BYTE *)(a2 + 195) = v12;
    v19 = KiComputeHeteroThreadQos(a2, 0LL, v16);
    if ( v19 != (unsigned __int8)*(_DWORD *)(a2 + 512) )
      KiSetThreadQosLevelUnsafe(a2, v19);
    v21 = NextThread;
    if ( NextThread )
    {
LABEL_42:
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v20) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), v20);
      }
      if ( !v21 )
      {
        if ( v12 >= v63 )
        {
          if ( v12 > v63 && *(_BYTE *)(a2 + 388) == 2 )
            v14 = v12;
        }
        else
        {
          if ( *(_BYTE *)(a2 + 388) == 2 )
          {
            v38 = 1;
            goto LABEL_54;
          }
          if ( (CurrentPrcb->ReadySummary | CurrentPrcb->SharedReadyQueue->ReadySummary) >> (v12 + 1) )
            *(_BYTE *)(a2 + 112) |= 0x10u;
        }
      }
      v38 = 0;
LABEL_54:
      v39 = 0;
      v40 = 0;
      v41 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
      v42 = *(_QWORD *)(v41 + 34880);
      if ( v42 )
      {
        v43 = *(unsigned __int8 *)(v41 + 208);
        v44 = *(_WORD **)(a2 + 576);
        if ( (unsigned __int16)v43 >= *v44 )
          v45 = 0LL;
        else
          v45 = *(_QWORD *)&v44[4 * v43 + 4];
        LOBYTE(v40) = (v42 & v45) == v42;
      }
      if ( v40 != ((*(_DWORD *)(a2 + 120) >> 13) & 1) )
        _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
      if ( v38 )
      {
        KiStartRescheduleContext(v70, &v59, 0LL);
        v46 = 0LL;
        v47 = 0;
        if ( LOBYTE(v70[0]) )
        {
          v48 = (struct _KPRCB **)&v70[2];
          while ( *v48 != CurrentPrcb )
          {
            ++v47;
            v48 += 5;
            if ( v47 >= LOBYTE(v70[0]) )
              goto LABEL_68;
          }
          v46 = v48;
        }
LABEL_68:
        *((_BYTE *)v46 + 34) |= 2u;
        KiSearchForNewThreadsForRescheduleContext(v70, (__int64)&v60);
        v15 = 0;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          v39 = 2;
        for ( i = 0; i < LOBYTE(v70[0]); v15 |= KiCommitRescheduleContextEntry(&v70[5 * i++ + 2], v11, v39, &v60) )
          ;
        if ( LODWORD(v70[1]) == 1 )
        {
          v50 = *(unsigned __int8 **)(v70[2] + 34904LL);
          v51 = v50[1] + 1;
          if ( v51 >= *v50 )
            v51 = 0;
          v50[1] = v51;
        }
      }
      v52 = 0LL;
      v53 = 0;
      v54 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
      v69 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v59 & 1) != 0 )
      {
        if ( (v59 & 1) == 1 )
        {
          v52 = (unsigned __int64 *)(*(_QWORD *)(v54 + 34904) + 8LL);
          v53 = **(unsigned __int8 **)(v54 + 34904);
        }
        if ( !v53 )
          goto LABEL_83;
      }
      else
      {
        v52 = &v69;
        v53 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v52[--v53] + 48), 0LL);
      while ( v53 );
LABEL_83:
      v59 = 0LL;
      if ( v15 )
      {
        KiCompleteRescheduleContext(v70, v11);
        KiFlushSoftwareInterruptBatch(&v11->DeferredDispatchInterrupts);
      }
      if ( v14 > 0 )
        KiHvEnlightenedGuestPriorityKick((__int64)v11, (__int64)CurrentPrcb, v14);
      goto LABEL_87;
    }
    v22 = *(_DWORD *)(a2 + 120) >> 1;
    v67 = CurrentPrcb;
    if ( (v22 & 1) != 0 )
    {
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( !CoreControlBlock->ProcessorCount )
      {
LABEL_41:
        v12 = v58;
        goto LABEL_42;
      }
    }
    else
    {
      Prcbs = &v67;
      ProcessorCount = 1;
    }
    v26 = ProcessorCount;
    v15 = 0;
    do
    {
      v27 = *Prcbs;
      PriorityState = (unsigned __int8 *)(*Prcbs)->PriorityState;
      if ( (*(_BYTE *)(a2 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(a2, *Prcbs), v30 = 1, !IsThreadRankNonZero) )
      {
        v30 = *(_BYTE *)(a2 + 195);
      }
      v31 = v30 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a2 + 120) >> 1) << 7);
      *PriorityState = v31;
      SchedulerAssist = v27->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( (_KTHREAD *)a2 == v27->IdleThread )
          v33 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v33 = v31 & 0x7F;
        KiSetSchedulerAssistPriority(SchedulerAssist, v33, 0LL);
      }
      v20 = v27->PriorityState;
      if ( KeHeteroSystem )
      {
        v34 = *(_DWORD *)(a2 + 80);
        v35 = (*(_BYTE *)(a2 + 512) ^ v20[64].AllFields) & 7 ^ v20[64].AllFields;
        v36 = (v35 ^ (8 * *(_BYTE *)(a2 + 516))) & 0x38 ^ v35;
        if ( v34 <= *(_DWORD *)(a2 + 84) )
          v34 = *(_DWORD *)(a2 + 84);
        v37 = 64;
        if ( v34 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v37 = 0;
        v20[64].AllFields = v37 | v36 & 0xBF;
      }
      ++Prcbs;
      --v26;
    }
    while ( v26 );
    v11 = v68;
    v14 = v62;
    v21 = NextThread;
    goto LABEL_41;
  }
LABEL_87:
  v55 = v64;
LABEL_89:
  v56 = v60 == 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( !v56 )
    KiReadyDeferredReadyList((__int64)v65, &v60);
  return v55;
}
