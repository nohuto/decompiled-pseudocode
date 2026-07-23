/*
 * XREFs of MiZeroLargePages @ 0x140231E90
 * Callers:
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReferencePageRuns @ 0x14022F500 (MiReferencePageRuns.c)
 *     MiGetHugePageToZero @ 0x14022F620 (MiGetHugePageToZero.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     RtlAvlInsertNodeEx @ 0x140296BD0 (RtlAvlInsertNodeEx.c)
 *     RtlpTreeDoubleRotateNodes @ 0x140298AD0 (RtlpTreeDoubleRotateNodes.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiReassessZeroThreads @ 0x140314424 (MiReassessZeroThreads.c)
 *     MiSetIdealProcessorThread @ 0x14035E380 (MiSetIdealProcessorThread.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiZeroLargePages(unsigned __int64 a1)
{
  __int64 v1; // r12
  struct _KTHREAD *v2; // rcx
  int v3; // eax
  __int64 v4; // r11
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile __int32 *v9; // rsi
  unsigned __int64 v10; // rax
  LARGE_INTEGER *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // r14d
  __int64 v15; // r15
  bool v16; // zf
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // eax
  __int64 v21; // rdi
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int64 v29; // rbx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  struct _KTHREAD *v34; // rbx
  __int64 result; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  int HugePageToZero; // eax
  unsigned __int64 v40; // r9
  __int64 v41; // r15
  int v42; // r12d
  int v43; // r14d
  unsigned int v44; // r13d
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  ULONG_PTR v48; // rsi
  int v49; // ebx
  unsigned int v50; // ebx
  char v51; // cl
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  int v57; // eax
  volatile signed __int32 *v58; // r14
  struct _KTHREAD *v59; // rdi
  char v60; // al
  struct _KPRCB *v61; // rbx
  _DWORD *v62; // rcx
  int v63; // eax
  _DWORD *v64; // rcx
  int v65; // eax
  signed __int32 v66; // edx
  signed __int32 v67; // eax
  unsigned __int64 v68; // rdx
  bool v69; // r10
  __int64 v70; // rdi
  _BYTE *v71; // r9
  char v72; // r8
  char v73; // cl
  char i; // bl
  unsigned int v75; // r9d
  __int64 v76; // r10
  _QWORD *v77; // r9
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  char v83; // r9
  _QWORD *v84; // rdx
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  volatile signed __int32 *v95; // roff
  signed __int32 v96[8]; // [rsp+0h] [rbp-E8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 v98; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  volatile signed __int32 *v100; // [rsp+70h] [rbp-78h]
  __int64 v101; // [rsp+78h] [rbp-70h]
  unsigned __int64 v102; // [rsp+80h] [rbp-68h]
  __int64 v103; // [rsp+88h] [rbp-60h]
  __int64 v104; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  _GROUP_AFFINITY Affinity; // [rsp+A0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v109; // [rsp+F8h] [rbp+10h]
  int v110; // [rsp+100h] [rbp+18h] BYREF
  int v111; // [rsp+108h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v3 = KeSetActualBasePriorityThread((__int64)v2, 0);
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 232);
  v111 = v3;
  v109 = 0;
  v104 = v6;
  v7 = *(_QWORD *)(v6 + 72);
  *(_QWORD *)(v1 + 272) = KeGetCurrentThread();
  v8 = *(unsigned int *)(v1 + 264);
  v101 = v7;
  *(_QWORD *)(*(_QWORD *)(v6 + 144) + 40 * v8 + 8) = v1;
  v9 = (volatile __int32 *)(*(_QWORD *)(v6 + 144) + 40LL * *(unsigned int *)(v1 + 264));
  _InterlockedExchange(v9, 0);
  v100 = v9;
  v10 = __rdtsc();
  _InterlockedOr(v96, 0);
  while ( 2 )
  {
    v102 = v10;
LABEL_3:
    v11 = (LARGE_INTEGER *)&MiFiveSeconds;
    v12 = 2LL;
LABEL_4:
    v13 = *(_QWORD *)(v1 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v14 = 0;
    v15 = *(_QWORD *)(v13 + 72);
    if ( *(_DWORD *)(v13 + 136) )
    {
      v21 = *(_QWORD *)(v13 + 144) + 40LL * *(unsigned int *)(v1 + 264);
      if ( (*(_BYTE *)(v21 + 4) & 1) != 0 )
      {
        while ( 1 )
        {
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 24);
          LockHandle.LockQueue.Next = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v12 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
            SchedulerAssist[5] = v12;
          }
          LockHandle.OldIrql = CurrentIrql;
          KxAcquireQueuedSpinLock(&LockHandle, v13 + 24, v12);
          if ( (*(_BYTE *)(v21 + 4) & 2) != 0 || (*(_BYTE *)(v21 + 4) & 1) == 0 )
            break;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v25 = KeGetCurrentIrql();
              if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v27 = CurrentPrcb->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v16 = (v28 & v27[5]) == 0;
                v27[5] &= v28;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v14 = 1;
          KeWaitForSingleObject((PVOID)(v21 + 16), Executive, 0, 0, 0LL);
          v12 = 2LL;
          if ( (*(_BYTE *)(v21 + 4) & 1) == 0 )
            goto LABEL_40;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v29 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v16 = (v33 & v32[5]) == 0;
              v12 = (unsigned int)v33 & v32[5];
              v32[5] = v12;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
        }
        __writecr8(v29);
LABEL_40:
        v9 = v100;
        goto LABEL_41;
      }
      while ( *(_DWORD *)(v15 + 6340) || dword_140C4EED8 )
      {
        if ( !KeWaitForSingleObject((PVOID)(v15 + 104), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        {
          KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12);
          goto LABEL_46;
        }
LABEL_41:
        v11 = (LARGE_INTEGER *)&MiFiveSeconds;
      }
      v5 = v109;
    }
    else if ( !*(_BYTE *)(v1 + 300) )
    {
      *(_BYTE *)(v1 + 300) = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 24), &LockHandle);
      v16 = (*(_DWORD *)(v13 + 152))-- == 1;
      if ( v16 )
        *(_DWORD *)(v13 + 136) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v17 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v11 = (LARGE_INTEGER *)v19->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v16 = (v20 & v11[2].HighPart) == 0;
            v12 = (unsigned int)v20 & v11[2].HighPart;
            v11[2].HighPart = v12;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      __writecr8(v17);
    }
    if ( !*(_QWORD *)(v1 + 240) )
    {
      v36 = MiReferencePageRuns(*(_QWORD *)(v13 + 72), 0, v12, v11);
      if ( !v36 )
      {
LABEL_46:
        ++dword_140C2A308;
        goto LABEL_47;
      }
      *(_QWORD *)(v1 + 240) = v36;
    }
    if ( v14 )
    {
      _InterlockedExchange(v9, 0);
      v102 = __rdtsc();
      _InterlockedOr(v96, 0);
    }
    v37 = v104;
    ++*(_DWORD *)(v104 + 288);
    if ( !v5 && *(_BYTE *)(v1 + 80) )
    {
      v38 = v101;
      HugePageToZero = MiGetHugePageToZero(v101, v1);
      goto LABEL_191;
    }
    v40 = (unsigned int)(*(_DWORD *)(v1 + 260) >> byte_140C4DE8C);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_BYTE *)(v1 + 69) = 0;
    if ( v5 < 3 )
    {
      v38 = v101;
      v41 = MiUnlinkNodeLargePages(v101, v5, 1, v40, 4, 1, v1 + 248, 64, v1);
      goto LABEL_186;
    }
    v42 = 0;
    LOBYTE(v4) = 17;
    v43 = 0;
    v98 = v4;
    v44 = *(_DWORD *)(a1 + 260);
    v45 = v44;
    v46 = *(_QWORD *)(v101 + 2184);
    v103 = v46;
    while ( 1 )
    {
      v47 = 5LL * (unsigned int)v45;
      v48 = *(_QWORD *)(v46 + 40LL * (unsigned int)v45 + 16);
      if ( v48 == 0xFFFFFFFFFLL )
        goto LABEL_64;
      v41 = 48 * v48 - 0x58000000000LL;
      if ( !v43 )
      {
        v47 = 0x8000000000000000uLL;
        if ( *(__int64 *)(v41 + 24) < 0 )
        {
          v42 = 1;
LABEL_64:
          v41 = 0LL;
LABEL_65:
          v45 = dword_140C4DE80 & (*(_DWORD *)(a1 + 260) + 1) | *(_DWORD *)(a1 + 260) & (unsigned int)~dword_140C4DE80;
          *(_DWORD *)(a1 + 260) = v45;
          goto LABEL_66;
        }
      }
      if ( 48 * v48 == 0x58000000000LL )
        goto LABEL_65;
      v4 = KeGetCurrentIrql();
      v98 = v4;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v4 <= 0xFu )
      {
        v47 = (unsigned int)(unsigned __int8)v4 + 1;
        v40 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        v45 = (-1LL << ((unsigned __int8)v4 + 1)) & 4;
        v46 = (unsigned int)v45 | *(_DWORD *)(v40 + 20);
        *(_DWORD *)(v40 + 20) = v46;
      }
      v50 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v50 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v47, v45, v46, v40, Timeout) )
          {
            HvlNotifyLongSpinWait(v50);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v41 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
        v4 = v98;
      }
      if ( v48 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v48 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v51 = *(_BYTE *)(v41 + 34);
        if ( (v51 & 7) == 1 )
        {
          v45 = 0x1000000000LL;
          if ( (*(_QWORD *)(v41 + 40) & 0x1000000000LL) == 0 )
          {
            if ( (v51 & 8) == 0 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v52 = KeGetCurrentIrql();
                if ( v52 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v52 >= 2u )
                {
                  v53 = KeGetCurrentPrcb();
                  v40 = (unsigned __int64)v53->SchedulerAssist;
                  v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
                  v16 = (v54 & *(_DWORD *)(v40 + 20)) == 0;
                  *(_DWORD *)(v40 + 20) &= v54;
                  if ( v16 )
                  {
                    KiRemoveSystemWorkPriorityKick(v53);
                    v4 = v98;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)v4);
            goto LABEL_64;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v40 = (unsigned __int64)v56->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v16 = (v57 & *(_DWORD *)(v40 + 20)) == 0;
            *(_DWORD *)(v40 + 20) &= v57;
            if ( v16 )
            {
              KiRemoveSystemWorkPriorityKick(v56);
              v4 = v98;
            }
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      v41 = 0LL;
      v45 = *(unsigned int *)(a1 + 260);
LABEL_66:
      v46 = v103;
      if ( (_DWORD)v45 == v44 )
      {
        if ( !v42 )
          break;
        if ( (unsigned int)++v43 >= 2 )
          break;
      }
    }
    if ( v41 )
    {
      if ( *(_WORD *)(v41 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v48, *(unsigned int *)(v41 + 32), *(_QWORD *)(v41 + 8));
      v1 = a1;
      if ( (*(_BYTE *)(v41 + 34) & 8) != 0 )
      {
        v49 = 0;
        goto LABEL_177;
      }
      *(_QWORD *)(a1 + 24) = v41;
      v58 = &dword_140C4E570;
      v59 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 56) = v59;
      v60 = *(_BYTE *)(v41 + 34) | 8;
      *(_QWORD *)(v41 + 16) = a1;
      *(_BYTE *)(v41 + 34) = v60;
      v16 = *(_BYTE *)(a1 + 71) == 0;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( !v16 )
        v58 = &dword_140C4E560;
      *(_WORD *)(a1 + 69) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v45) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v58, v45);
      }
      else
      {
        v61 = KeGetCurrentPrcb();
        v110 = 0;
        v62 = v61->SchedulerAssist;
        if ( v62 )
        {
          if ( v61->NestingLevel <= 1u )
          {
            v63 = v62[6];
            v62[6] = v63 + 1;
            if ( v63 == -1 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
        if ( _interlockedbittestandset(v58, 0x1Fu) )
        {
          v64 = v61->SchedulerAssist;
          if ( v64 )
          {
            if ( v61->NestingLevel <= 1u )
            {
              v65 = v64[6] - 1;
              v64[6] = v65;
              if ( !v65 )
                KiRemoveSystemWorkPriorityKick(v61);
            }
          }
          LOBYTE(v45) = -1;
          v110 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v58, v45, v46, (_DWORD *)v40);
        }
        v66 = *v58;
        while ( (v66 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v66 & 0x40000000) == 0 )
          {
            v67 = _InterlockedCompareExchange(v58, v66 | 0x40000000, v66);
            v16 = v66 == v67;
            v66 = v67;
            if ( !v16 )
              continue;
          }
          KeYieldProcessorEx(&v110);
          v66 = *v58;
        }
      }
      if ( *(_BYTE *)(a1 + 71) )
      {
        v84 = (_QWORD *)qword_140C4E568;
        LOBYTE(v46) = 0;
        if ( qword_140C4E568 )
        {
          while ( 1 )
          {
            while ( (unsigned __int64)v59 < v84[7] )
            {
              if ( !*v84 )
                goto LABEL_168;
              v84 = (_QWORD *)*v84;
            }
            if ( !v84[1] )
              break;
            v84 = (_QWORD *)v84[1];
          }
          LOBYTE(v46) = 1;
        }
LABEL_168:
        RtlAvlInsertNodeEx(&qword_140C4E568, v84, v46, a1);
        goto LABEL_169;
      }
      v68 = qword_140C4E578;
      v69 = 0;
      if ( qword_140C4E578 )
      {
        while ( 1 )
        {
          while ( a1 < v68 )
          {
            if ( !*(_QWORD *)v68 )
              goto LABEL_135;
            v68 = *(_QWORD *)v68;
          }
          if ( !*(_QWORD *)(v68 + 8) )
            break;
          v68 = *(_QWORD *)(v68 + 8);
        }
        v69 = 1;
      }
LABEL_135:
      *(_QWORD *)a1 = 0LL;
      v70 = a1;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v68;
      if ( v68 )
      {
        v71 = (_BYTE *)(v68 + 16);
        *(_QWORD *)(v68 + 8LL * v69) = a1;
        v72 = *(_BYTE *)(v68 + 16);
        v73 = (-1 - 2 * v69) & 3;
        for ( i = v72 & 3; (v72 & 3) == 0; i = v72 & 3 )
        {
          v70 = v68;
          *v71 = v73 | v72 & 0xFC;
          v68 = *(_QWORD *)v71 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v68 )
            goto LABEL_169;
          v71 = (_BYTE *)(v68 + 16);
          v72 = *(_BYTE *)(v68 + 16);
          v69 = *(_QWORD *)v68 != v70;
          v73 = (-1 - 2 * v69) & 3;
        }
        if ( i != v73 )
        {
          *(_BYTE *)(v68 + 16) &= 0xFCu;
          goto LABEL_169;
        }
        if ( (*(_BYTE *)(v70 + 16) & 3) != i )
        {
          v81 = RtlpTreeDoubleRotateNodes(&qword_140C4E578, v68, v70, v69);
          *(_BYTE *)(v82 + 16) &= 0xFCu;
          v83 = *(_BYTE *)(v70 + 16) & 0xFC;
          *(_BYTE *)(v70 + 16) = v83;
          if ( i == (*(_BYTE *)(v81 + 16) & 3) )
          {
            *(_BYTE *)(v82 + 16) ^= (*(_BYTE *)(v82 + 16) ^ i ^ 0xFE) & 3;
            *(_BYTE *)(v81 + 16) &= 0xFCu;
          }
          else
          {
            if ( i == ((*(_BYTE *)(v81 + 16) ^ 0xFE) & 3) )
              *(_BYTE *)(v70 + 16) = v83 | i;
            *(_BYTE *)(v81 + 16) &= 0xFCu;
          }
          goto LABEL_169;
        }
        v75 = !v69;
        if ( (*(_QWORD *)(v70 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v68 )
        {
          v76 = v75;
          v77 = (_QWORD *)(v68 + 8 * (v75 ^ 1LL));
          if ( *v77 == v70 )
          {
            v78 = *(_QWORD *)(v68 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v78 )
            {
              if ( *(_QWORD *)(v78 + 8) == v68 )
              {
                *(_QWORD *)(v78 + 8) = v70;
              }
              else
              {
                if ( *(_QWORD *)v78 != v68 )
                  goto LABEL_202;
                *(_QWORD *)v78 = v70;
              }
LABEL_152:
              *(_QWORD *)(v70 + 16) = v78 | *(_DWORD *)(v70 + 16) & 3;
              v79 = *(_QWORD *)(v70 + 8 * v76);
              if ( v79 )
              {
                v80 = *(_QWORD *)(v79 + 16);
                if ( (v80 & 0xFFFFFFFFFFFFFFFCuLL) != v70 )
                  goto LABEL_202;
                *(_QWORD *)(v79 + 16) = v68 | v80 & 3;
              }
              *v77 = v79;
              *(_QWORD *)(v70 + 8 * v76) = v68;
              *(_QWORD *)(v68 + 16) = v70 | *(_DWORD *)(v68 + 16) & 3;
              *(_BYTE *)(v70 + 16) &= 0xFCu;
              *(_BYTE *)(v68 + 16) &= 0xFCu;
              goto LABEL_169;
            }
            if ( qword_140C4E578 == v68 )
            {
              qword_140C4E578 = v70;
              goto LABEL_152;
            }
          }
        }
LABEL_202:
        __fastfail(0x1Du);
      }
      qword_140C4E578 = a1;
LABEL_169:
      *(_BYTE *)(a1 + 68) = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v58, retaddr);
      else
        *v58 = 0;
      v85 = KeGetCurrentPrcb();
      v86 = v85->SchedulerAssist;
      if ( v86 )
      {
        if ( v85->NestingLevel <= 1u )
        {
          v87 = v86[6] - 1;
          v86[6] = v87;
          if ( !v87 )
            KiRemoveSystemWorkPriorityKick(v85);
        }
      }
      v4 = v98;
      v49 = 1;
LABEL_177:
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v88 = KeGetCurrentIrql();
          if ( v88 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v88 >= 2u )
          {
            v89 = KeGetCurrentPrcb();
            v90 = v89->SchedulerAssist;
            v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v16 = (v91 & v90[5]) == 0;
            v90[5] &= v91;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v89);
          }
        }
      }
      __writecr8((unsigned __int8)v98);
      v5 = v109;
      if ( !v49 )
        goto LABEL_200;
      v38 = v101;
      v37 = v104;
LABEL_186:
      if ( !v41 )
        goto LABEL_200;
      if ( !*(_BYTE *)(v1 + 80) )
      {
        v92 = *(unsigned int *)(MiSearchNumaNodeTable((v41 + 0x58000000000LL) / 48) + 8);
        if ( *(_DWORD *)(v1 + 268) != (_DWORD)v92 )
        {
          *(_DWORD *)(v1 + 268) = v92;
          Affinity = *(_GROUP_AFFINITY *)(4544 * v92 + *(_QWORD *)(v38 + 16) + 4472);
          MiSetIdealProcessorThread(&Affinity);
        }
      }
      HugePageToZero = MiMapPagesToZero(v1, v41, v5);
LABEL_191:
      if ( !HugePageToZero )
        goto LABEL_200;
      MiZeroPage(v1, v38);
      if ( v5 == 3 )
      {
        v93 = 1LL;
      }
      else
      {
        v94 = v5;
        if ( !v5 )
          v94 = 1LL;
        v93 = MiLargePageSizes[v94];
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 40), v93);
      v9 = v100;
      v95 = v100;
      _InterlockedExchangeAdd(v100, v93);
      v11 = (LARGE_INTEGER *)&MiFiveSeconds;
      v12 = 2LL;
      if ( *v95 >= 0x1000u )
      {
        _InterlockedOr(v96, 0);
        MiReassessZeroThreads(v1, __rdtsc() - v102, 2LL, &MiFiveSeconds);
        _InterlockedExchange(v9, 0);
        v10 = __rdtsc();
        _InterlockedOr(v96, 0);
        continue;
      }
      goto LABEL_4;
    }
    break;
  }
  v5 = v109;
LABEL_200:
  if ( v5 < 3 )
  {
    v1 = a1;
    ++v5;
    v9 = v100;
    v109 = v5;
    goto LABEL_3;
  }
LABEL_47:
  v34 = CurrentThread;
  result = KeSetActualBasePriorityThread((__int64)CurrentThread, v111);
  *((_DWORD *)&v34[1].SwapListEntry + 3) &= ~0x400u;
  return result;
}
