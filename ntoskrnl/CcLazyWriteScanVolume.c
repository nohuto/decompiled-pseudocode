/*
 * XREFs of CcLazyWriteScanVolume @ 0x140218810
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140536700 (CcQuickLazyWriteScanForVolume.c)
 * Callees:
 *     CcScanLogHandleList @ 0x1402175F8 (CcScanLogHandleList.c)
 *     CcShouldLazyWriteCacheMap @ 0x140219060 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x1402191C4 (CcPostWorkQueue.c)
 *     CcGetNodeForLazyWrite @ 0x1402191F0 (CcGetNodeForLazyWrite.c)
 *     CcAllocateWorkQueueEntry @ 0x140219880 (CcAllocateWorkQueueEntry.c)
 *     CcCalculatePagesToWriteForVolume @ 0x1402EA204 (CcCalculatePagesToWriteForVolume.c)
 *     CcAdjustThrottleForVolume @ 0x1402EAC74 (CcAdjustThrottleForVolume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1402EB4A8 (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcUpdateTimeOnLogHandles @ 0x1402EC7F0 (CcUpdateTimeOnLogHandles.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x1402EEE90 (CcSetLazyWriteScanQueuedInternal.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x1402F76B8 (CcIsDirtyCachemapListEmptyForVolume.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogLoggedStreamsStats @ 0x140397704 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x140399FD0 (CcPerfLogLazyWriteScan.c)
 *     CcComputeNextScanTime @ 0x1403A4028 (CcComputeNextScanTime.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     CcIncrementWriteBehindPriority @ 0x1405339B4 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140537D14 (CcPostWorkQueueAsyncLazywrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcLazyWriteScanVolume(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rsi
  int v5; // r12d
  char v6; // r13
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // r14
  _QWORD *v33; // rcx
  char v34; // bl
  unsigned __int64 v35; // rbx
  __int64 result; // rax
  __int64 v37; // r13
  int v38; // ecx
  unsigned int v39; // eax
  unsigned __int64 v40; // r14
  __int64 v41; // r14
  KSPIN_LOCK *v42; // rcx
  int v43; // ecx
  bool v44; // zf
  unsigned int v45; // eax
  unsigned __int64 v46; // r14
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v53; // rcx
  __int64 **v54; // rax
  __int64 **v55; // rax
  __int64 v56; // rcx
  __int64 **v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v66; // rbx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r9
  _DWORD *v69; // r8
  int v70; // eax
  __int64 v71; // rcx
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  unsigned __int8 v76; // cl
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  unsigned __int8 v80; // cl
  struct _KPRCB *v81; // r9
  _DWORD *v82; // r8
  int v83; // eax
  char v84; // [rsp+60h] [rbp-39h]
  char v85; // [rsp+61h] [rbp-38h]
  char v86; // [rsp+62h] [rbp-37h]
  unsigned int v87; // [rsp+64h] [rbp-35h] BYREF
  __int64 v88; // [rsp+68h] [rbp-31h]
  _QWORD *v89; // [rsp+70h] [rbp-29h] BYREF
  _QWORD **v90; // [rsp+78h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-19h] BYREF
  __int64 v92; // [rsp+98h] [rbp-1h] BYREF
  __int64 v93; // [rsp+A0h] [rbp+7h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp+Fh]
  __int64 v95[8]; // [rsp+B0h] [rbp+17h] BYREF
  char v96; // [rsp+100h] [rbp+67h]

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v87 = 0;
  v86 = 0;
  v6 = 0;
  v85 = 0;
  v92 = 0LL;
  v84 = 0;
  v95[0] = 0x7FFFFFFFFFFFFFFFLL;
  v96 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v88 = v4;
  if ( v4 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(v4, &v87, a4, v95);
  SpinLock = (PKSPIN_LOCK)(v4 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  CcSetLazyWriteScanQueuedInternal(a1 + 920, a4, 0LL);
  v11 = *(unsigned int *)(a1 + 1064);
  v12 = *(_QWORD *)(a1 + 1048) / v11;
  *(_QWORD *)(a1 + 1080) = v12;
  v13 = v12;
  v14 = *(_QWORD *)(a1 + 1056);
  *(_QWORD *)(a1 + 1088) = v14 / v11;
  v15 = v14 / v11;
  v16 = **(_QWORD **)(v4 + 8);
  if ( (unsigned int)v11 <= 1 )
  {
    v21 = *(_QWORD *)(a1 + 992);
    v20 = *(_QWORD *)(v16 + 17216);
    v19 = v21;
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 17216);
    v18 = (unsigned int)(v11 - 1);
    v19 = *(_QWORD *)(a1 + 992);
    v20 = v17 + v18 * v13;
    v21 = v19 + v18 * v15;
  }
  *(_QWORD *)(a1 + 1048) = v20;
  *(_QWORD *)(a1 + 1056) = v21;
  if ( !v19 && (unsigned __int8)CcIsDirtyCachemapListEmptyForVolume(a1) && !*(_BYTE *)(a1 + 986) )
  {
    if ( *(_QWORD *)(a1 + 1104) == a1 + 1104 )
    {
      *(_BYTE *)(a1 + 985) = 0;
      KxReleaseQueuedSpinLock(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v44 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v44 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      return result;
    }
    CcRescheduleLazyWriteScanOnVolume(v51, 0LL);
    KxReleaseQueuedSpinLock(&LockHandle);
    v66 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v67 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
      {
        v68 = KeGetCurrentPrcb();
        v69 = v68->SchedulerAssist;
        v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v44 = (v70 & v69[5]) == 0;
        v69[5] &= v70;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v68);
      }
    }
    __writecr8(v66);
    v71 = v4;
    return CcPostDeferredWrites(v71, a1);
  }
  *(_QWORD *)(a1 + 1584) = MEMORY[0xFFFFF78000000014];
  v90 = &v89;
  v89 = &v89;
  v22 = (_QWORD **)(a1 + 784);
  while ( 1 )
  {
    v23 = *v22;
    if ( *v22 == v22 )
      break;
    v59 = (_QWORD *)*v23;
    if ( (_QWORD **)v23[1] != v22 || (_QWORD *)v59[1] != v23 || (*v22 = v59, v59[1] = v22, v60 = v90, *v90 != &v89) )
LABEL_96:
      __fastfail(3u);
    v23[1] = v90;
    *v23 = &v89;
    *v60 = v23;
    v90 = (_QWORD **)v23;
  }
  *(_BYTE *)(a1 + 986) = 0;
  v87 = CcCalculatePagesToWriteForVolume(a1, a4);
  v24 = v87;
  CcAdjustThrottleForVolume(a1);
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 992);
  v25 = *(_QWORD *)(a1 + 1072);
  *(_DWORD *)(a1 + 1008) = v24;
  *(_DWORD *)(a1 + 912) = v24;
  *(_DWORD *)(v25 + 8LL * *(unsigned int *)(a2 + 152)) = v24;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      a4,
      *(_DWORD *)(a1 + 912),
      *(_QWORD *)(a1 + 992),
      *(_QWORD *)(**(_QWORD **)(v4 + 8) + 17216LL),
      *(_QWORD *)(a1 + 1016),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1080),
      *(_QWORD *)(a1 + 1088),
      *(unsigned int *)(a1 + 704));
  v26 = (__int64 *)(a1 + 664);
  v27 = 0LL;
  v28 = *(_QWORD *)(a1 + 664) - 568LL;
  if ( *(_QWORD *)(a1 + 664) != 568LL )
  {
    do
    {
      v29 = v28 + 568;
      v30 = v27;
      if ( (__int64 *)(v28 + 568) == v26 )
        break;
      v27 = v28;
      if ( v30 )
        v27 = v30;
      if ( v29 != a1 + 640 )
      {
        if ( (unsigned __int8)CcShouldLazyWriteCacheMap(
                                v28,
                                0,
                                a1,
                                v87,
                                *(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL,
                                a4) )
        {
          v5 = 0;
          v93 = 0LL;
          v37 = CcGetNodeForLazyWrite(v28);
          if ( (*(_DWORD *)(v28 + 152) & 0x1000000) != 0 )
          {
            v86 = 1;
            *(_DWORD *)(*(_QWORD *)(v28 + 248) + 144LL) |= 1u;
            v49 = *(_QWORD *)(v28 + 248);
            v50 = *(_QWORD *)(v28 + 264);
            if ( v50 > *(_QWORD *)(v49 + 112) )
            {
              *(_QWORD *)(v49 + 112) = v50;
              if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
                *(_QWORD *)(*(_QWORD *)(v28 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                        + 0x18);
            }
          }
          v38 = *(_DWORD *)(v28 + 152);
          v39 = *(_DWORD *)(v28 + 112);
          *(_DWORD *)(v28 + 200) = v39;
          if ( (v38 & 0x200) != 0 && v39 >= 0x40 )
          {
            if ( (v38 & 0x1000000) != 0 && (v47 = *(_QWORD *)(v28 + 248), (v48 = *(_DWORD *)(v47 + 104)) != 0) )
            {
              if ( v39 <= v48 )
                *(_DWORD *)(v47 + 104) = v48 - v39;
              else
                *(_DWORD *)(v47 + 104) = 0;
              ++CcDbgSkippedReductions;
            }
            else
            {
              *(_DWORD *)(v28 + 200) = v39 >> 3;
            }
          }
          if ( !v84 )
          {
            v45 = *(_DWORD *)(v28 + 200);
            if ( v45 >= v87 )
            {
              if ( (*(_DWORD *)(v28 + 152) & 0x200) != 0 || v27 == v28 && (*(_DWORD *)(v28 + 276) & 0xF) == 0 )
              {
                v96 = 1;
              }
              else
              {
                v53 = *v26;
                v54 = (__int64 **)v26[1];
                if ( *(__int64 **)(*v26 + 8) != v26 )
                  goto LABEL_96;
                if ( *v54 != v26 )
                  goto LABEL_96;
                *v54 = (__int64 *)v53;
                *(_QWORD *)(v53 + 8) = v54;
                v55 = *(__int64 ***)(v28 + 576);
                if ( *v55 != (__int64 *)v29 )
                  goto LABEL_96;
                *v26 = v29;
                v26[1] = (__int64)v55;
                *v55 = v26;
                *(_QWORD *)(v28 + 576) = v26;
              }
              v87 = 0;
              v84 = 1;
            }
            else
            {
              v87 -= v45;
            }
          }
          *(_DWORD *)(v28 + 152) |= 0x20u;
          ++*(_DWORD *)(v28 + 112);
          KxReleaseQueuedSpinLock(&LockHandle);
          v40 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v72 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
            {
              v73 = KeGetCurrentPrcb();
              v74 = v73->SchedulerAssist;
              v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v44 = (v75 & v74[5]) == 0;
              v74[5] &= v75;
              if ( v44 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          __writecr8(v40);
          v32 = v88;
          if ( (int)CcAllocateWorkQueueEntry(v88, a1, v37, &v93) < 0 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 768), &LockHandle);
            *(_DWORD *)(v28 + 152) &= ~0x20u;
            --*(_DWORD *)(v28 + 112);
            goto LABEL_21;
          }
          v41 = v93;
          v42 = SpinLock;
          *(_DWORD *)(v93 + 128) = 2;
          *(_QWORD *)(v41 + 16) = v28;
          KeAcquireInStackQueuedSpinLock(v42, &LockHandle);
          v43 = *(_DWORD *)(v28 + 112) - 1;
          v44 = (*(_DWORD *)(v28 + 152) & 0x10000) == 0;
          *(_DWORD *)(v28 + 112) = v43;
          if ( !v44 )
          {
            *(_QWORD *)(v28 + 504) = v41 | 1;
            CcPostWorkQueue(v41, v37 + 72);
            goto LABEL_43;
          }
          if ( !*(_DWORD *)(v28 + 4) && !v43 )
          {
            *(_QWORD *)(v28 + 504) = v41;
            CcPostWorkQueue(v41, v37 + 120);
            goto LABEL_43;
          }
          *(_QWORD *)(v28 + 504) = v41;
          if ( (*(_DWORD *)(a1 + 1600) & 1) != 0 )
          {
            *(_DWORD *)(v41 + 128) = 7;
            *(_QWORD *)(v41 + 24) = v28;
            *(_QWORD *)(v41 + 16) = 0LL;
            CcPostWorkQueueAsyncLazywrite(v41, v37 + 312);
LABEL_43:
            v6 = v96;
            v85 = 1;
LABEL_44:
            v26 = (__int64 *)(a1 + 664);
            goto LABEL_18;
          }
          CcPostWorkQueue(v41, v37 + 104);
          v6 = v96;
          v26 = (__int64 *)(a1 + 664);
          v85 = 1;
        }
        else
        {
          v31 = *(_DWORD *)(v28 + 152);
          if ( (v31 & 0x10020) == 0x10020 )
          {
            CcIncrementWriteBehindPriority(v28);
          }
          else if ( (unsigned int)++v5 >= 0x14 && (v31 & 0x20) == 0 )
          {
            ++*(_DWORD *)(v28 + 112);
            *(_DWORD *)(v28 + 152) = v31 | 0x20;
            KxReleaseQueuedSpinLock(&LockHandle);
            v46 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v76 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v76 <= 0xFu && LockHandle.OldIrql <= 0xFu && v76 >= 2u )
              {
                v77 = KeGetCurrentPrcb();
                v78 = v77->SchedulerAssist;
                v79 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v44 = (v79 & v78[5]) == 0;
                v78[5] &= v79;
                if ( v44 )
                  KiRemoveSystemWorkPriorityKick(v77);
              }
            }
            __writecr8(v46);
            v5 = 0;
            KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
            *(_DWORD *)(v28 + 152) &= ~0x20u;
            --*(_DWORD *)(v28 + 112);
            goto LABEL_44;
          }
        }
      }
LABEL_18:
      v28 = *(_QWORD *)v29 - 568LL;
      if ( v6 )
      {
        v56 = *v26;
        v57 = (__int64 **)v26[1];
        if ( *(__int64 **)(*v26 + 8) != v26 )
          goto LABEL_96;
        if ( *v57 != v26 )
          goto LABEL_96;
        *v57 = (__int64 *)v56;
        *(_QWORD *)(v56 + 8) = v57;
        v58 = *(_QWORD *)v29;
        if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
          goto LABEL_96;
        *v26 = v58;
        v6 = 0;
        v26[1] = v29;
        *(_QWORD *)(v58 + 8) = v26;
        *(_QWORD *)v29 = v26;
        v96 = 0;
      }
    }
    while ( v28 != v27 );
  }
  v32 = v88;
LABEL_21:
  v33 = v89;
  if ( v89 == &v89 )
    v34 = v85;
  else
    v34 = 1;
  while ( v33 != &v89 )
  {
    v61 = (_QWORD *)*v33;
    if ( (_QWORD **)v33[1] != &v89 || (_QWORD *)v61[1] != v33 )
      goto LABEL_96;
    v89 = (_QWORD *)*v33;
    v61[1] = &v89;
    v62 = v33[19];
    if ( (*(_DWORD *)(a1 + 1600) & 2) != 0 )
      CcPostWorkQueueAsyncLazywrite(v33, v62 + 312);
    else
      CcPostWorkQueue(v33, v62 + 104);
    v33 = v89;
  }
  if ( (_BYTE)dword_140D1D1EC
    || v34
    || *(_QWORD *)(a1 + 1104) != a1 + 1104
    || (CcComputeNextScanTime(v32, a1, v95, &v92), v92 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScanOnVolume(a1, &v92);
    if ( *(_BYTE *)(a1 + 708) )
      *(_BYTE *)(a1 + 708) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 708) = 1;
    *(_BYTE *)(v32 + 1049) = 0;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v80 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v80 <= 0xFu && LockHandle.OldIrql <= 0xFu && v80 >= 2u )
    {
      v81 = KeGetCurrentPrcb();
      v82 = v81->SchedulerAssist;
      v83 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v44 = (v83 & v82[5]) == 0;
      v82[5] &= v83;
      if ( v44 )
        KiRemoveSystemWorkPriorityKick(v81);
    }
  }
  __writecr8(v35);
  if ( v86 )
    CcUpdateTimeOnLogHandles(v32);
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a4, *(unsigned int *)(v32 + 976));
  result = a1 + 1104;
  if ( *(_QWORD *)result != result )
  {
    v71 = v32;
    return CcPostDeferredWrites(v71, a1);
  }
  return result;
}
