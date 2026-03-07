char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9,
        LARGE_INTEGER *a10)
{
  __int64 v12; // r15
  NTSTATUS v13; // edi
  __int64 v14; // r10
  int v15; // edx
  bool v16; // si
  struct _KTHREAD *CurrentThread; // r8
  struct _SLIST_ENTRY *v18; // rbx
  unsigned __int64 v19; // r13
  bool v20; // r9
  __int64 v21; // rsi
  struct _KTHREAD *v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r14
  struct _KTHREAD *v27; // r12
  _QWORD *Object; // rsi
  int v29; // r14d
  _KPROCESS *Process; // rbx
  NTSTATUS v31; // ebx
  __int64 v32; // r13
  __int64 v33; // rbx
  int v34; // r14d
  int v35; // r14d
  __int64 VirtualAddress; // rax
  unsigned int v37; // edx
  ULONG_PTR v38; // r10
  unsigned int v39; // r12d
  int v40; // eax
  int v41; // ebx
  unsigned int v42; // ecx
  __int64 v43; // r9
  int v44; // esi
  BOOL v45; // r8d
  int v46; // ecx
  int v47; // eax
  int v48; // r15d
  NTSTATUS v49; // r14d
  unsigned int v50; // r12d
  NTSTATUS v51; // eax
  BOOL v52; // r12d
  __int64 v53; // rbx
  struct _KEVENT *v54; // rcx
  int v55; // ecx
  char v56; // al
  char v57; // r14
  struct _MDL *v58; // r15
  __int64 v59; // rcx
  char v60; // r8
  ULONG_PTR v61; // rsi
  void *v62; // r10
  int v63; // ecx
  unsigned int v64; // ecx
  int v65; // r14d
  bool v66; // si
  unsigned int v67; // ecx
  struct _KTHREAD *v68; // rdx
  struct _KTHREAD *v69; // rcx
  char v70; // al
  BOOLEAN IsNtstatusExpected; // al
  __int64 v72; // rcx
  int v73; // r8d
  unsigned int v74; // esi
  BOOLEAN v75; // al
  __int64 v76; // rcx
  unsigned int v77; // ecx
  struct _KTHREAD *v78; // rdx
  char v79; // al
  __int64 v81; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v83; // r15
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rsi
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rbx
  __int64 v88; // rsi
  struct _KEVENT *v89; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v93; // edx
  bool v94; // zf
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v96; // rax
  unsigned __int8 v97; // cl
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // eax
  unsigned __int8 v105; // cl
  struct _KPRCB *v106; // r10
  _DWORD *v107; // r9
  int v108; // eax
  unsigned __int8 v109; // cl
  struct _KPRCB *v110; // r9
  _DWORD *v111; // r8
  int v112; // eax
  BOOLEAN v113; // al
  __int64 v114; // rcx
  char v115; // [rsp+78h] [rbp-178h]
  bool v116; // [rsp+79h] [rbp-177h]
  char v117; // [rsp+7Ah] [rbp-176h]
  char v118; // [rsp+7Bh] [rbp-175h]
  char v119; // [rsp+7Ch] [rbp-174h]
  char v120; // [rsp+7Dh] [rbp-173h]
  char v121; // [rsp+7Eh] [rbp-172h]
  char v122; // [rsp+7Fh] [rbp-171h] BYREF
  char v123; // [rsp+80h] [rbp-170h] BYREF
  bool v124; // [rsp+81h] [rbp-16Fh]
  char v125; // [rsp+82h] [rbp-16Eh]
  char v126; // [rsp+83h] [rbp-16Dh]
  bool v127; // [rsp+84h] [rbp-16Ch]
  char v128; // [rsp+86h] [rbp-16Ah]
  int v129; // [rsp+88h] [rbp-168h]
  unsigned int v130; // [rsp+8Ch] [rbp-164h]
  unsigned int v131; // [rsp+90h] [rbp-160h]
  NTSTATUS Exception; // [rsp+94h] [rbp-15Ch]
  BOOL v133; // [rsp+98h] [rbp-158h]
  unsigned int v134; // [rsp+9Ch] [rbp-154h] BYREF
  int v135; // [rsp+A0h] [rbp-150h]
  ULONG_PTR v136; // [rsp+A8h] [rbp-148h]
  __int64 v137; // [rsp+B0h] [rbp-140h] BYREF
  unsigned int v138; // [rsp+B8h] [rbp-138h]
  __int64 v139; // [rsp+C0h] [rbp-130h] BYREF
  int v140; // [rsp+C8h] [rbp-128h]
  int v141; // [rsp+CCh] [rbp-124h]
  unsigned int v142; // [rsp+D0h] [rbp-120h]
  unsigned int v143; // [rsp+D4h] [rbp-11Ch] BYREF
  int v144; // [rsp+D8h] [rbp-118h]
  NTSTATUS v145[4]; // [rsp+E0h] [rbp-110h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-100h]
  struct _KTHREAD *v147; // [rsp+F8h] [rbp-F8h]
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+100h] [rbp-F0h] BYREF
  int v149; // [rsp+118h] [rbp-D8h]
  int v150; // [rsp+11Ch] [rbp-D4h]
  unsigned int v151; // [rsp+120h] [rbp-D0h]
  NTSTATUS v152; // [rsp+124h] [rbp-CCh]
  int v153; // [rsp+128h] [rbp-C8h]
  int v154; // [rsp+130h] [rbp-C0h]
  struct _MDL *v155; // [rsp+138h] [rbp-B8h] BYREF
  BOOL v156; // [rsp+140h] [rbp-B0h]
  __int64 v157; // [rsp+148h] [rbp-A8h]
  __int64 v158; // [rsp+150h] [rbp-A0h]
  __int64 v159; // [rsp+158h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+160h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v161; // [rsp+178h] [rbp-78h] BYREF
  __int128 v162; // [rsp+198h] [rbp-58h]
  __int64 v163; // [rsp+1A8h] [rbp-48h]
  unsigned int v167; // [rsp+210h] [rbp+20h]

  v167 = a4;
  v135 = a4;
  v12 = a1;
  v13 = 0;
  v134 = 0;
  v131 = 0;
  v146 = 0LL;
  *(_OWORD *)v145 = 0LL;
  v14 = a6;
  v15 = *(_DWORD *)(a6 + 80);
  v16 = (v15 & 0x10) != 0;
  v115 = v16;
  v151 = a4;
  v130 = *a3 & 0xFFF;
  v139 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v147 = CurrentThread;
  v129 = 0;
  v125 = 0;
  v118 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v123 = 1;
  v117 = 0;
  v121 = 0;
  memset(&v148, 0, sizeof(v148));
  memset(&v161, 0, sizeof(v161));
  if ( _bittest((const signed __int32 *)(a1 + 152), 0xCu) )
    v120 = 1;
  else
    v120 = 0;
  v137 = *(_QWORD *)a3;
  v141 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v150 = v141;
  v20 = (v15 & 0x10) != 0;
  v119 = v20;
  v127 = v20;
  if ( (v15 & 0x10) == 0 )
  {
    v119 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v162 = 0LL;
    v163 = 0LL;
    v21 = *(_QWORD *)(a1 + 536);
    if ( (v15 & 0x1000000) != 0 )
    {
      if ( !(unsigned __int8)CcCanIWriteStreamEx(v21, *(_QWORD *)(a1 + 600), a6, v167, 0, 0, 0LL) )
      {
LABEL_153:
        v20 = 1;
        v119 = 1;
        if ( (*(_DWORD *)(v12 + 152) & 0x400) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &LockHandle);
          *(_DWORD *)(v12 + 152) |= 0x400u;
          KxReleaseQueuedSpinLock(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v93 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v94 = (v93 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v93;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
          v20 = 1;
        }
LABEL_8:
        v127 = v20;
        v16 = v115;
        goto LABEL_9;
      }
      v20 = 0;
      v14 = a6;
    }
    v22 = KeGetCurrentThread();
    v23 = (*((_DWORD *)&v22[1].SwapListEntry + 2) >> 9) & 7;
    v24 = v22->Process[1].Affinity.StaticBitmap[16];
    if ( v24 && v23 >= *(_DWORD *)(v24 + 1068) )
      v23 = *(_DWORD *)(v24 + 1068);
    if ( v23 < 2 && v22 == KeGetCurrentThread() && LODWORD(v22[1].Timer.TimerListEntry.Flink)
      || v23 > 0
      || (*(_DWORD *)(v14 + 80) & 0x8000) != 0 )
    {
      goto LABEL_8;
    }
    goto LABEL_153;
  }
LABEL_9:
  if ( !v20 )
  {
LABEL_10:
    v25 = 6;
    if ( a8 )
      v25 = 4;
    v142 = v25;
    v26 = *(_QWORD *)(v12 + 536);
    v158 = v26;
    v159 = v26;
    if ( v16 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 768), &v148);
      if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 832), &v161);
        v18 = *(struct _SLIST_ENTRY **)(v12 + 504);
        if ( !v18 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v161);
          KeReleaseInStackQueuedSpinLock(&v148);
          KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
          RtlRaiseStatus(3221225688LL);
        }
        Next = v18->Next;
        v96 = (struct _SLIST_ENTRY **)*((_QWORD *)&v18->Next + 1);
        if ( *(&v18->Next->Next + 1) != v18 || *v96 != v18 )
          __fastfail(3u);
        *v96 = Next;
        *((_QWORD *)&Next->Next + 1) = v96;
        *((_QWORD *)&v18->Next + 1) = 0LL;
        v18->Next = 0LL;
        *(_QWORD *)(v12 + 504) = 0LL;
        *(_DWORD *)(v12 + 152) &= ~0x20u;
        v118 = 1;
        KxReleaseQueuedSpinLock(&v161);
      }
      ++*(_DWORD *)(v12 + 524);
      v125 = 1;
      KxReleaseQueuedSpinLock(&v148);
      v85 = v148.OldIrql;
      if ( KiIrqlFlags )
      {
        v97 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v97 <= 0xFu && v148.OldIrql <= 0xFu && v97 >= 2u )
        {
          v98 = KeGetCurrentPrcb();
          v99 = v98->SchedulerAssist;
          v100 = ~(unsigned __int16)(-1LL << (v148.OldIrql + 1));
          v94 = (v100 & v99[5]) == 0;
          v99[5] &= v100;
          if ( v94 )
            KiRemoveSystemWorkPriorityKick(v98);
        }
      }
      __writecr8(v85);
    }
    if ( v18 )
      CcFreeWorkQueueEntry(v18);
    v27 = a9;
    if ( !a9 )
    {
      v27 = KeGetCurrentThread();
      a9 = v27;
    }
    Object = v27[1].WaitBlock[1].Object;
    v29 = 0;
    if ( !Object )
      goto LABEL_18;
    if ( v27 != KeGetCurrentThread() )
    {
      v87 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      Object = v27[1].WaitBlock[1].Object;
      if ( Object )
      {
        ObfReferenceObjectWithTag(v27[1].WaitBlock[1].Object, 0x746C6644u);
        v29 = 1;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
      if ( KiIrqlFlags )
      {
        v101 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v101 <= 0xFu && (unsigned __int8)v87 <= 0xFu && v101 >= 2u )
        {
          v102 = KeGetCurrentPrcb();
          v103 = v102->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v87 + 1));
          v94 = (v104 & v103[5]) == 0;
          v103[5] &= v104;
          if ( v94 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
      __writecr8(v87);
    }
    if ( Object )
      Process = (_KPROCESS *)Object[68];
    else
LABEL_18:
      Process = v27->Process;
    if ( Process[2].Affinity.StaticBitmap[18] )
    {
      v83 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
      v84 = Process[2].Affinity.StaticBitmap[18];
      if ( v84 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v84 + 32)) <= 1 )
          __fastfail(0xEu);
        v19 = v84;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
      if ( KiIrqlFlags )
      {
        v105 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v105 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v105 >= 2u )
        {
          v106 = KeGetCurrentPrcb();
          v107 = v106->SchedulerAssist;
          v108 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
          v94 = (v108 & v107[5]) == 0;
          v107[5] &= v108;
          if ( v94 )
            KiRemoveSystemWorkPriorityKick(v106);
        }
      }
      __writecr8(v83);
      v12 = a1;
      if ( v84 )
        v31 = 0;
      else
        v31 = -1073741275;
    }
    else
    {
      v31 = -1073741275;
    }
    if ( v29 )
      ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
    Exception = v31;
    if ( v31 >= 0 )
    {
      MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v19);
      IoDiskIoAttributionDereference(v19);
    }
    LODWORD(v32) = v131;
    v33 = v139;
    v34 = v135;
    while ( v167 )
    {
      if ( v120 )
      {
        v35 = 0;
        a5 = 0;
      }
      else
      {
        v35 = a5;
      }
      v131 = 0;
      VirtualAddress = CcGetVirtualAddress(v12, v137, (unsigned int)&v139, (unsigned int)&v134, 0, 0);
      v136 = VirtualAddress;
      LODWORD(v32) = v134;
      if ( v134 > v167 )
      {
        LODWORD(v32) = v167;
        v134 = v167;
      }
      v131 = v32;
      v167 -= v32;
      v37 = v130;
      v38 = VirtualAddress - v130;
      v136 = v38;
      v39 = v130 + v32;
      v138 = v130 + v32;
      v134 = v130 + v32;
      v40 = 1;
      v140 = 1;
      HIDWORD(v146) = HIDWORD(v137);
      v41 = v137 - v130;
      LODWORD(v146) = v137 - v130;
      v117 = 0;
      v116 = 0;
      v42 = v130 + v32;
      v43 = 4096LL;
      while ( 1 )
      {
        v44 = 0;
        v149 = 0;
        v123 = 1;
        v45 = v42 > 0x1000;
        v133 = v45;
        v156 = v45;
        Exception = 0;
        if ( (v40 & v35) != 0 )
        {
          v46 = v129;
          if ( v146 >= *a7 )
          {
            v46 = v129 | 1;
            v129 |= 1u;
          }
          v47 = *(_DWORD *)(v12 + 152);
          if ( (v47 & 0x40) != 0 )
          {
            v46 |= 2u;
            v129 = v46;
          }
          if ( (v47 & 0x40000000) != 0 )
          {
            v70 = 0;
            if ( !v45 )
              v70 = v39;
            if ( (((unsigned __int8)v37 | (unsigned __int8)(v70 - v37)) & 0x3F) != 0 )
            {
              v46 &= 0xFFFFFFF3;
              v129 = v46;
              v116 = 1;
            }
            else
            {
              v46 |= 4u;
              v129 = v46;
              if ( v115 )
              {
                v46 |= 8u;
                v129 = v46;
              }
            }
          }
          v48 = v46;
          v153 = v46;
          v49 = 0;
          v152 = 0;
          v50 = 1;
          v154 = 1;
          while ( v50 <= 2 )
          {
            v51 = MmCopyToCachedPage(v38, v48);
            v49 = v51;
            v152 = v51;
            if ( (v48 & 8) == 0 || v51 != -1073741670 )
            {
              v37 = v130;
              break;
            }
            v48 &= 0xFFFFFFF3;
            v153 = v48;
            v154 = ++v50;
            v37 = v130;
            v38 = v136;
          }
          v124 = (v48 & 4) == 0;
          Exception = v49;
          if ( v49 < 0 )
          {
            IsNtstatusExpected = FsRtlIsNtstatusExpected(v49);
            v72 = 3221225704LL;
            if ( IsNtstatusExpected )
              v72 = (unsigned int)v49;
            RtlRaiseStatus(v72);
          }
          v117 = 1;
          if ( !v116 )
            v116 = (v48 & 4) == 0;
          v52 = v133;
        }
        else
        {
          v56 = 1;
          v122 = 1;
          v57 = 0;
          v128 = 0;
          if ( v42 > 0x1000 && (a5 & 4) != 0 )
          {
            v69 = v147;
            BYTE4(v147[1].Queue) = 1;
            if ( !LODWORD(v69[1].WaitListEntry.Flink) )
              LODWORD(v69[1].WaitListEntry.Flink) = 1;
          }
          if ( a8 && !a10->QuadPart )
          {
            MmCheckCachedPageStates(v38, 1LL, v142 | 2, &v122);
            v57 = 1;
            v128 = 1;
            v56 = v122;
            if ( !v122 )
            {
              *a10 = KeQueryPerformanceCounter(0LL);
              v56 = v122;
            }
            v38 = v136;
          }
          if ( !v57 || !v56 )
          {
            v44 = MmCheckCachedPageStates(v38, 1LL, v142, &v123);
            v149 = v44;
          }
          if ( !v123 && !a8 )
          {
            v126 = 0;
            v33 = v139;
            v27 = a9;
            v34 = v135;
            goto LABEL_128;
          }
          v58 = 0LL;
          v155 = 0LL;
          v59 = 0LL;
          v157 = 0LL;
          v143 = 0;
          if ( v44 < 0 )
            RtlRaiseStatus((unsigned int)v44);
          v60 = v120;
          v61 = v136;
          if ( v120 )
          {
            v73 = v39;
            v52 = v133;
            if ( v133 )
              v73 = 4096;
            v59 = CcLockSystemCacheBuffer(v136, (unsigned int)&v155, v73, 1, (__int64)&v143);
            v157 = v59;
            if ( !v59 )
              RtlRaiseStatus(v143);
            v58 = v155;
            v60 = v120;
          }
          else
          {
            v52 = v133;
          }
          if ( v60 )
            v62 = (void *)(v130 + v59);
          else
            v62 = (void *)(v130 + v61);
          if ( v52 )
            v63 = 4096;
          else
            v63 = v138;
          v64 = v63 - v130;
          v65 = 0;
          v144 = 0;
          v66 = (*(_DWORD *)(a1 + 152) & 0x40000000) != 0;
          if ( v60 )
          {
            if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
            {
              v65 = HviCopyMemoryNonTemporal(v62, a2, v64, v43);
              v144 = v65;
            }
            else
            {
              HviCopyMemory(v62, a2, v64, v43);
            }
          }
          else if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
          {
            v65 = RtlWriteNonVolatileMemory(-1LL, v62, a2, v64, 2);
            v144 = v65;
          }
          else
          {
            memmove(v62, a2, v64);
          }
          if ( v65 < 0 )
            RtlRaiseStatus((unsigned int)v65);
          v124 = !v66;
          v117 = 1;
          if ( !v116 )
            v116 = !v66;
          if ( v58 )
          {
            MmUnlockPages(v58);
            IoFreeMdl(v58);
            v155 = 0LL;
          }
          v67 = v141;
          v68 = v147;
          BYTE4(v147[1].Queue) = v141 & 1;
          LODWORD(v68[1].WaitListEntry.Flink) = v67 >> 1;
          v37 = v130;
        }
        v43 = 4096LL;
        a2 += 4096 - v37;
        v37 = 0;
        v130 = 0;
        if ( !v52 )
          break;
        v38 = v136 + 4096;
        v136 += 4096LL;
        v39 = v138 - 4096;
        v138 = v39;
        v42 = v39;
        v134 = v39;
        v41 += 4096;
        LODWORD(v146) = v41;
        if ( v167 )
        {
          v40 = 2;
        }
        else
        {
          v40 = 4;
          if ( v39 > 0x1000 )
            v40 = 2;
        }
        v140 = v40;
        v12 = a1;
        v35 = a5;
      }
      v117 = 0;
      v53 = *(_QWORD *)(v139 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v139 + 16)) )
      {
        v54 = *(struct _KEVENT **)(v53 + 192);
        if ( v54 )
          KeSetEvent(v54, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v53 + 552));
      }
      v33 = 0LL;
      v139 = 0LL;
      v27 = a9;
      v32 = v131;
      v12 = a1;
      CcSetDirtyInMask(a1, &v137, v131, a9);
      v55 = *(_DWORD *)(a1 + 152) & 0x40000000;
      v34 = v135;
      if ( !v55 && v135 - v167 > 0x1000000 || v55 && v116 )
      {
        if ( !a10->QuadPart )
          *a10 = KeQueryPerformanceCounter(0LL);
        CcFlushCachePriv(*(const void **)(a6 + 40), (__int64)&v137, v32, 0LL, v115, (__int128 *)v145, 0LL);
        v74 = v145[0];
        if ( v145[0] < 0 )
        {
          v75 = FsRtlIsNtstatusExpected(v145[0]);
          v76 = 3221225705LL;
          if ( v75 )
            v76 = v74;
          RtlRaiseStatus(v76);
        }
      }
      if ( v167 >= 0x1000 )
      {
        a5 |= 1u;
      }
      else if ( (a5 & 4) == 0 )
      {
        a5 = 0;
      }
      v137 += v32;
    }
    v126 = 1;
