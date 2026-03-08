/*
 * XREFs of CcFlushCachePreProcess @ 0x1403373A0
 * Callers:
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x140538060 (CcWriteBehindAsync.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     CcPerfLogFlushSection @ 0x140390B04 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x140390BEC (CcPerfLogFlushCache.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140872D84 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcFlushCachePreProcess(__int64 a1)
{
  struct _IO_STATUS_BLOCK *v1; // r15
  __int64 v2; // r12
  char v3; // di
  char v5; // r13
  __int64 v6; // r14
  void *v7; // rax
  void *v8; // rcx
  int v9; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r14
  unsigned __int64 v27; // rbx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  struct _SLIST_ENTRY *v32; // r14
  _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY **v34; // rax
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _QWORD *v42; // rcx
  char v43; // dl
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // dl
  int v47; // eax
  __int128 v48; // [rsp+50h] [rbp-29h] BYREF
  __int64 v49; // [rsp+60h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+80h] [rbp+7h] BYREF
  __int64 v52; // [rsp+E0h] [rbp+67h]
  __int64 v53; // [rsp+E8h] [rbp+6Fh]
  __int64 *v54; // [rsp+F0h] [rbp+77h]

  v1 = *(struct _IO_STATUS_BLOCK **)(a1 + 112);
  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 108);
  v49 = 0LL;
  v5 = 0;
  v54 = *(__int64 **)(a1 + 24);
  v6 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_QWORD *)(a1 + 88) )
  {
    v7 = *(void **)(a1 + 96);
    if ( v7 )
    {
      if ( v7 != &CcNoDelay )
        KeBugCheckEx(0x34u, 0x16A8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  ++qword_140C5F540;
  if ( !byte_140C5F501 && CcTelemetryGlobalData && !dword_140C5F610 && !dword_140C5F614 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v1->Status = 0;
  v8 = *(void **)(a1 + 96);
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v8 == &CcNoDelay )
  {
    *(_QWORD *)(a1 + 168) = v1->Information;
    v1->Status = -2147483626;
    *(_BYTE *)(a1 + 132) = 1;
LABEL_15:
    *(_QWORD *)(a1 + 96) = 0LL;
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(a1 + 56) | 1;
  *(_DWORD *)(a1 + 56) = v9;
  if ( v3 )
    *(_DWORD *)(a1 + 56) = v9 | 0x10;
  if ( v8 == &CcFlushForImageSection )
  {
    *(_BYTE *)(a1 + 138) = 1;
    goto LABEL_15;
  }
LABEL_16:
  v1->Information = 0LL;
  *((_QWORD *)&v48 + 1) = &CcMasterLock;
  *(_QWORD *)&v48 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  LOBYTE(v49) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v48, &CcMasterLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v48) )
  {
    KxWaitForLockOwnerShip(&v48);
  }
  v13 = v54[1];
  *(_QWORD *)(a1 + 16) = v13;
  if ( v13 )
  {
    v6 = *(_QWORD *)(v13 + 536);
    v52 = v6;
    v53 = *(_QWORD *)(v13 + 600);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v53;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    v5 = 1;
    if ( (*(_DWORD *)(v13 + 152) & 0x2000) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      if ( (v14 & 1) == 0 )
      {
LABEL_30:
        KxReleaseQueuedSpinLock(&LockHandle);
        KxReleaseQueuedSpinLock(&v48);
        v15 = (unsigned __int8)v49;
        if ( !KiIrqlFlags )
        {
LABEL_38:
          __writecr8(v15);
          return 0;
        }
        v16 = (KiIrqlFlags & 1) == 0;
LABEL_32:
        v17 = KeGetCurrentIrql();
        if ( !v16 && v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
          v16 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        goto LABEL_38;
      }
      *(_QWORD *)(a1 + 96) = v14 ^ 1;
    }
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( (*(_DWORD *)(v13 + 152) & 0x10000) != 0 )
      {
        *(_BYTE *)(a1 + 133) = 1;
        if ( *(_DWORD *)(v13 + 524) )
          *(_BYTE *)(a1 + 134) = 1;
      }
    }
    else
    {
      v22 = *(__int64 **)(a1 + 96);
      if ( v22 )
      {
        v23 = *v22;
        v24 = *(_QWORD *)(v13 + 32);
        if ( v23 >= v24 )
          goto LABEL_30;
        if ( v23 + v2 > v24 )
        {
          LODWORD(v2) = v24 - v23;
          *(_DWORD *)(a1 + 104) = v24 - v23;
        }
      }
      ++*(_DWORD *)(v13 + 524);
    }
  }
  if ( *(_QWORD *)(a1 + 96) && !(_DWORD)v2 )
  {
    if ( v13 && !*(_BYTE *)(a1 + 132) )
      --*(_DWORD *)(v13 + 524);
    if ( v5 )
      KxReleaseQueuedSpinLock(&LockHandle);
    KxReleaseQueuedSpinLock(&v48);
    v15 = (unsigned __int8)v49;
    if ( !KiIrqlFlags )
      goto LABEL_38;
    v16 = (KiIrqlFlags & 1) == 0;
    goto LABEL_32;
  }
  if ( !v13 )
  {
LABEL_76:
    if ( v5 )
      KxReleaseQueuedSpinLock(&LockHandle);
    KxReleaseQueuedSpinLock(&v48);
    v35 = (unsigned __int8)v49;
    if ( KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v16 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    __writecr8(v35);
    if ( v13 && (*(_DWORD *)(v13 + 152) & 0x40000000) != 0 )
      *(_BYTE *)(a1 + 134) = 1;
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      CcPerfLogFlushCache(
        *(_QWORD *)(a1 + 168),
        v13,
        *(_QWORD *)(a1 + 96),
        v2,
        *(_BYTE *)(a1 + 132) == 1,
        *(_BYTE *)(a1 + 133) == 1,
        *(_BYTE *)(a1 + 134) == 1);
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( !v13 )
        goto LABEL_99;
    }
    else
    {
      if ( !v13 )
        goto LABEL_99;
      if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
        CcBoostLowPriorityWorkerThread(v52, v13);
    }
    v40 = *(_QWORD *)(a1 + 160);
    if ( ((*(_BYTE *)(v40 + 6) & 0x10) == 0 || (*(_BYTE *)(v40 + 4) & 0x20) == 0)
      && (*(_DWORD *)(v13 + 152) & 0x20000) == 0 )
    {
LABEL_100:
      if ( !*(_BYTE *)(a1 + 134) )
      {
        if ( !v13 )
          return 1;
        if ( (*(_DWORD *)(v13 + 152) & 0x4000000) == 0 )
        {
LABEL_117:
          v42 = *(_QWORD **)(a1 + 96);
          if ( v42 )
            *(_QWORD *)(a1 + 32) = *v42;
          v43 = CcEnablePerVolumeLazyWriter;
          v44 = v53 + 1104;
          if ( !CcEnablePerVolumeLazyWriter )
            v44 = v52 + 1168;
          *(_QWORD *)(a1 + 176) = v44;
          v45 = v53 + 1172;
          if ( !v43 )
            v45 = v52 + 1292;
          v46 = *(_BYTE *)(a1 + 132);
          *(_QWORD *)(a1 + 184) = v45;
          if ( v46 || *(_BYTE *)(a1 + 134) || v42 || (_DWORD)v2 || *(_QWORD *)(a1 + 88) )
          {
            *(_DWORD *)(a1 + 48) = 1;
            v47 = *(_DWORD *)(a1 + 48);
            if ( (_DWORD)v2 )
              v47 = v2;
            *(_DWORD *)(a1 + 48) = v47;
            if ( v46 )
              *(_QWORD *)(a1 + 144) = MEMORY[0xFFFFF78000000320];
          }
          else
          {
            *(_BYTE *)(a1 + 192) = 1;
            *(_DWORD *)(a1 + 48) = 1;
          }
          if ( CcEnablePerVolumeLazyWriter
            && *(_BYTE *)(a1 + 132)
            && !*(_BYTE *)(a1 + 135)
            && (*(_DWORD *)(v13 + 152) & 0x40000200) == 0 )
          {
            *(LARGE_INTEGER *)(a1 + 224) = KeQueryPerformanceCounter(0LL);
          }
          return 1;
        }
      }
LABEL_103:
      *(_BYTE *)(a1 + 135) = 1;
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
        CcPerfLogFlushSection(*(_QWORD *)(a1 + 168), v13, *(_QWORD *)(a1 + 96), v2, *(_DWORD *)(a1 + 56));
      if ( v13 )
        CcUnmapVacbArray(v13, *(__int64 **)(a1 + 96), v2, 0, 0, 0);
      v41 = MmFlushSection(v54, *(__int64 **)(a1 + 96), (unsigned int)v2, 0LL, v1, *(_DWORD *)(a1 + 56));
      if ( v41 < 0 )
      {
        if ( *(_BYTE *)(a1 + 132) )
        {
          if ( v1->Status != -2147483626 )
            goto LABEL_113;
        }
        else if ( v1->Status )
        {
          goto LABEL_113;
        }
        v1->Status = v41;
      }
LABEL_113:
      if ( v1->Status < 0 )
        *(_DWORD *)(a1 + 128) = v1->Status;
      if ( !v13 || (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
        return 1;
      goto LABEL_117;
    }
LABEL_99:
    if ( !*(_BYTE *)(a1 + 132) )
      goto LABEL_103;
    goto LABEL_100;
  }
  if ( !*(_BYTE *)(a1 + 138) )
    goto LABEL_75;
  if ( *(_DWORD *)(v13 + 524) >= 2u )
    goto LABEL_64;
  v25 = *(_DWORD *)(v13 + 152);
  memset(&v51, 0, sizeof(v51));
  if ( (v25 & 0x20) == 0 )
  {
LABEL_75:
    ++*(_DWORD *)(v13 + 4);
    ++*(_DWORD *)(v13 + 544);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)((*(_QWORD *)(v13 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
    *(_QWORD *)(a1 + 208) = *(unsigned int *)(v13 + 112);
    goto LABEL_76;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 832), &v51);
  v26 = *(_QWORD *)(v13 + 504);
  if ( v26 )
  {
    v32 = (struct _SLIST_ENTRY *)(v26 & 0xFFFFFFFFFFFFFFFEuLL);
    Next = v32->Next;
    v34 = (struct _SLIST_ENTRY **)*((_QWORD *)&v32->Next + 1);
    if ( *(&v32->Next->Next + 1) != v32 || *v34 != v32 )
      __fastfail(3u);
    *v34 = Next;
    *((_QWORD *)&Next->Next + 1) = v34;
    *((_QWORD *)&v32->Next + 1) = 0LL;
    v32->Next = 0LL;
    *(_DWORD *)(v13 + 152) &= ~0x20u;
    *(_QWORD *)(v13 + 504) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
    CcFreeWorkQueueEntry(v32);
    goto LABEL_75;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
LABEL_64:
  --*(_DWORD *)(v13 + 524);
  KxReleaseQueuedSpinLock(&LockHandle);
  KxReleaseQueuedSpinLock(&v48);
  v27 = (unsigned __int8)v49;
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
      v16 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(v27);
  v1->Status = -1073741740;
  return 0;
}
