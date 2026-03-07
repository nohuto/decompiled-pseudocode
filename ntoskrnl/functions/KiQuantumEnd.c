__int64 KiQuantumEnd()
{
  struct _KPRCB *CurrentPrcb; // r14
  ULONG_PTR CurrentThread; // rsi
  unsigned __int64 v2; // rdi
  int v3; // ebx
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  char v14; // bl
  int v15; // edi
  bool v16; // sf
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r12
  char QueueIndex; // r15
  int v19; // ebp
  char v20; // al
  _LIST_ENTRY *ReadyListHead; // r14
  int v22; // edx
  unsigned int v23; // ebp
  int v24; // r13d
  __int64 v25; // r8
  unsigned int v26; // eax
  _LIST_ENTRY *v27; // rsi
  unsigned int v28; // r14d
  _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  bool v31; // cl
  bool v32; // zf
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v34; // rsi
  __int64 v35; // r12
  volatile signed __int32 *v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // r15
  char v39; // bp
  int v40; // edi
  __int64 v41; // r9
  unsigned int ReadySummary; // ebp
  int v43; // ebp
  _LIST_ENTRY *DispatcherReadyListHead; // r13
  unsigned int v45; // r12d
  int v46; // r11d
  unsigned int v47; // ebp
  unsigned int v48; // eax
  int v49; // ebp
  char v50; // r15
  struct _KPRCB *v51; // r12
  unsigned int v52; // r15d
  _LIST_ENTRY *v53; // r14
  int v54; // r13d
  _LIST_ENTRY *v55; // rdi
  struct _LIST_ENTRY **v56; // rbx
  bool v57; // cl
  _LIST_ENTRY *v58; // rsi
  int v59; // eax
  _QWORD *v60; // rsi
  __int64 v61; // r8
  __int64 v62; // r15
  volatile signed __int32 *v63; // rbx
  _QWORD *v64; // r14
  __int64 v65; // r12
  char v66; // bp
  int v67; // edi
  int v68; // eax
  unsigned int v69; // r15d
  __int64 v70; // rbp
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v72; // rdx
  __int64 v73; // r9
  _DWORD *v74; // r11
  __int64 v75; // r9
  _DWORD *v76; // r11
  char v77; // r10
  __int64 v78; // rdx
  __int64 v79; // r10
  _DWORD *v80; // rcx
  char v81; // dl
  unsigned __int8 v82; // r8
  __int64 i; // rdx
  _DWORD *v84; // rax
  char v85; // al
  _QWORD **v86; // rbx
  char v87; // r11
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rsi
  char v89; // di
  unsigned __int64 v90; // rax
  int v91; // esi
  unsigned __int64 v92; // rbx
  __int64 v93; // r10
  __int64 v94; // rdx
  _KTHREAD *NextThread; // rbx
  struct _KPRCB *v96; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v98; // eax
  signed __int32 v99; // ett
  char IsUserVaAccessAllowed; // di
  __int64 v101; // r8
  __int64 result; // rax
  unsigned __int64 *v103; // r8
  unsigned __int64 v104; // r9
  unsigned int v105; // edx
  __int16 v106; // bx
  volatile signed __int32 *v107; // rcx
  bool v108; // bl
  int v109; // edi
  unsigned int PrcbFlags; // eax
  struct _KPRCB *v111; // rcx
  _DWORD *v112; // r8
  int v113; // ett
  __int64 v114; // [rsp+20h] [rbp-248h]
  __int64 v115; // [rsp+20h] [rbp-248h]
  unsigned __int8 v116; // [rsp+30h] [rbp-238h]
  unsigned int v117; // [rsp+34h] [rbp-234h]
  int v118; // [rsp+34h] [rbp-234h]
  unsigned __int64 v119; // [rsp+38h] [rbp-230h] BYREF
  int v120; // [rsp+40h] [rbp-228h]
  int v121; // [rsp+44h] [rbp-224h]
  int v122; // [rsp+48h] [rbp-220h]
  int v123; // [rsp+4Ch] [rbp-21Ch]
  int v124; // [rsp+50h] [rbp-218h]
  int v125; // [rsp+54h] [rbp-214h]
  int v126; // [rsp+58h] [rbp-210h]
  _QWORD *v127; // [rsp+60h] [rbp-208h] BYREF
  struct _KPRCB *v128; // [rsp+68h] [rbp-200h]
  ULONG_PTR v129; // [rsp+70h] [rbp-1F8h]
  int v130; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD v131[2]; // [rsp+7Ch] [rbp-1ECh] BYREF
  _DWORD v132[2]; // [rsp+84h] [rbp-1E4h] BYREF
  int v133; // [rsp+8Ch] [rbp-1DCh] BYREF
  _QWORD *v134; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD *v135; // [rsp+98h] [rbp-1D0h] BYREF
  _LIST_ENTRY *v136; // [rsp+A0h] [rbp-1C8h]
  __int64 v137; // [rsp+A8h] [rbp-1C0h] BYREF
  __int64 v138; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-1B0h] BYREF
  unsigned __int64 v140; // [rsp+C0h] [rbp-1A8h] BYREF
  _QWORD *v141; // [rsp+C8h] [rbp-1A0h] BYREF
  _QWORD *v142; // [rsp+D0h] [rbp-198h] BYREF
  unsigned __int64 v143; // [rsp+D8h] [rbp-190h] BYREF
  _DWORD v144[84]; // [rsp+E0h] [rbp-188h] BYREF
  int v145; // [rsp+260h] [rbp-8h]

  v127 = 0LL;
  memset(v144, 0, sizeof(v144));
  CurrentPrcb = KeGetCurrentPrcb();
  v116 = 0;
  v128 = CurrentPrcb;
  v119 = 0LL;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v129 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v2 = *(_QWORD *)(CurrentThread + 72);
    if ( v2 >= *(_QWORD *)(CurrentThread + 32) || KeHeteroSystem || *(_BYTE *)(CurrentThread + 125) )
    {
      v130 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v130);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v2 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v3 = 127;
        }
        else
        {
          v4 = (char)KiComputeNewPriority(CurrentThread, 1LL);
          KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v119);
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
            KiUpdateThreadPriority((_DWORD)CurrentPrcb, v5, CurrentThread, v4, CurrentPrcb->NextThread == 0LL);
          KiReleasePrcbLocksForIsolationUnit(&v119);
          v3 = *(unsigned __int8 *)(CurrentThread + 651);
          v116 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v6 = KiCyclesPerClockQuantum * v3;
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v2 + v6;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->SchedulerSubNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v7 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          v8 = *(_QWORD *)(v7 + 24) & *(_QWORD *)(v7 + 80);
          v9 = *(unsigned __int16 *)(v7 + 136);
          v10 = *(_WORD **)(CurrentThread + 576);
          v11 = (unsigned __int16)v9 >= *v10 ? 0LL : *(_QWORD *)&v10[4 * v9 + 4];
          if ( (v11 & v8) != 0 )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      v137 = 0LL;
      v138 = 0LL;
      v139 = 0LL;
      if ( KeHeteroSystem )
      {
        v12 = KiAcquireThreadStateLockForWrite(CurrentThread, &v137, &v139, &v138);
        KzHeteroRefreshWorkloadProperties(CurrentThread, v12, v137);
        KiReleaseThreadStateLock(v13, v137, &v139, v138);
      }
      if ( KiCheckPreferredHeteroProcessor(CurrentThread, (__int64)CurrentPrcb, 1) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
  }
  v14 = 0;
  v122 = 10;
  v15 = MEMORY[0xFFFFF78000000320];
  v16 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v124 = MEMORY[0xFFFFF78000000320];
  v121 = 16;
  if ( !v16 )
    goto LABEL_76;
  v14 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_76;
  SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
  v136 = (_LIST_ENTRY *)SharedReadyQueue;
  if ( (SharedReadyQueue->ReadySummary & 0x7FFE) == 0 )
    goto LABEL_76;
  QueueIndex = SharedReadyQueue->QueueIndex;
  v134 = 0LL;
  v131[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
  {
    do
      KeYieldProcessorEx(v131);
    while ( SharedReadyQueue->Lock );
  }
  v19 = SharedReadyQueue->ReadySummary & 0x7FFE;
  if ( !v19 )
  {
    _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
    v20 = 1;
    goto LABEL_75;
  }
  ReadyListHead = SharedReadyQueue->ReadyListHead;
  v22 = 10;
  v120 = 10;
  v23 = __ROR4__(v19, QueueIndex);
  v24 = 16;
  v125 = KiLockQuantumTarget;
  v25 = MEMORY[0xFFFFF78000000320];
  v117 = MEMORY[0xFFFFF78000000320];
  do
  {
    _BitScanForward(&v26, v23);
    v23 ^= 1 << v26;
    v131[1] = v26;
    v27 = &ReadyListHead[((_BYTE)v26 + QueueIndex) & 0x1F];
    v123 = ((_BYTE)v26 + QueueIndex) & 0x1F;
    v28 = v123;
    Flink = v27->Flink;
    do
    {
      p_Blink = &Flink[-14].Blink;
      v31 = 0;
      v32 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      Flink = Flink->Flink;
      if ( !v32 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
        v22 = v120;
        v25 = v117;
        v31 = GuestSchedulerAssistPriority != *((_DWORD *)p_Blink + 256);
      }
      if ( (int)v25 - *((_DWORD *)p_Blink + 109) - 300 > 0 )
      {
        KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, p_Blink, v28);
        KiInsertDeferredReadyList(&v134, p_Blink);
        v22 = --v120;
LABEL_48:
        v25 = v117;
        goto LABEL_49;
      }
      if ( v31 )
      {
        KiRemoveThreadFromSharedReadyQueue(SharedReadyQueue, p_Blink, v28);
        KiInsertDeferredReadyList(&v134, p_Blink);
        v22 = v120;
        goto LABEL_48;
      }
LABEL_49:
      --v24;
    }
    while ( Flink != v27 && v22 && v24 );
    v126 = v24;
    ReadyListHead = SharedReadyQueue->ReadyListHead;
  }
  while ( v23 && v22 && v24 );
  _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
  v34 = v134;
  CurrentPrcb = v128;
  if ( v134 )
  {
    v35 = (__int64)v128;
    do
    {
      v36 = (volatile signed __int32 *)(v34 - 27);
      v37 = v34;
      v38 = *(v34 - 18);
      v39 = 0;
      v34 = (_QWORD *)*v34;
      v132[0] = 0;
      while ( _interlockedbittestandset64(v36 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(v132);
        while ( *((_QWORD *)v36 + 8) );
      }
      v40 = *((char *)v36 + 195);
      if ( (int)(v117 - *((_DWORD *)v36 + 109) - 300) > 0 && v40 < 15 )
      {
        LOBYTE(v25) = 15;
        v39 = 1;
        KiSetPriorityBoost(0, (_DWORD)v36, v25, v38, v125);
      }
      *((_QWORD *)v36 + 8) = 0LL;
      if ( v39 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v36, (unsigned int)v40, v25);
      *v37 = 0LL;
      v141 = v37;
      KiReadyDeferredReadyList(v35, &v141);
    }
    while ( v34 );
    SharedReadyQueue = (_KSHARED_READY_QUEUE *)v136;
    v24 = v126;
    CurrentPrcb = v128;
  }
  if ( v24 && v120 )
  {
    v20 = 1;
    v14 = 1;
  }
  else
  {
    v20 = 1;
    v14 = 1;
    if ( (unsigned int)(v123 + 1) <= 0xE )
      v20 = v123 + 1;
  }
  v15 = v124;
  CurrentThread = v129;
LABEL_75:
  SharedReadyQueue->QueueIndex = v20;
LABEL_76:
  if ( KiGroupSchedulingEnabled )
    KiGroupSchedulingQuantumEnd(CurrentPrcb, &v119, CurrentThread, v116);
  else
    KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v119);
  if ( !v14 )
    goto LABEL_116;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v15 + 75;
  v43 = ReadySummary & 0x7FFE;
  if ( !v43 )
    goto LABEL_116;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  v45 = CurrentPrcb->QueueIndex;
  v124 = KiLockQuantumTarget;
  v125 = v45;
  v136 = CurrentPrcb->DispatcherReadyListHead;
  v135 = 0LL;
  v46 = MEMORY[0xFFFFF78000000320];
  v118 = MEMORY[0xFFFFF78000000320];
  v47 = __ROR4__(v43, v45);
  while ( 2 )
  {
    _BitScanForward(&v48, v47);
    v132[1] = v48;
    v126 = v47 ^ (1 << v48);
    v49 = v122;
    v50 = v48 + v45;
    v51 = v128;
    v52 = v50 & 0x1F;
    v53 = &DispatcherReadyListHead[v52];
    v123 = v52;
    v54 = v121;
    v55 = v53->Flink;
    while ( 2 )
    {
      v56 = &v55[-14].Blink;
      v57 = 0;
      v32 = ((__int64)v55[-6].Flink & 0x400000) == 0;
      v58 = v55;
      v55 = v55->Flink;
      if ( !v32 )
      {
        v59 = KiReadGuestSchedulerAssistPriority(v56, 0LL);
        v46 = v118;
        v57 = v59 != *((_DWORD *)v56 + 256);
      }
      if ( v46 - *((_DWORD *)v56 + 109) - 300 > 0 )
      {
        KiRemoveThreadFromReadyQueue(v51, v58, v52);
        KiInsertDeferredReadyList(&v135, v56);
        --v49;
        goto LABEL_89;
      }
      if ( v57 )
      {
        KiRemoveThreadFromReadyQueue(v51, v58, v52);
        KiInsertDeferredReadyList(&v135, v56);
LABEL_89:
        v46 = v118;
      }
      --v54;
      if ( v55 != v53 && v49 && v54 )
        continue;
      break;
    }
    LOBYTE(v45) = v125;
    v122 = v49;
    v47 = v126;
    v121 = v54;
    DispatcherReadyListHead = v136;
    if ( v126 && v122 && v121 )
      continue;
    break;
  }
  v60 = v135;
  if ( v135 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v119);
    v62 = (__int64)v128;
    do
    {
      v63 = (volatile signed __int32 *)(v60 - 27);
      v64 = v60;
      v65 = *(v60 - 18);
      v66 = 0;
      v60 = (_QWORD *)*v60;
      v133 = 0;
      while ( _interlockedbittestandset64(v63 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v133);
        while ( *((_QWORD *)v63 + 8) );
      }
      v67 = *((char *)v63 + 195);
      if ( v118 - *((_DWORD *)v63 + 109) - 300 > 0 && v67 < 15 )
      {
        LOBYTE(v61) = 15;
        v66 = 1;
        KiSetPriorityBoost(0, (_DWORD)v63, v61, v65, v124);
      }
      *((_QWORD *)v63 + 8) = 0LL;
      if ( v66 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v63, (unsigned int)v67, v61);
      *v64 = 0LL;
      v142 = v64;
      KiReadyDeferredReadyList(v62, &v142);
    }
    while ( v60 );
    KiAcquirePrcbLocksForIsolationUnit(v62, 0LL, &v119);
    v52 = v123;
  }
  if ( v121 && v122 )
  {
    v68 = 1;
  }
  else
  {
    v69 = v52 + 1;
    v68 = 1;
    if ( v69 <= 0xE )
      v68 = v69;
  }
  CurrentPrcb = v128;
  v128->QueueIndex = v68;
