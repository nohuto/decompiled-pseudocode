/*
 * XREFs of MiInsertPageInList @ 0x1402A6E90
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A6550 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x1402AD540 (MiOutSwapWorkingSetPte.c)
 *     MiCreateDecayPfn @ 0x140306428 (MiCreateDecayPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiRelinkStandbyPage @ 0x14033AFE8 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x14052EF38 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541648 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140543664 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563874 (MiMakePageBad.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x14027F788 (MiPageToChannel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x140307924 (MiInsertDecayClusterTimer.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x14030F5A0 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiWakeModifiedPageWriter @ 0x140350344 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x1403B63E4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x1405427F4 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnRemovalRequested @ 0x14054F368 (MiSetPfnRemovalRequested.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140552DC4 (MiGetSlabAllocatorStandbyList.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int16 v3; // r10
  ULONG_PTR *v5; // r14
  ULONG_PTR v6; // r13
  char v7; // di
  char v8; // bl
  __int64 *v9; // r15
  __int64 SlabAllocatorStandbyList; // rax
  __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  _KSPIN_LOCK_QUEUE *v16; // r11
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  struct _KEVENT *v20; // rbx
  unsigned __int64 v21; // r12
  __int16 v22; // dx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v25; // eax
  _QWORD *v26; // rdx
  _KSPIN_LOCK_QUEUE *v27; // r11
  __int64 v28; // rax
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // r8
  _KSPIN_LOCK_QUEUE *v32; // r11
  __int64 v33; // rcx
  unsigned __int64 *v34; // r15
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  int v37; // eax
  _QWORD *v38; // rdx
  unsigned __int16 v39; // cx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v49; // r8
  unsigned __int16 **v50; // r10
  __int64 v51; // r11
  unsigned __int16 *v52; // rcx
  unsigned int v53; // edx
  unsigned __int64 v54; // rbx
  BOOL v55; // ebx
  __int64 v56; // r12
  char v57; // al
  __int64 v58; // rax
  char v59; // r12
  char v60; // r15
  int v61; // edx
  __int64 v62; // r12
  char *v63; // rax
  int v64; // r8d
  int v65; // ecx
  __int64 v66; // rbx
  unsigned int v67; // r8d
  _QWORD *v68; // r9
  unsigned __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  int v76; // eax
  signed __int32 v77[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v78; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v81; // [rsp+A0h] [rbp+8h]
  unsigned int v82; // [rsp+A8h] [rbp+10h]
  __int64 v83; // [rsp+B8h] [rbp+20h]

  v82 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  memset(&v78, 0, sizeof(v78));
  v5 = *(ULONG_PTR **)(qword_140C4E648 + 8 * ((v2 >> 39) & 0x3FF));
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  v7 = (v2 & 0x2000000000000LL) != 0;
  if ( v6 < qword_140C4E9A0 || v6 >= qword_140C4E9A0 + 2048 )
  {
    if ( byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, v6 >> 9) )
      v7 |= 2u;
  }
  else
  {
    v7 |= 8u;
  }
  v8 = v7;
  if ( (a2 & 8) != 0 && (v7 & 1) != 0 && byte_140C4DEE8 )
  {
    v3 = a2 & 0xFFF3 | 4;
    v82 = a2 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(a1 + 34) &= ~0x10u;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = (__int64 *)(v5 + 296);
    if ( (v7 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    {
      v5 = &MiSystemPartition;
      v9 = &qword_140C4CAC0;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
    v9 = (__int64 *)(v5 + 936);
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v9 = (__int64 *)(v5 + 944);
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v9 = (__int64 *)(v5 + 520);
  }
  else if ( (v3 & 0x800) != 0 )
  {
    SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(a1, 1LL);
    v3 = v82;
    v9 = (__int64 *)SlabAllocatorStandbyList;
  }
  else
  {
    v9 = (__int64 *)(v5 + 512);
  }
  v11 = *((unsigned int *)v9 + 2);
  v81 = *((_DWORD *)v9 + 2);
  if ( (v7 & 1) == 0 )
  {
    _InterlockedOr(v77, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v83 = 0LL;
  switch ( (_DWORD)v11 )
  {
    case 2:
      v12 = *(_BYTE *)(a1 + 35);
      if ( (v12 & 0x40) != 0 && (v7 & 2) == 0 )
      {
        MiRestoreTransitionPte(a1);
        MiInsertPageInList(a1, 32LL);
        return;
      }
      if ( (v7 & 1) != 0 )
      {
        *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
        return;
      }
      if ( (v3 & 0x800) != 0 )
        goto LABEL_51;
      v13 = (v12 & 8) != 0 ? 5LL : v12 & 7;
      v9 = (__int64 *)&v5[4 * v13 + 304 + v13];
      if ( (v12 & 8) != 0 || (v7 & 2) != 0 )
        goto LABEL_51;
      v14 = MI_PFN_IS_PROTO(a1);
      v17 = 544LL;
      if ( !v14 )
        v17 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v17]);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v18 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 888);
      if ( v18 <= 0x420 )
      {
        switch ( v18 )
        {
          case 0xA0uLL:
            v19 = 621LL;
LABEL_47:
            LockHandle.LockQueue.Next = v16;
            LockHandle.LockQueue.Lock = v5 + 616;
            v20 = (struct _KEVENT *)&v5[v19];
            KxAcquireQueuedSpinLock(&LockHandle, v5 + 616, v15);
            KeSetEvent(v20, 0, 0);
            ++v20[1].Header.LockNV;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            break;
          case 0x420uLL:
            v19 = 625LL;
            goto LABEL_47;
          case 0x22uLL:
            v19 = 617LL;
            goto LABEL_47;
        }
      }
      v21 = v18 - 1;
      if ( v21 == v5[646] || v21 == v5[647] )
        MiUpdateAvailableEvents(v5);
LABEL_51:
      v22 = v82;
      if ( (v82 & 0x80u) != 0 )
        goto LABEL_118;
      v78.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      v78.LockQueue.Next = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = SchedulerAssist[6];
          SchedulerAssist[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v78, v9 + 4);
      }
      else
      {
        v26 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v78);
        if ( v26 )
          KxWaitForLockOwnerShip((__int64)&v78, v26);
      }
      goto LABEL_117;
    case 3:
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 632);
      goto LABEL_72;
    case 4:
      v28 = *(_QWORD *)(a1 + 16);
      if ( qword_140C4DF40 && (v28 & 0x10) == 0 )
        v28 &= ~qword_140C4DF40;
      v29 = *(_QWORD *)(v28 >> 16);
      v83 = v29;
      v30 = MI_PFN_IS_PROTO(a1);
      v33 = 544LL;
      if ( !v30 )
        v33 = 632LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v33]);
      v78.LockQueue.Next = v32;
      v78.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
      KxAcquireQueuedSpinLock(&v78, v9 + 4, v31);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      if ( (*(_DWORD *)(v29 + 56) & 8) != 0 )
        goto LABEL_117;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v78);
      v8 = v7;
      v27 = 0LL;
      v81 = 3;
LABEL_72:
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 936);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v43 = *(unsigned int *)(v5[856] + 24);
        v78.LockQueue.Next = v27;
        v9 = (__int64 *)&v5[4 * v43 + 432 + v43];
        v78.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4);
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        if ( v45 )
        {
          if ( v44->NestingLevel <= 1u )
          {
            v46 = v45[6];
            v45[6] = v46 + 1;
            if ( v46 == -1 )
              KiRemoveSystemWorkPriorityKick(v44);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v78, v9 + 4);
        }
        else
        {
          v47 = (_QWORD *)_InterlockedExchange64(v9 + 4, (__int64)&v78);
          if ( v47 )
            KxWaitForLockOwnerShip((__int64)&v78, v47);
        }
        *(_BYTE *)(a1 + 39) ^= (*(_BYTE *)(a1 + 39) ^ v43) & 0xF;
      }
      else
      {
        if ( (v82 & 0x80u) == 0 )
        {
          v34 = (unsigned __int64 *)(v9 + 4);
          v78.LockQueue.Next = v27;
          v78.LockQueue.Lock = v34;
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          if ( v36 )
          {
            if ( v35->NestingLevel <= 1u )
            {
              v37 = v36[6];
              v36[6] = v37 + 1;
              if ( v37 == -1 )
                KiRemoveSystemWorkPriorityKick(v35);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v78, v34);
          }
          else
          {
            v38 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v34, (__int64)&v78);
            if ( v38 )
              KxWaitForLockOwnerShip((__int64)&v78, v38);
          }
        }
        v39 = *(_QWORD *)(a1 + 16);
        v40 = (unsigned __int8)v39 >> 1;
        v41 = v39 >> 12;
        if ( (v40 & 1) != 0 || (_DWORD)v41 == *((_DWORD *)v5 + 289) )
          v9 = (__int64 *)&v5[4 * v41 + 352 + v41];
        else
          v9 = (__int64 *)(v5 + 344);
        v42 = *v9;
        ++v5[950];
        v7 = v8 | 4;
        if ( v42 )
          v7 = v8;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ++*(_DWORD *)&Process[1].Spare2[7];
      v49 = v5[888];
      if ( v49 < 0x420 )
      {
        v50 = (unsigned __int16 **)(v5 + 525);
        v51 = 0LL;
        while ( 1 )
        {
          v52 = *v50;
          v53 = 0;
          if ( dword_140C4DEFC )
            break;
LABEL_103:
          ++v51;
          ++v50;
          if ( v51 > 1 )
          {
            v54 = v5[950];
            if ( v54 >= 0x10 )
              MiWakeModifiedPageWriter(v5, -1LL);
            if ( v5[936] - v54 >= 0x10 )
              KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
            goto LABEL_108;
          }
        }
        while ( 1 )
        {
          v49 += *v52;
          if ( v49 >= 0x420 )
            break;
          ++v53;
          v52 += 8;
          if ( v53 >= dword_140C4DEFC )
            goto LABEL_103;
        }
      }
LABEL_108:
      v83 = 0LL;
      goto LABEL_117;
  }
  if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 )
    MiSetPfnRemovalRequested(a1, 0LL);
  if ( (v82 & 0x100) != 0 )
  {
    v78.LockQueue.Next = 0LL;
    v78.LockQueue.Lock = v5 + 524;
    KxAcquireQueuedSpinLock(&v78, v5 + 524, v11);
  }
  else
  {
    if ( v9 != &qword_140C4CAC0 )
      MiClearPfnImageVerified(a1, 12LL);
    v78.LockQueue.Lock = v5 + 516;
    v78.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v78, v5 + 516, v11);
    if ( v9 == &qword_140C4CAC0 )
      goto LABEL_117;
  }
  *(_QWORD *)(a1 + 8) = -4LL;
LABEL_117:
  v22 = v82;
LABEL_118:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 || (v55 = (v7 & 2) != 0) && (v22 & 0x800) == 0 && v81 == 2 )
  {
    v55 = (v7 & 2) != 0;
    if ( (v7 & 2) == 0 )
      MiInsertDecayClusterTimer(a1);
  }
  else
  {
    ++*v9;
  }
  v56 = v9[3];
  if ( v56 == 0xFFFFFFFFFLL )
    v9[2] = v6;
  else
    *(_QWORD *)(48 * v56 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v56 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  v57 = *(_BYTE *)(a1 + 34);
  if ( v9 == &qword_140C4CAC0 )
  {
    *(_BYTE *)(a1 + 34) = v57 & 0xF8 | 2;
    *(_BYTE *)(a1 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
  }
  else
  {
    *(_BYTE *)(a1 + 34) = v57 ^ (v57 ^ v81) & 7;
  }
  v9[3] = v6;
  v58 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v56 & 0xFFFFFFFFFLL | v58 & 0xFFFFFFF000000000uLL;
  if ( v81 != 2 )
    goto LABEL_156;
  if ( v55 )
  {
    v59 = v82;
    MiUpdatePfnOnSlabStandbyList(a1, (v82 >> 11) & 1);
    goto LABEL_157;
  }
  v60 = *(_BYTE *)(a1 + 35);
  if ( (v60 & 8) != 0 )
    goto LABEL_156;
  v61 = dword_140C4DE88;
  v62 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  if ( dword_140C4DE84 <= (unsigned int)dword_140C4DE88 )
  {
    v63 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84;
    if ( v6 >= *(_QWORD *)v63 && (dword_140C4DE84 == dword_140C4DE88 || v6 < *((_QWORD *)v63 + 2)) )
      goto LABEL_149;
  }
  v64 = 0;
  if ( dword_140C4DE88 < 0 )
LABEL_173:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v65 = (v64 + v61) >> 1;
    v63 = (char *)qword_140C4DEC8 + 16 * v65;
    if ( v6 < *(_QWORD *)v63 )
    {
      if ( !v65 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)qword_140C4DEC8, 0LL);
      v61 = v65 - 1;
      goto LABEL_146;
    }
    if ( v65 == dword_140C4DE88 || v6 < *((_QWORD *)v63 + 2) )
      break;
    v64 = v65 + 1;
LABEL_146:
    if ( v61 < v64 )
      goto LABEL_173;
  }
  dword_140C4DE84 = (v64 + v61) >> 1;
LABEL_149:
  v66 = *((unsigned int *)v63 + 2);
  if ( qword_140C4DED0 )
    v67 = MiPageToChannel(v6);
  else
    v67 = 0;
  v68 = (_QWORD *)(*(_QWORD *)(v62 + 16) + 4544 * v66 + 24 * ((v60 & 7) + 8LL * v67));
  ++v68[407];
  v69 = v68[409];
  if ( v69 == 0xFFFFFFFFFLL )
  {
    v68[408] = v6;
  }
  else
  {
    v70 = 48 * v69 - 0x58000000000LL;
    v71 = (*(_QWORD *)v70 ^ (v6 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v70 + 39) = v6;
    *(_QWORD *)v70 = (v6 << 28) ^ v71;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v69;
  v72 = (*(_QWORD *)(a1 + 24) ^ (v69 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= v72;
  v68[409] = v6;
LABEL_156:
  v59 = v82;
LABEL_157:
  if ( v83 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v83 + 72));
  if ( v59 >= 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
      goto LABEL_166;
    }
    _m_prefetchw(&v78);
    Next = v78.LockQueue.Next;
    if ( v78.LockQueue.Next )
    {
LABEL_165:
      v78.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
    else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v78.LockQueue.Lock,
                                              0LL,
                                              (signed __int64)&v78) != &v78 )
    {
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v78);
      goto LABEL_165;
    }
LABEL_166:
    v74 = KeGetCurrentPrcb();
    v75 = v74->SchedulerAssist;
    if ( v75 )
    {
      if ( v74->NestingLevel <= 1u )
      {
        v76 = v75[6] - 1;
        v75[6] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
  }
  if ( (v7 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 110), 0, 0);
}