LABEL_128:
    v77 = v141;
    v78 = v147;
    BYTE4(v147[1].Queue) = v141 & 1;
    LODWORD(v78[1].WaitListEntry.Flink) = v77 >> 1;
    if ( v33 )
    {
      v88 = *(_QWORD *)(v33 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v33 + 16)) )
      {
        v89 = *(struct _KEVENT **)(v88 + 192);
        if ( v89 )
          KeSetEvent(v89, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v88 + 552));
      }
      LODWORD(v32) = v131;
    }
    if ( v117 && (_DWORD)v32 )
      CcSetDirtyInMask(v12, &v137, v32, v27);
    v79 = v115;
    if ( CcRemoteFileDPInlineFlushThreshold != -1
      && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
      && !v115
      && *(_DWORD *)(v12 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
    {
      v118 = 1;
      v121 = 1;
    }
    if ( !v119 && !v121 )
      return v126;
    v145[0] = 0;
    if ( v115 )
    {
      if ( (*(_DWORD *)(v12 + 152) & 0x40000000) != 0 )
      {
LABEL_149:
        if ( v125 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v158 + 768), &v148);
          --*(_DWORD *)(v12 + 524);
          KxReleaseQueuedSpinLock(&v148);
          v86 = v148.OldIrql;
          if ( KiIrqlFlags )
          {
            v109 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v109 <= 0xFu && v148.OldIrql <= 0xFu && v109 >= 2u )
            {
              v110 = KeGetCurrentPrcb();
              v111 = v110->SchedulerAssist;
              v112 = ~(unsigned __int16)(-1LL << (v148.OldIrql + 1));
              v94 = (v112 & v111[5]) == 0;
              v111[5] &= v112;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v110);
            }
          }
          __writecr8(v86);
          v13 = v145[0];
        }
        if ( v13 < 0 )
        {
          v113 = FsRtlIsNtstatusExpected(v13);
          v114 = 3221225705LL;
          if ( v113 )
            v114 = (unsigned int)v13;
          RtlRaiseStatus(v114);
        }
        return v126;
      }
      v79 = v115;
    }
    if ( v118 )
    {
      v34 = 0;
      v81 = 0LL;
    }
    else
    {
      v81 = (__int64)a3;
    }
    CcFlushCachePriv(*(const void **)(a6 + 40), v81, v34, 0LL, v79, (__int128 *)v145, 0LL);
    v13 = v145[0];
    goto LABEL_149;
  }
  if ( a8 )
  {
    *a10 = KeQueryPerformanceCounter(0LL);
    goto LABEL_10;
  }
  return 0;
}
