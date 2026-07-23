/*
 * XREFs of ExpSetTimerObject @ 0x140248D90
 * Callers:
 *     NtSetTimerEx @ 0x140248B10 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140376560 (ExpSetTimer.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiRemoveEntryTimer @ 0x140247100 (KiRemoveEntryTimer.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140249AE0 (ObpTraceObjectDereferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402C8690 (KiInsertTimerTable.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ObpDeferObjectDeletion @ 0x140315484 (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x14031B20C (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueApc @ 0x14031E0BC (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x1403214A0 (KeRemoveQueueDpcEx.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     PoDestroyReasonContext @ 0x14034BC54 (PoDestroyReasonContext.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x140523A9C (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E4D8 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x14094F5BC (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 *a3,
        volatile signed __int32 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v10; // r10
  char v12; // r13
  _KPROCESS *Process; // rbx
  char v14; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v17; // rcx
  int v18; // r13d
  unsigned __int8 v19; // si
  char v20; // r14
  unsigned int v21; // eax
  int v22; // r12d
  unsigned int v23; // r14d
  unsigned int v24; // r10d
  __int64 *v25; // r12
  __int64 v26; // rbx
  KSPIN_LOCK *v27; // r11
  char v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  struct _KPRCB *v32; // r12
  char v33; // r13
  _KPROCESS *v34; // rcx
  char v35; // al
  __int16 v36; // ax
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rax
  ULONG_PTR v40; // rbx
  __int64 v41; // rsi
  void *v42; // rbx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v46; // rdx
  __int64 v48; // r13
  volatile signed __int32 *v49; // rbx
  struct _KPRCB *v50; // rdx
  _DWORD *v51; // rcx
  __int64 v52; // r12
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int64 v55; // rdx
  signed __int64 v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rcx
  struct _KTHREAD *v59; // rbx
  KSPIN_LOCK *p_StackLimit; // r14
  char *v61; // rax
  void **p_StackBase; // rbx
  char **v63; // rdx
  unsigned __int64 v64; // rdx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  _DWORD *v67; // rcx
  struct _KTHREAD *v68; // rbx
  __int64 v69; // rcx
  char v70; // dl
  __int64 v71; // r14
  int SessionId; // eax
  bool v73; // zf
  signed __int8 v74; // cf
  _QWORD *v75; // rax
  _QWORD *v76; // rcx
  char v77; // r11
  struct _KTHREAD *v78; // rsi
  ULONG_PTR v79; // r9
  unsigned __int8 v80; // r12
  __int64 v81; // r15
  unsigned int v82; // edx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ecx
  unsigned __int8 v86; // r13
  struct _KPRCB *v87; // rcx
  _DWORD *v88; // rdx
  unsigned int v89; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *SchedulerAssist; // r9
  int v92; // eax
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  struct _KTHREAD *v98; // rbx
  __int64 v99; // rcx
  unsigned __int8 v100; // al
  char v101; // dl
  __int64 v102; // r14
  int v103; // eax
  unsigned __int8 v104; // r10
  _DWORD *v105; // r9
  __int64 v106; // rbx
  __int64 v107; // r8
  _QWORD *v108; // rdx
  _DWORD *v109; // r9
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r10
  _DWORD *v117; // r9
  int v118; // eax
  unsigned int v119; // edx
  int v120; // eax
  unsigned int v121; // eax
  _DWORD *v122; // r9
  __int64 v123; // r8
  struct _KPRCB *v124; // rcx
  _DWORD *v125; // rdx
  int v126; // eax
  __int64 v127; // rsi
  volatile signed __int64 *v128; // r12
  __int64 v129; // rcx
  int v130; // eax
  _DWORD *v131; // rcx
  int v132; // eax
  struct _KPRCB *v133; // rcx
  _DWORD *v134; // rdx
  int v135; // eax
  struct _KPRCB *v136; // rcx
  _DWORD *v137; // rdx
  int v138; // eax
  int v139; // eax
  unsigned __int8 v140; // al
  struct _KPRCB *v141; // r10
  _DWORD *v142; // r9
  int v143; // eax
  _QWORD *v144; // rax
  __int64 v145; // rdx
  _QWORD *v146; // rcx
  __int64 v147; // rcx
  char v149; // [rsp+41h] [rbp-167h]
  char v150; // [rsp+42h] [rbp-166h]
  int v151; // [rsp+44h] [rbp-164h]
  unsigned int v152; // [rsp+48h] [rbp-160h]
  int v153; // [rsp+4Ch] [rbp-15Ch]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-158h]
  unsigned __int8 v155; // [rsp+58h] [rbp-150h]
  __int64 v156; // [rsp+60h] [rbp-148h]
  struct _KPRCB *v157; // [rsp+60h] [rbp-148h]
  __int64 v158; // [rsp+60h] [rbp-148h]
  int v159; // [rsp+68h] [rbp-140h] BYREF
  int v160; // [rsp+6Ch] [rbp-13Ch] BYREF
  int v161; // [rsp+70h] [rbp-138h]
  int v162; // [rsp+74h] [rbp-134h]
  volatile signed __int32 *v163; // [rsp+78h] [rbp-130h]
  __int64 v164; // [rsp+80h] [rbp-128h]
  struct _KPRCB *v165; // [rsp+88h] [rbp-120h]
  int v166; // [rsp+90h] [rbp-118h]
  int v167; // [rsp+94h] [rbp-114h] BYREF
  int v168; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v169; // [rsp+A0h] [rbp-108h]
  int v170; // [rsp+A8h] [rbp-100h]
  int v171; // [rsp+ACh] [rbp-FCh]
  int v172; // [rsp+B0h] [rbp-F8h]
  volatile signed __int32 *v173; // [rsp+B8h] [rbp-F0h] BYREF
  int v174; // [rsp+C0h] [rbp-E8h]
  volatile signed __int64 *v175; // [rsp+C8h] [rbp-E0h] BYREF
  ULONG_PTR v176; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  int v178; // [rsp+E0h] [rbp-C8h] BYREF
  int v179; // [rsp+E4h] [rbp-C4h] BYREF
  __int128 v180; // [rsp+E8h] [rbp-C0h]
  __int64 v181; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR v182; // [rsp+100h] [rbp-A8h] BYREF
  ULONG_PTR v183; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v184; // [rsp+110h] [rbp-98h]
  struct _KPRCB *v185; // [rsp+118h] [rbp-90h]
  __int64 v186; // [rsp+120h] [rbp-88h]
  _BYTE *v187; // [rsp+128h] [rbp-80h]
  __int128 v188; // [rsp+138h] [rbp-70h]
  __int64 v189; // [rsp+148h] [rbp-60h]
  _QWORD v190[2]; // [rsp+150h] [rbp-58h] BYREF
  _QWORD v191[2]; // [rsp+160h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v163 = a4;
  v169 = a3;
  v10 = a2;
  v187 = a10;
  v152 = 0;
  v12 = 0;
  v150 = 0;
  CurrentThread = 0LL;
  v164 = a6;
  if ( !a6 )
    goto LABEL_2;
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v89 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10]);
      v152 = v89;
      if ( v89 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v89;
      }
    }
    v10 = a2;
  }
  if ( (int)qword_140C23420 < 2 && !byte_140C233F3 )
  {
    v152 = 1073741861;
    v164 = 0LL;
    goto LABEL_2;
  }
  v12 = 1;
  v150 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v171 = 0;
  v68 = KeGetCurrentThread();
  --v68->SpecialApcDisable;
  if ( ++v68->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v68, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  v170 = 0;
  LOBYTE(v69) = v68->AbEntrySummary;
  if ( !(_BYTE)v69 )
  {
    if ( !v68->AbOrphanedEntrySummary )
    {
      v71 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v68, &ExpWakeTimerLock);
      goto LABEL_96;
    }
    AbOrphanedEntrySummary = v68->AbOrphanedEntrySummary;
    v68->AbOrphanedEntrySummary = 0;
    LOBYTE(v69) = AbOrphanedEntrySummary | v68->AbEntrySummary;
  }
  v70 = v69;
  _BitScanForward((unsigned int *)&v69, (unsigned __int8)v69);
  v170 = v69;
  v68->AbEntrySummary = v70 & ~(1 << v69);
  v71 = (__int64)&v68->LockEntries[v69];
LABEL_96:
  if ( v71 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(v68->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v71 + 40) = SessionId;
    *(_QWORD *)(v71 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v68->116 + 1, 0x10u);
  }
  --v68->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v68);
  v73 = v68->SpecialApcDisable++ == -1;
  if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
    KiCheckForKernelApcDelivery();
  v74 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v74 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v71, &ExpWakeTimerLock);
  v10 = a2;
  if ( v71 )
    *(_BYTE *)(v71 + 26) |= 1u;
LABEL_2:
  v176 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v14 = 0;
  v149 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v155 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].AffinityPadding[4]);
    v14 = 1;
    v149 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v92 = v17[6];
        v17[6] = v92 + 1;
        if ( v92 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v65 = CurrentPrcb->SchedulerAssist;
      if ( v65 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v93 = v65[6] - 1;
          v65[6] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 64);
    }
    Process = (_KPROCESS *)Object;
  }
  if ( !v12 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v14 )
      KxReleaseSpinLock(&Process[2].AffinityPadding[4]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v94 = KeGetCurrentIrql();
        if ( v94 <= 0xFu && v155 <= 0xFu && v94 >= 2u )
        {
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          v97 = ~(unsigned __int16)(-1LL << (v155 + 1));
          v73 = (v97 & v96[5]) == 0;
          v96[5] &= v97;
          if ( v73 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
    }
    __writecr8(v155);
    v150 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v174 = 0;
    v98 = KeGetCurrentThread();
    --v98->SpecialApcDisable;
    if ( ++v98->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v98, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    v172 = 0;
    LOBYTE(v99) = v98->AbEntrySummary;
    if ( !(_BYTE)v99 )
    {
      if ( !v98->AbOrphanedEntrySummary )
      {
        v102 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v98, &ExpWakeTimerLock);
        goto LABEL_183;
      }
      v100 = v98->AbOrphanedEntrySummary;
      v98->AbOrphanedEntrySummary = 0;
      LOBYTE(v99) = v100 | v98->AbEntrySummary;
    }
    v101 = v99;
    _BitScanForward((unsigned int *)&v99, (unsigned __int8)v99);
    v172 = v99;
    v98->AbEntrySummary = v101 & ~(1 << v99);
    v102 = (__int64)&v98->LockEntries[v99];
LABEL_183:
    if ( v102 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v103 = MmGetSessionIdEx(v98->ApcState.Process);
      }
      else
      {
        v103 = -1;
      }
      *(_DWORD *)(v102 + 40) = v103;
      *(_QWORD *)(v102 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v98->116 + 1, 0x10u);
    }
    --v98->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v98);
    v73 = v98->SpecialApcDisable++ == -1;
    if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
      KiCheckForKernelApcDelivery();
    v74 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v74 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v102, &ExpWakeTimerLock);
    if ( v102 )
      *(_BYTE *)(v102 + 26) |= 1u;
    v104 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v104 <= 0xFu )
    {
      v105 = KeGetCurrentPrcb()->SchedulerAssist;
      v105[5] |= (-1 << (v104 + 1)) & 4;
    }
    v155 = v104;
    if ( v149 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v106 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v106 + 1120));
    v107 = *(_QWORD *)(BugCheckParameter2 + 224);
    v108 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v107 + 8) != BugCheckParameter2 + 224 || *v108 != BugCheckParameter2 + 224 )
      goto LABEL_322;
    *v108 = v107;
    *(_QWORD *)(v107 + 8) = v108;
    KxReleaseSpinLock((PKSPIN_LOCK)(v106 + 1120));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v18 = 1;
    }
    v22 = BugCheckParameter2 + 72;
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v18;
  }
  else
  {
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      v109 = KeGetCurrentPrcb()->SchedulerAssist;
      v109[5] |= (-1 << (v19 + 1)) & 4;
    }
    v182 = 0LL;
    v173 = 0LL;
    v159 = 0;
    v20 = 0;
    while ( 1 )
    {
      v178 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v178);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v48 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v165 = (struct _KPRCB *)(KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656);
      v49 = (volatile signed __int32 *)(&v165->ProcessorState.ContextFrame.P3Home
                                      + 1024 * (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58)
                                      + 4 * v48);
      v50 = KeGetCurrentPrcb();
      v157 = v50;
      v179 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v110 = v51[6];
          v51[6] = v110 + 1;
          if ( v110 == -1 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64(v49, 0LL) )
      {
        v66 = v157->SchedulerAssist;
        if ( v66 )
        {
          if ( v157->NestingLevel <= 1u )
          {
            v111 = v66[6] - 1;
            v66[6] = v111;
            if ( !v111 )
              KiRemoveSystemWorkPriorityKick(v157);
          }
        }
        do
          KeYieldProcessorEx(&v179);
        while ( *(_QWORD *)v49 );
        v67 = v157->SchedulerAssist;
        if ( v67 )
        {
          if ( v157->NestingLevel <= 1u )
          {
            v112 = v67[6];
            v67[6] = v112 + 1;
            if ( v112 == -1 )
              KiRemoveSystemWorkPriorityKick(v157);
          }
        }
      }
      v173 = v49;
      v52 = (__int64)v165;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
      v87 = KeGetCurrentPrcb();
      v88 = v87->SchedulerAssist;
      if ( v88 )
      {
        if ( v87->NestingLevel <= 1u )
        {
          v113 = v88[6] - 1;
          v88[6] = v113;
          if ( !v113 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v52 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        v21 = 16777087;
        v20 = 1;
        goto LABEL_18;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v159 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v159);
    }
    KiRemoveEntryTimer((__int64)v165, BugCheckParameter2, v48, (volatile signed __int64 **)&v173);
    _InterlockedAnd64((volatile signed __int64 *)v173, 0LL);
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v114 = v54[6] - 1;
        v54[6] = v114;
        if ( !v114 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    v21 = -1073741953;
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v20 )
    {
      v182 = BugCheckParameter2;
      v191[0] = &v182;
      v191[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v191, 1, 1073872896, 3925, 1538);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v115 = KeGetCurrentIrql();
        if ( v115 <= 0xFu && v19 <= 0xFu && v115 >= 2u )
        {
          v116 = KeGetCurrentPrcb();
          v117 = v116->SchedulerAssist;
          v118 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v73 = (v118 & v117[5]) == 0;
          v117[5] &= v118;
          if ( v73 )
            KiRemoveSystemWorkPriorityKick(v116);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v153 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  v151 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v163 )
  {
    v59 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v59, 2, (unsigned int)ExpTimerApcRoutine, 0LL, (__int64)v163, a2, a5);
    p_StackLimit = (KSPIN_LOCK *)&v59[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v59[1].StackLimit);
    v61 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v59[1].StackBase;
    v63 = (char **)p_StackBase[1];
    if ( *v63 != (char *)p_StackBase )
      goto LABEL_322;
    *(_QWORD *)v61 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v63;
    *v63 = v61;
    p_StackBase[1] = v61;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v176 = BugCheckParameter2 + 160;
    v23 = v18;
    v24 = 0;
    v151 = 0;
  }
  v25 = v169;
  v26 = *v169;
  v156 = *v169;
  v27 = Object;
  v28 = v149;
  if ( v149 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v24 = v151;
      v27 = Object;
    }
    _InterlockedIncrement((volatile signed __int32 *)v27 + 606);
    if ( (v27[79] & 0x10) != 0 )
    {
      v58 = *((unsigned int *)v27 + 17);
      if ( (_DWORD)v58 )
      {
        v166 = *((_DWORD *)v27 + 17);
        v26 = *v25;
        if ( *v25 >= 0 )
        {
          if ( (unsigned __int64)v26 <= MEMORY[0xFFFFF78000000014] )
            v26 = MEMORY[0xFFFFF78000000014];
          v26 += v58;
          if ( v26 < *v25 )
            v26 = *v25;
          LODWORD(v58) = v166;
        }
        else if ( v26 - v58 <= v26 )
        {
          v26 -= v58;
        }
        HIDWORD(v156) = HIDWORD(v26);
        v119 = (unsigned int)v58 / 0x2710;
        if ( v24 )
        {
          v120 = v119 + v24;
          if ( v119 + v24 > v24 )
          {
            v24 += v119;
            v151 = v120;
            *(_DWORD *)(BugCheckParameter2 + 240) += v119;
LABEL_261:
            *(_DWORD *)(BugCheckParameter2 + 244) = v119;
            goto LABEL_23;
          }
        }
        v121 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v121 && v121 + v119 > v121 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v121 + v119;
          goto LABEL_261;
        }
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    v41 = v164;
    if ( v156 < 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = (v164 != 0) + 2;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    goto LABEL_44;
  }
  v29 = v26;
  v188 = 0LL;
  v189 = 0LL;
  if ( a9 )
  {
    v55 = 10000LL * a9;
    if ( v55 > 0xFC0000 )
    {
      v56 = v55 - 16515072;
      if ( v26 >= 0 )
      {
        v26 += v56;
        if ( v26 < v29 )
          v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v26 -= v56;
        if ( v26 > v29 )
          v26 = 0x8000000000000000uLL;
      }
      if ( v24 )
      {
        v64 = (__int64)((unsigned __int128)(v56 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( v24 + (unsigned int)v64 + (v64 >> 63) < v24 )
          v151 = -1;
        else
          v151 = v24 + v64 + (v64 >> 63);
      }
      LODWORD(v55) = 16515072;
    }
    v57 = (unsigned int)v55 >> 18;
    if ( v57 > 0x3F )
      LOBYTE(v57) = 63;
    BYTE1(v188) = 4 * v57;
  }
  v30 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v176 ^ KiWaitAlways), KiWaitNever);
  v184 = v30;
  v31 = KeGetCurrentIrql();
  v186 = v31;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
  {
    v122 = KeGetCurrentPrcb()->SchedulerAssist;
    v122[5] |= (-1 << (v31 + 1)) & 4;
  }
  v32 = KeGetCurrentPrcb();
  v185 = v32;
  v183 = 0LL;
  v175 = 0LL;
  v160 = 0;
  v33 = 0;
  while ( 1 )
  {
    v167 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v167);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      break;
    v123 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    LODWORD(v169) = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v158 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 14656;
    v163 = (volatile signed __int32 *)(v158
                                     + 32
                                     * (v123
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v124 = KeGetCurrentPrcb();
    v165 = v124;
    v168 = 0;
    v125 = v124->SchedulerAssist;
    if ( v125 )
    {
      if ( v124->NestingLevel <= 1u )
      {
        v126 = v125[6];
        v125[6] = v126 + 1;
        if ( v126 == -1 )
          KiRemoveSystemWorkPriorityKick(v124);
      }
    }
    v127 = (__int64)v165;
    while ( 1 )
    {
      v128 = (volatile signed __int64 *)v163;
      if ( !_interlockedbittestandset64(v163, 0LL) )
        break;
      v129 = *(_QWORD *)(v127 + 33976);
      if ( v129 )
      {
        if ( *(_BYTE *)(v127 + 32) <= 1u )
        {
          v130 = *(_DWORD *)(v129 + 24) - 1;
          *(_DWORD *)(v129 + 24) = v130;
          if ( !v130 )
            KiRemoveSystemWorkPriorityKick(v127);
        }
      }
      do
        KeYieldProcessorEx(&v168);
      while ( *v128 );
      v127 = (__int64)v165;
      v131 = v165->SchedulerAssist;
      if ( v131 )
      {
        if ( v165->NestingLevel <= 1u )
        {
          v132 = v131[6];
          v131[6] = v132 + 1;
          if ( v132 == -1 )
            KiRemoveSystemWorkPriorityKick(v127);
        }
      }
    }
    v175 = v128;
    v30 = v184;
    v32 = v185;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
    {
      KiRemoveEntryTimer(v158, BugCheckParameter2, (unsigned int)v169, &v175);
      _InterlockedAnd64(v175, 0LL);
      v136 = KeGetCurrentPrcb();
      v137 = v136->SchedulerAssist;
      if ( v137 )
      {
        if ( v136->NestingLevel <= 1u )
        {
          v138 = v137[6] - 1;
          v137[6] = v138;
          if ( !v138 )
            KiRemoveSystemWorkPriorityKick(v136);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      goto LABEL_303;
    }
    _InterlockedAnd64((volatile signed __int64 *)v163, 0LL);
    v133 = KeGetCurrentPrcb();
    v134 = v133->SchedulerAssist;
    if ( v134 )
    {
      if ( v133->NestingLevel <= 1u )
      {
        v135 = v134[6] - 1;
        v134[6] = v135;
        if ( !v135 )
          KiRemoveSystemWorkPriorityKick(v133);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v158 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
LABEL_303:
      v33 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v160 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v160);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v33 )
  {
    v183 = BugCheckParameter2;
    v190[0] = &v183;
    v190[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v190, 1, 1073872896, 3925, 1538);
  }
  v36 = 0;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    if ( v32->NestingLevel
      || ((v34 = KeGetCurrentThread()->ApcState.Process, (v34[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(v34[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v35 = 0)
        : (v35 = 1),
          !v35) )
    {
      v36 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v36;
  *(_QWORD *)(BugCheckParameter2 + 48) = v30;
  *(_DWORD *)(BugCheckParameter2 + 60) = v151;
  v180 = 0LL;
  v181 = 0LL;
  LODWORD(v180) = *(_DWORD *)BugCheckParameter2;
  v37 = BYTE1(v188);
  BYTE1(v180) = BYTE1(v188);
  if ( v26 >= 0 )
  {
    BYTE1(v180) = BYTE1(v188) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v180;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_71:
      KiTimerWaitTest((__int64)v32, BugCheckParameter2, 0LL);
      goto LABEL_42;
    }
    v37 = BYTE1(v180);
  }
  v38 = 0LL;
  if ( (v37 & 0xFC) != 0 )
    v38 = (unsigned __int8)(v37 & 0xFC) << 16;
  v39 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  BYTE3(v180) |= 0x40u;
  BYTE2(v180) = (unsigned __int64)(v38 + v39) >> 18;
  *(_DWORD *)BugCheckParameter2 = v180;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v40 = v176;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)v32,
                           BugCheckParameter2,
                           v176,
                           (unsigned __int8)((unsigned __int64)(v38 + v39) >> 18),
                           0LL) )
    goto LABEL_71;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v40, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_42:
  KiExitDispatcher((_DWORD)v32, 0, 1, 0, v186);
  v41 = v164;
  v28 = v149;
  v27 = Object;
  if ( v164 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_44:
  v42 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v41;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(BugCheckParameter2 + 64, retaddr);
    v27 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  }
  v43 = KeGetCurrentPrcb();
  v44 = v43->SchedulerAssist;
  if ( v44 )
  {
    if ( v43->NestingLevel <= 1u )
    {
      v139 = v44[6] - 1;
      v44[6] = v139;
      if ( !v139 )
      {
        KiRemoveSystemWorkPriorityKick(v43);
        v27 = Object;
      }
    }
  }
  if ( v28 )
    KxReleaseSpinLock(v27 + 305);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v140 = KeGetCurrentIrql();
      if ( v140 <= 0xFu && v155 <= 0xFu && v140 >= 2u )
      {
        v141 = KeGetCurrentPrcb();
        v142 = v141->SchedulerAssist;
        v143 = ~(unsigned __int16)(-1LL << (v155 + 1));
        v73 = (v143 & v142[5]) == 0;
        v142[5] &= v143;
        if ( v73 )
          KiRemoveSystemWorkPriorityKick(v141);
      }
    }
  }
  __writecr8(v155);
  if ( v150 )
  {
    if ( v42 )
    {
      if ( !v41 )
      {
        v144 = (_QWORD *)(BugCheckParameter2 + 264);
        v145 = *(_QWORD *)(BugCheckParameter2 + 264);
        v146 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v145 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v146 != v144 )
          goto LABEL_322;
        *v146 = v145;
        *(_QWORD *)(v145 + 8) = v146;
        *v144 = 0LL;
      }
LABEL_112:
      v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v77 & 2) != 0 && (v77 & 4) == 0 )
        ExfTryToWakePushLock(&ExpWakeTimerLock);
      v162 = 0;
      v78 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
        v79 = (unsigned int)MmGetSessionIdEx(v78->ApcState.Process);
      else
        v79 = 0xFFFFFFFFLL;
      --v78->SpecialApcDisable;
      v80 = ++v78->AbAllocationRegionCount;
      v161 = 0;
      v81 = 0LL;
      v82 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3F;
      v73 = !_BitScanReverse((unsigned int *)&v83, v82);
      v161 = v83;
      if ( !v73 )
      {
        while ( 1 )
        {
          v82 &= ~(1 << v83);
          v84 = (__int64)&v78->LockEntries[v83];
          if ( (*(_BYTE *)(v84 + 26) & 1) != 0
            && (*(_DWORD *)(v84 + 32) & 1) == 0
            && (*(_QWORD *)(v84 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v84 + 40) == (_DWORD)v79 )
          {
            *(_BYTE *)(v84 + 26) &= ~1u;
            if ( *(_QWORD *)(v84 + 32) )
              break;
          }
          v73 = !_BitScanReverse((unsigned int *)&v83, v82);
          v161 = v83;
          if ( v73 )
            goto LABEL_122;
        }
        v81 = v84;
      }
LABEL_122:
      if ( v81 )
      {
        *(_BYTE *)(v81 + 32) |= 2u;
        if ( *(__int64 *)(v81 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v81);
        v85 = *(_DWORD *)(v81 + 88);
        v162 = v85 & 0x1FFFF;
        *(_DWORD *)(v81 + 88) = v85 & 0xFFFE0000;
        *(_BYTE *)(v81 + 25) &= ~1u;
        *(_QWORD *)(v81 + 32) = 0LL;
        v86 = 1 << ((signed __int64)(v81 - (unsigned __int64)v78->LockEntries) / 96);
        if ( v80 == 1 )
          v78->AbEntrySummary |= v86;
        else
          _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, v86);
      }
      else if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v78, (ULONG_PTR)&ExpWakeTimerLock, v79, 0LL);
      }
      --v78->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v78);
      v73 = v78->SpecialApcDisable++ == -1;
      if ( v73 && ($C459BD0D405E8E46662177FB3D0A143F *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v42 )
        PoDestroyReasonContext(v42);
      goto LABEL_51;
    }
    if ( !v41 )
      goto LABEL_112;
    v75 = (_QWORD *)(BugCheckParameter2 + 264);
    v76 = (_QWORD *)qword_140C16B38;
    if ( *(__int64 **)qword_140C16B38 == &ExpWakeTimerList )
    {
      *v75 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v76;
      *v76 = v75;
      qword_140C16B38 = BugCheckParameter2 + 264;
      goto LABEL_112;
    }
LABEL_322:
    __fastfail(3u);
  }
LABEL_51:
  if ( v23 )
  {
    ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, v23, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v23) - v23;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v46 = v187;
  if ( !v187 )
    return v152;
  if ( !a2 )
  {
    *v187 = v153;
    return v152;
  }
  v147 = (__int64)v187;
  if ( (unsigned __int64)v187 >= 0x7FFFFFFF0000LL )
    v147 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v147 = *(_BYTE *)v147;
  *v46 = v153;
  return v152;
}