LABEL_116:
  v70 = v129;
  if ( !CurrentPrcb->NextThread && (v116 || (*(_DWORD *)(v129 + 120) & 0x1000) != 0) )
  {
    KiStartRescheduleContext(v144, &v119, 0LL);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v144, CurrentPrcb);
    v74 = (_DWORD *)RescheduleContextEntryForPrcb;
    if ( (*(_DWORD *)(v70 + 120) & 0x1000) != 0 )
    {
      LOBYTE(v73) = 1;
      KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v72, 0LL, v73, v114);
      if ( (v77 & 2) != 0 )
      {
        v78 = LOBYTE(v144[0]);
        v79 = 0LL;
        if ( LOBYTE(v144[0]) )
        {
          do
          {
            v80 = &v144[10 * v79 + 4];
            if ( v80 != v76 )
            {
              LOBYTE(v75) = 1;
              KiAdjustRescheduleContextEntryForThreadRemoval(v80, v78, 0LL, v75, v115);
              v78 = LOBYTE(v144[0]);
            }
            v79 = (unsigned int)(v79 + 1);
          }
          while ( (unsigned int)v79 < (unsigned __int8)v78 );
        }
        v144[1] = 0;
      }
    }
    else
    {
      v81 = *(_BYTE *)(RescheduleContextEntryForPrcb + 32);
      *(_BYTE *)(RescheduleContextEntryForPrcb + 34) |= 2u;
      *(_BYTE *)(RescheduleContextEntryForPrcb + 32) = v81 | 8;
      if ( (v81 & 2) != 0 )
      {
        v82 = v144[0];
        for ( i = 0LL; (unsigned int)i < v82; i = (unsigned int)(i + 1) )
        {
          v84 = &v144[10 * i + 4];
          if ( v84 != v74 )
          {
            *((_BYTE *)v84 + 32) |= 8u;
            *((_BYTE *)v84 + 34) |= 2u;
            v82 = v144[0];
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v144, (__int64)&v127);
    v85 = KiCommitRescheduleContext(v144, CurrentPrcb, 0LL, &v127);
    v86 = (_QWORD **)v127;
    if ( v85 || v127 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v119);
      if ( v87 )
      {
        KiCompleteRescheduleContext(v144, CurrentPrcb);
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      else
      {
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
      }
      if ( v86 )
      {
        v89 = 0;
        v127 = *v86;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, v86 - 27, &v127);
          v86 = (_QWORD **)v127;
          ++v89;
          if ( v127 )
            v127 = (_QWORD *)*v127;
          if ( (v89 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
        }
        while ( v86 );
        KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
      }
      KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v119);
    }
  }
  v90 = v119;
  v91 = 0;
  v92 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
  v93 = 0LL;
  v140 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
  v94 = 0LL;
  if ( (v119 & 1) != 0 )
  {
    if ( (v119 & 1) == 1 )
    {
      v93 = *(_QWORD *)(v92 + 34904) + 8LL;
      v94 = **(unsigned __int8 **)(v92 + 34904);
    }
    KzReleaseAdditionalPrcbLocks(v93, v94, &v140, 1LL);
    v90 = v92;
    v119 = v92;
  }
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    if ( v116 )
      *(_BYTE *)(v70 + 565) = 0;
    if ( (_KTHREAD *)v70 != CurrentPrcb->IdleThread )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v41) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v70, 0LL, v41);
      v96 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v96->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v98 = *SchedulerAssist;
        do
        {
          v99 = v98;
          v98 = _InterlockedCompareExchange(SchedulerAssist, v98 & 0xFFDFFFFF, v98);
        }
        while ( v99 != v98 );
        if ( (v98 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v96);
      }
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v70 + 643) = 30;
      KiQueueReadyThread(CurrentPrcb, &v119, v70);
      KiAbProcessContextSwitch(v70, 1);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v101) = 1;
      result = KiSwapContext(v70, NextThread, v101);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return result;
    }
  }
  v103 = 0LL;
  v104 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
  v105 = 0;
  v143 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
  result = v90 & 1;
  if ( !(_DWORD)result )
  {
    v103 = &v143;
    v105 = 1;
    goto LABEL_171;
  }
  if ( (_DWORD)result == 1 )
  {
    result = *(_QWORD *)(v104 + 34904);
    v103 = (unsigned __int64 *)(result + 8);
    v105 = *(unsigned __int8 *)result;
  }
  while ( v105 )
  {
LABEL_171:
    result = --v105;
    _InterlockedAnd64((volatile signed __int64 *)(v103[v105] + 48), 0LL);
  }
  if ( (_KTHREAD *)v70 != CurrentPrcb->IdleThread && KeHeteroSystemQos )
  {
    v106 = v145;
    _disable();
    v107 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v107 )
      _InterlockedOr(v107, 0x200000u);
    v108 = (v106 & 0x200) != 0;
    result = (unsigned __int8)CurrentPrcb->PrcbFlags.PrcbFlags;
    if ( (unsigned __int8)*(_DWORD *)(v70 + 512) != (_DWORD)result )
    {
      v109 = CurrentPrcb->PrcbFlags.PrcbFlags & 0x300;
      if ( (unsigned __int8)PoSetProcessorQoS(CurrentPrcb) )
      {
        CurrentPrcb->PrcbFlags.PrcbFlags &= 0xFFFFFCFF;
        PrcbFlags = CurrentPrcb->PrcbFlags.PrcbFlags;
      }
      else
      {
        PrcbFlags = CurrentPrcb->PrcbFlags.PrcbFlags & 0xFFFFFCFF | 0x100;
        CurrentPrcb->PrcbFlags.PrcbFlags = PrcbFlags;
      }
      result = (PrcbFlags & 0x300) != 0;
      LOBYTE(v91) = v109 != 0;
      if ( v91 != (_DWORD)result )
        result = KeUpdatePendingQosRequest(CurrentPrcb);
    }
    if ( v108 )
    {
      v111 = KeGetCurrentPrcb();
      v112 = v111->SchedulerAssist;
      if ( v112 )
      {
        _m_prefetchw(v112);
        LODWORD(result) = *v112;
        do
        {
          v113 = result;
          result = (unsigned int)_InterlockedCompareExchange(v112, result & 0xFFDFFFFF, result);
        }
        while ( v113 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(v111);
      }
      _enable();
    }
  }
  return result;
}
