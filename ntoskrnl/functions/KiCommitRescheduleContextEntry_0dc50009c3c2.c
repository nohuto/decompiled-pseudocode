char __fastcall KiCommitRescheduleContextEntry(__int64 a1, struct _KPRCB *a2, char a3, _QWORD *a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  struct _KPRCB *v7; // rdi
  char v8; // r11
  struct _KPRCB *v9; // r8
  _KTHREAD *NextThread; // rcx
  int v12; // ebp
  int v13; // r13d
  __int64 v14; // r10
  _KTHREAD *CurrentThread; // rcx
  _KTHREAD *SmtIsolationThread; // r15
  char v17; // dl
  unsigned __int8 v18; // bl
  char v19; // bl
  unsigned __int8 v20; // al
  void *v21; // rcx
  _KPRIORITY_STATE *v22; // rbx
  _BYTE *v23; // rcx
  _KTHREAD *v24; // rax
  _KTHREAD **p_IdleThread; // r15
  char v27; // al
  char v28; // al
  unsigned __int8 IdleState; // bl
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 CoreProcessorSet; // rax
  _KSCHEDULER_SUBNODE *v32; // rbx
  _KSCHEDULER_SUBNODE *v33; // rdx
  __int64 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  _KSCHEDULER_SUBNODE *v38; // rdx
  unsigned __int8 v39; // bl
  _BYTE *v40; // rcx
  _KSCHEDULER_SUBNODE *v41; // rbx
  unsigned __int8 v42; // r9
  __int64 v43; // rax
  unsigned __int64 GroupModuleProcessorSet; // rcx
  unsigned __int8 *v45; // r15
  __int64 v46; // rbx
  char v47; // cl
  unsigned __int8 v48; // al
  void *v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  _KSCHEDULER_SUBNODE *v52; // rdx
  unsigned __int8 v53; // bl
  _BYTE *v54; // rcx
  _KSCHEDULER_SUBNODE *v55; // rbx
  __int64 v56; // rax
  char v57; // cl
  __int64 v58; // r8
  unsigned __int8 *PriorityState; // rbx
  bool IsThreadRankNonZero; // al
  char v61; // cl
  unsigned __int8 v62; // al
  void *SchedulerAssist; // rcx
  __int64 v64; // rdx
  _KPRIORITY_STATE *v65; // r8
  unsigned int v66; // edx
  char v67; // al
  char v68; // al
  char v69; // cl
  __int64 v70; // rdx
  unsigned int v71; // edx
  char v72; // al
  char v73; // al
  char v74; // cl
  __int64 v75; // rcx
  char v76; // bl
  bool v77; // al
  char v78; // dl
  char v79; // al
  unsigned __int8 v80; // al
  __int64 v81; // rbx
  void *v82; // rcx
  __int64 v83; // rdx
  _KPRIORITY_STATE *v84; // rax
  unsigned int v85; // edx
  char v86; // al
  char v87; // al
  char v88; // cl
  bool v89; // cf
  _BYTE *v90; // rcx
  _KTHREAD *IdleThread; // rax
  __int64 v92; // rdx
  unsigned int v93; // edx
  char v94; // al
  char v95; // al
  char v96; // cl
  char v97; // al
  char v98; // [rsp+20h] [rbp-78h]
  char v99; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v100; // [rsp+28h] [rbp-70h]
  unsigned __int64 v101; // [rsp+28h] [rbp-70h]
  unsigned __int64 v102; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v103; // [rsp+28h] [rbp-70h]
  unsigned __int8 GroupIndex; // [rsp+30h] [rbp-68h]
  __int64 v105; // [rsp+38h] [rbp-60h] BYREF
  int v106; // [rsp+40h] [rbp-58h] BYREF
  int v107; // [rsp+44h] [rbp-54h] BYREF
  unsigned __int64 v108; // [rsp+48h] [rbp-50h]
  __int64 v109; // [rsp+50h] [rbp-48h]
  char v110; // [rsp+A0h] [rbp+8h]
  char v111; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v112; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v113; // [rsp+A0h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 16);
  LOBYTE(a4) = 0;
  v7 = *(struct _KPRCB **)a1;
  v8 = a3;
  v105 = v6;
  v9 = a2;
  if ( v4 == -1 )
    return 0;
  if ( v4 == -2 )
  {
    PriorityState = (unsigned __int8 *)v7->PriorityState;
    if ( (*(_BYTE *)(v6 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(v6, v7), v61 = 1, !IsThreadRankNonZero) )
    {
      v61 = *(_BYTE *)(v6 + 195);
    }
    v62 = v61 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v6 + 120) >> 1) << 7);
    *PriorityState = v62;
    SchedulerAssist = v7->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( (_KTHREAD *)v6 == v7->IdleThread )
        v64 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v64 = v62 & 0x7F;
      KiSetSchedulerAssistPriority(SchedulerAssist, v64, 0LL);
    }
    v65 = v7->PriorityState;
    if ( KeHeteroSystem )
    {
      v66 = *(_DWORD *)(v6 + 80);
      v67 = (*(_BYTE *)(v6 + 512) ^ v65[64].AllFields) & 7 ^ v65[64].AllFields;
      v68 = (v67 ^ (8 * *(_BYTE *)(v6 + 516))) & 0x38 ^ v67;
      if ( v66 <= *(_DWORD *)(v6 + 84) )
        v66 = *(_DWORD *)(v6 + 84);
      v69 = 64;
      if ( v66 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v69 = 0;
      v65[64].AllFields = v69 | v68 & 0xBF;
    }
    return 0;
  }
  NextThread = v7->NextThread;
  v12 = 0;
  v13 = 0;
  v14 = 1LL;
  if ( NextThread )
  {
    if ( NextThread->Process == (_KPROCESS *)&KiInitialProcess )
    {
      v12 = NextThread == v7->IdleThread;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 34) & 2) == 0 )
        NextThread->Preempted = 1;
      if ( (*(_BYTE *)(a1 + 34) & 1) == 0 )
      {
        KiEnterDeferredReadyState(NextThread);
        v51 += 27;
        *v51 = *v5;
        *v5 = v51;
      }
    }
  }
  else
  {
    CurrentThread = v7->CurrentThread;
    if ( (!CurrentThread || CurrentThread->Process != (_KPROCESS *)&KiInitialProcess)
      && CurrentThread->WaitBlockFill6[68] == 2
      && (*(_BYTE *)(a1 + 34) & 2) == 0 )
    {
      CurrentThread->Preempted = 1;
    }
    v13 = 1;
    LOBYTE(v12) = CurrentThread == v7->IdleThread;
  }
  if ( v12 != (unsigned __int8)(v14 & ~v7->IdleState) )
    goto LABEL_167;
  if ( v4 )
  {
    SmtIsolationThread = v7->SmtIsolationThread;
    v17 = 2 * (v14 & *(_BYTE *)(a1 + 33)) + 124;
    v110 = v17;
    v100 = (unsigned __int8 *)v7->PriorityState;
    v18 = *v100;
    if ( (_KTHREAD *)v4 == SmtIsolationThread )
    {
      v75 = v105;
      if ( (*(_BYTE *)(v105 + 2) & 4) != 0 )
      {
        v77 = KiIsThreadRankNonZero(v105, v7);
        v75 = v105;
        v78 = 1;
        if ( !v77 )
          v78 = *(_BYTE *)(v105 + 195);
        v9 = a2;
        v8 = a3;
        v79 = v78 ^ v18;
        v17 = v110;
        v76 = v79 & 0x7F ^ v18;
        v14 = 1LL;
        LOBYTE(a4) = 0;
      }
      else
      {
        v76 = (*(_BYTE *)(v105 + 195) ^ v18) & 0x7F ^ v18;
      }
      v80 = v76 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v75 + 120) >> 1) << 7);
      v81 = v105;
      *v100 = v80;
      v82 = v7->SchedulerAssist;
      if ( v82 )
      {
        if ( (_KTHREAD *)v81 == v7->IdleThread )
          v83 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v83 = v80 & 0x7F;
        KiSetSchedulerAssistPriority(v82, v83, 0LL);
        v9 = a2;
        v84 = v7->PriorityState + 64;
        v17 = v110;
        LOBYTE(a4) = 0;
      }
      else
      {
        v84 = v7->PriorityState + 64;
      }
      v103 = (unsigned __int8 *)v84;
      if ( KeHeteroSystem )
      {
        v85 = *(_DWORD *)(v81 + 80);
        v86 = (*(_BYTE *)(v81 + 512) ^ v84->AllFields) & 7 ^ v84->AllFields;
        v87 = (v86 ^ (8 * *(_BYTE *)(v81 + 516))) & 0x38 ^ v86;
        if ( v85 <= *(_DWORD *)(v81 + 84) )
          v85 = *(_DWORD *)(v81 + 84);
        v88 = 64;
        v89 = v85 < KiDynamicHeteroCpuPolicyExpectedCycles;
        v17 = v110;
        if ( v89 )
          v88 = 0;
        *v103 = v88 | v87 & 0xBF;
      }
      v90 = v7->SchedulerAssist;
      IdleThread = v7->IdleThread;
      v7->NextThread = SmtIsolationThread;
      if ( v90 )
        v90[16] = SmtIsolationThread == IdleThread;
      if ( SmtIsolationThread->WaitBlockFill6[68] == 1 || (v17 & 2) != 0 )
        SmtIsolationThread->ReadyTime = SmtIsolationThread->ReadyTime
                                      - SmtIsolationThread->WaitBlock[2].SpareLong
                                      + MEMORY[0xFFFFF78000000320];
      SmtIsolationThread->WaitBlockFill6[68] = 3;
    }
    else
    {
      if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
      {
        if ( KiIsThreadRankNonZero(v4, v7) )
          v57 = 1;
        else
          v57 = *(_BYTE *)(v4 + 195);
        v9 = a2;
        v8 = a3;
        v17 = v110;
        v19 = (v57 ^ v18) & 0x7F ^ v18;
        v14 = 1LL;
        LOBYTE(a4) = 0;
      }
      else
      {
        v19 = (*(_BYTE *)(v4 + 195) ^ v18) & 0x7F ^ v18;
      }
      v20 = v19 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v4 + 120) >> 1) << 7);
      *v100 = v20;
      v21 = v7->SchedulerAssist;
      if ( v21 )
      {
        if ( (_KTHREAD *)v4 == v7->IdleThread )
          v92 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v92 = v20 & 0x7F;
        KiSetSchedulerAssistPriority(v21, v92, 0LL);
        v9 = a2;
        v22 = v7->PriorityState + 64;
        v17 = v110;
        LOBYTE(a4) = 0;
      }
      else
      {
        v22 = v7->PriorityState + 64;
      }
      if ( KeHeteroSystem )
      {
        v93 = *(_DWORD *)(v4 + 80);
        v94 = (*(_BYTE *)(v4 + 512) ^ v22->AllFields) & 7 ^ v22->AllFields;
        v95 = (v94 ^ (8 * *(_BYTE *)(v4 + 516))) & 0x38 ^ v94;
        if ( v93 <= *(_DWORD *)(v4 + 84) )
          v93 = *(_DWORD *)(v4 + 84);
        v96 = 64;
        v89 = v93 < KiDynamicHeteroCpuPolicyExpectedCycles;
        v17 = v110;
        if ( v89 )
          v96 = 0;
        v22->AllFields = v96 | v95 & 0xBF;
      }
      v23 = v7->SchedulerAssist;
      v24 = v7->IdleThread;
      v7->NextThread = (_KTHREAD *)v4;
      if ( v23 )
        v23[16] = v4 == (_QWORD)v24;
      if ( *(_BYTE *)(v4 + 388) == 1 || (v17 & 2) != 0 )
        *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v4 + 388) = 3;
    }
    p_IdleThread = &v7->IdleThread;
    if ( (_KTHREAD *)v4 != v7->IdleThread )
    {
      if ( !v12 )
        goto LABEL_23;
      IdleState = v7->IdleState;
      SchedulerSubNode = v7->SchedulerSubNode;
      GroupIndex = v7->GroupIndex;
      CoreProcessorSet = v7->CoreProcessorSet;
      v109 = v14 << GroupIndex;
      v108 = CoreProcessorSet;
      v7->IdleSchedule = 0;
      if ( (IdleState & 1) == 0 )
      {
        LODWORD(v105) = 0;
        v111 = IdleState | 1;
        v7->IdleState = IdleState | 1;
        v32 = SchedulerSubNode;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        {
          do
            KeYieldProcessorEx(&v105);
          while ( v32->SubNodeLock );
        }
        v33 = v32;
        if ( (v111 & 8) == 0 )
          v32->IdleNonParkedCpuSet &= ~(1LL << GroupIndex);
        v34 = v109;
        v35 = v108;
        v32->IdleCpuSet &= ~(1LL << GroupIndex);
        v36 = ~v35;
        v32->IdleSmtSet &= v36;
        v37 = v36 & v32->NonPairedSmtSet;
        if ( (v108 & ~v32->IdleCpuSet) == v34 )
          v37 |= v34;
        v32->NonPairedSmtSet = v37;
        v32->IdleModuleSet &= ~v7->GroupModuleProcessorSet;
        goto LABEL_44;
      }
LABEL_167:
      __fastfail(0x21u);
    }
    if ( v12 )
      LOBYTE(v14) = 0;
    if ( v9 == v7 && (v8 & 1) != 0 )
      LOBYTE(v14) = 0;
    v38 = v7->SchedulerSubNode;
    v39 = v7->IdleState;
    v112 = v7->GroupIndex;
    v40 = v7->SchedulerAssist;
    v101 = v7->CoreProcessorSet;
    if ( v40 )
      v40[16] = 1;
    v7->IdleSchedule = v14;
    if ( (v39 & 1) == 0 )
      goto LABEL_23;
    v107 = 0;
    v98 = v39 & 0xFE;
    v7->IdleState = v39 & 0xFE;
    v41 = v38;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0LL) )
    {
      do
        KeYieldProcessorEx(&v107);
      while ( v41->SubNodeLock );
    }
    v33 = v41;
    if ( (v98 & 8) == 0 )
      v41->IdleNonParkedCpuSet |= 1LL << v112;
    v42 = v112;
    v43 = v41->IdleCpuSet | (1LL << v112);
    v41->IdleCpuSet = v43;
    if ( (v43 & v101) == v101 )
    {
      v41->IdleSmtSet |= v101;
    }
    else
    {
      v50 = v101 & ~v43;
      if ( ((v50 - 1) & v50) == 0 )
        v41->NonPairedSmtSet |= v50;
    }
  }
  else
  {
    v45 = (unsigned __int8 *)v7->PriorityState;
    v7->NextThread = 0LL;
    v46 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v46 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(*(_QWORD *)(a1 + 16), v7) )
        v47 = 1;
      else
        v47 = *(_BYTE *)(v46 + 195);
      v9 = a2;
      LOBYTE(a4) = 0;
      v8 = a3;
      LOBYTE(v14) = 1;
    }
    else
    {
      v47 = *(_BYTE *)(v46 + 195);
    }
    v48 = v47 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v46 + 120) >> 1) << 7);
    *v45 = v48;
    p_IdleThread = &v7->IdleThread;
    v49 = v7->SchedulerAssist;
    if ( v49 )
    {
      if ( (_KTHREAD *)v46 == *p_IdleThread )
        v70 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v70 = v48 & 0x7F;
      KiSetSchedulerAssistPriority(v49, v70, 0LL);
      v9 = a2;
      LOBYTE(a4) = 0;
    }
    if ( KeHeteroSystem )
    {
      v71 = *(_DWORD *)(v46 + 80);
      v72 = (*(_BYTE *)(v46 + 512) ^ v7->PriorityState[64].AllFields) & 7 ^ v7->PriorityState[64].AllFields;
      v73 = (v72 ^ (8 * *(_BYTE *)(v46 + 516))) & 0x38 ^ v72;
      if ( v71 <= *(_DWORD *)(v46 + 84) )
        v71 = *(_DWORD *)(v46 + 84);
      v74 = 64;
      if ( v71 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v74 = 0;
      v7->PriorityState[64].AllFields = v74 | v73 & 0xBF;
    }
    if ( *(_KTHREAD **)(a1 + 16) != *p_IdleThread )
    {
      if ( v12 )
      {
        KiSetProcessorIdle(v7, 0LL, 0LL, a4);
        goto LABEL_45;
      }
      goto LABEL_23;
    }
    if ( v12 )
      LOBYTE(v14) = 0;
    if ( v9 == v7 && (v8 & 1) != 0 )
      LOBYTE(v14) = 0;
    v52 = v7->SchedulerSubNode;
    v53 = v7->IdleState;
    v113 = v7->GroupIndex;
    v54 = v7->SchedulerAssist;
    v102 = v7->CoreProcessorSet;
    if ( v54 )
      v54[16] = 1;
    v7->IdleSchedule = v14;
    if ( (v53 & 1) == 0 )
      goto LABEL_23;
    v106 = 0;
    v99 = v53 & 0xFE;
    v7->IdleState = v53 & 0xFE;
    v55 = v52;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v55, 0LL) )
    {
      do
        KeYieldProcessorEx(&v106);
      while ( v55->SubNodeLock );
    }
    v33 = v55;
    if ( (v99 & 8) == 0 )
      v55->IdleNonParkedCpuSet |= 1LL << v113;
    v42 = v113;
    v56 = v55->IdleCpuSet | (1LL << v113);
    v55->IdleCpuSet = v56;
    if ( (v102 & v56) == v102 )
    {
      v55->IdleSmtSet |= v102;
    }
    else
    {
      v58 = v102 & ~v56;
      if ( ((v58 - 1) & v58) == 0 )
        v55->NonPairedSmtSet |= v58;
    }
  }
  v33->NonPairedSmtSet &= ~(1LL << v42);
  GroupModuleProcessorSet = v7->GroupModuleProcessorSet;
  if ( (v33->IdleCpuSet & GroupModuleProcessorSet) != GroupModuleProcessorSet )
  {
LABEL_44:
    _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
LABEL_45:
    v8 = a3;
    LOBYTE(a4) = 0;
    v9 = a2;
    goto LABEL_23;
  }
  v33->IdleModuleSet |= GroupModuleProcessorSet;
  _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
  v8 = a3;
  LOBYTE(a4) = 0;
  v9 = a2;
LABEL_23:
  if ( v13 && v9 != v7 )
  {
    v27 = *(_BYTE *)(a1 + 35);
    if ( v12 )
      v28 = v27 | 8;
    else
      v28 = v27 | 0x10;
    *(_BYTE *)(a1 + 35) = v28;
    LOBYTE(a4) = 1;
  }
  if ( v9 != v7 && (_KTHREAD *)v4 != *p_IdleThread && v9->SchedulerAssist )
  {
    v97 = *(_BYTE *)(v4 + 195);
    LOBYTE(a4) = 1;
    *(_BYTE *)(a1 + 35) |= 4u;
    *(_BYTE *)(a1 + 36) = v97;
  }
  if ( (v8 & 2) != 0 )
  {
    if ( v4 )
    {
      _InterlockedIncrement16((volatile signed __int16 *)(v4 + 868));
      *(_BYTE *)(a1 + 35) |= 3u;
      LOBYTE(a4) = 1;
    }
  }
  return (char)a4;
}
