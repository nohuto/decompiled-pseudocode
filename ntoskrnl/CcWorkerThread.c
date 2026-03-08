/*
 * XREFs of CcWorkerThread @ 0x140215D70
 * Callers:
 *     <none>
 * Callees:
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     CcShouldWorkOnThisQueue @ 0x140215CEC (CcShouldWorkOnThisQueue.c)
 *     CcFindNextWorkQueueEntry @ 0x14021746C (CcFindNextWorkQueueEntry.c)
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140219E24 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     CcNotifyWriteBehindVolume @ 0x1403BBE2C (CcNotifyWriteBehindVolume.c)
 *     CcReEngageWorkerThreads @ 0x1403CEBD0 (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CcDebugExceptionFilter @ 0x140409EA0 (CcDebugExceptionFilter.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 *     CcLogExtraWBThreadAction @ 0x1405344A8 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x140534778 (CcOkToAddWriteBehindThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 NextWorkQueueEntry; // r14
  int v3; // eax
  bool v4; // zf
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r12
  int v8; // ebx
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // rbx
  __int64 **v17; // r15
  int v18; // eax
  __int64 *v19; // r10
  __int64 v20; // rax
  _QWORD *v21; // r12
  signed __int64 *v22; // r15
  _QWORD *v23; // rax
  __int64 *v24; // r10
  __int64 v25; // rcx
  char v26; // r15
  volatile signed __int32 *v27; // rax
  __int64 v28; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  __int64 v34; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v36; // ebx
  struct _KTHREAD *v37; // rax
  volatile signed __int32 *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rdx
  unsigned __int64 v41; // rdi
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int64 v46; // rbx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-128h]
  __int64 v53; // [rsp+28h] [rbp-120h]
  char v54; // [rsp+30h] [rbp-118h]
  char v55; // [rsp+31h] [rbp-117h]
  char v56; // [rsp+32h] [rbp-116h]
  int v57; // [rsp+38h] [rbp-110h]
  __int64 v58; // [rsp+40h] [rbp-108h]
  __int64 v59; // [rsp+48h] [rbp-100h] BYREF
  __int64 v60; // [rsp+50h] [rbp-F8h]
  int v61; // [rsp+58h] [rbp-F0h]
  _QWORD *v62; // [rsp+60h] [rbp-E8h]
  _QWORD *v63; // [rsp+68h] [rbp-E0h]
  __int64 v64; // [rsp+70h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD *v67; // [rsp+98h] [rbp-B0h]
  __int64 v68; // [rsp+A0h] [rbp-A8h]
  __int64 v69; // [rsp+A8h] [rbp-A0h]
  __int64 v70; // [rsp+B0h] [rbp-98h]
  __int64 v71; // [rsp+B8h] [rbp-90h]
  __int64 v72; // [rsp+C0h] [rbp-88h]
  __int64 v73; // [rsp+C8h] [rbp-80h]
  __int64 v74; // [rsp+D0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v75; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD v76[2]; // [rsp+F8h] [rbp-50h] BYREF
  _QWORD v77[2]; // [rsp+108h] [rbp-40h] BYREF

  v63 = (_QWORD *)a1;
  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  v55 = 0;
  v59 = 0LL;
  v69 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v75, 0, sizeof(v75));
  v60 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  v57 = v3;
  v61 = v3;
  if ( v3 == 1 )
  {
    v4 = 0;
  }
  else
  {
    v4 = v3 == 2;
    if ( v3 != 2 )
      KeBugCheckEx(0x34u, 0x19E9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v56 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  v70 = v5;
  v6 = *(_QWORD *)(a1 + 72);
  v71 = v6;
  v64 = v6;
  v67 = (_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 64);
  v58 = v7;
  v72 = v7;
  while ( 1 )
  {
    v8 = 0;
    v54 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 832), &LockHandle);
    if ( v55 )
    {
      *(_BYTE *)(v6 + 196) = 0;
      v55 = 0;
      CcReEngageWorkerThreads(v5, v6, *(unsigned int *)(v6 + 180), *(unsigned int *)(v6 + 184));
    }
    if ( v60 == 35422 )
    {
      if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 504LL) = NextWorkQueueEntry;
      v9 = (__int64 *)v1[1];
      if ( (_QWORD *)*v9 != v1 )
        goto LABEL_102;
      *(_QWORD *)NextWorkQueueEntry = v1;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v9;
      *v9 = NextWorkQueueEntry;
      v1[1] = NextWorkQueueEntry;
      v60 = 0LL;
    }
    if ( v57 == 2 )
      break;
LABEL_20:
    if ( (v8 & 1) == 0 )
    {
      v8 |= 1u;
      v1 = (_QWORD *)(v6 + 72);
      if ( (_QWORD *)*v1 != v1 )
        goto LABEL_26;
    }
    if ( (v8 & 2) == 0 )
    {
      v8 |= 2u;
      v1 = (_QWORD *)(v6 + 88);
      if ( (_QWORD *)*v1 != v1 )
        goto LABEL_26;
    }
    while ( 1 )
    {
      if ( (v8 & 4) != 0 )
        goto LABEL_16;
      v8 |= 4u;
      v1 = (_QWORD *)(v6 + 104);
      if ( (_QWORD *)*v1 == v1 )
        goto LABEL_16;
LABEL_26:
      v62 = v1;
      if ( CcShouldWorkOnThisQueue((_DWORD *)v5, v6, (__int64)v1, v56) )
      {
        NextWorkQueueEntry = CcFindNextWorkQueueEntry(v15, v14);
        v68 = NextWorkQueueEntry;
        if ( NextWorkQueueEntry )
          break;
      }
LABEL_19:
      if ( v57 != 2 )
        goto LABEL_20;
    }
    v16 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v6 + 224) )
    {
      if ( MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v6 + 216) + (unsigned int)CcExtraWBThreadDelay
        && *(_QWORD *)(v6 + 56) == v6 + 56 )
      {
        if ( *(_DWORD *)(v5 + 976) )
        {
          if ( *(_QWORD *)(v6 + 104) != v6 + 104 )
          {
            v17 = (__int64 **)(v6 + 136);
            if ( *v17 != (__int64 *)v17 )
            {
              v18 = CcOkToAddWriteBehindThread(v5);
              *(_QWORD *)(v6 + 216) = v16;
              if ( *(_DWORD *)(v6 + 152) && v18 == 3 )
                *(_BYTE *)(v6 + 225) = 1;
              if ( v18 == 2 )
              {
                v19 = *v17;
                v20 = **v17;
                if ( (__int64 **)(*v17)[1] != v17 || *(__int64 **)(v20 + 8) != v19 )
                  goto LABEL_102;
                *v17 = (__int64 *)v20;
                *(_QWORD *)(v20 + 8) = v17;
                ++*(_DWORD *)(v6 + 152);
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1296)) <= 1 )
                  __fastfail(0xEu);
                if ( v7 && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8)) <= 1 )
                  __fastfail(0xEu);
                *v19 = 0LL;
                ExQueueWorkItemToPartition((ULONG_PTR)v19);
                v54 = 1;
              }
            }
          }
        }
      }
    }
    v21 = (_QWORD *)(v6 + 104);
    v73 = v6 + 104;
    if ( v1 == (_QWORD *)(v6 + 104) )
    {
      v22 = (signed __int64 *)(v6 + 208);
      *(_QWORD *)(v6 + 208) = v16;
    }
    else
    {
      v22 = (signed __int64 *)(v64 + 208);
    }
    if ( (unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v5)
      || v16 < *v22 + (unsigned int)CcExtraWBThreadDelay
      || *(_QWORD *)(v6 + 56) != v6 + 56
      || (_QWORD *)*v21 == v21
      || (v23 = (_QWORD *)(v6 + 136), v24 = *(__int64 **)(v6 + 136), v24 == (__int64 *)(v6 + 136))
      || *(_DWORD *)(v6 + 152) )
    {
      v26 = v54;
    }
    else
    {
      v25 = *v24;
      if ( (_QWORD *)v24[1] != v23 || *(__int64 **)(v25 + 8) != v24 )
        goto LABEL_102;
      *v23 = v25;
      *(_QWORD *)(v25 + 8) = v23;
      ++*(_DWORD *)(v6 + 152);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1296)) <= 1 )
        __fastfail(0xEu);
      if ( v58 && _InterlockedIncrement64((volatile signed __int64 *)(v58 + 8)) <= 1 )
        __fastfail(0xEu);
      *v24 = 0LL;
      ExQueueWorkItemToPartition((ULONG_PTR)v24);
      *v22 = v16;
      v26 = 1;
    }
    if ( v1 == v21 || (v27 = (volatile signed __int32 *)(v6 + 192), v1 == (_QWORD *)(v6 + 120)) )
      v27 = (volatile signed __int32 *)(v6 + 188);
    _InterlockedIncrement(v27);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v33 & SchedulerAssist[5]) == 0;
        v28 = (unsigned int)v33 & SchedulerAssist[5];
        SchedulerAssist[5] = v28;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    {
      if ( v26 )
        CcLogExtraWBThreadAction(v5, v6, 2LL);
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      {
        v66 = NextWorkQueueEntry;
        v76[0] = &v66;
        v76[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v76, 1, -2147352576, 5633, 4200706);
      }
    }
    switch ( *(_DWORD *)(NextWorkQueueEntry + 128) )
    {
      case 1:
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
        break;
      case 2:
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
        v36 = 0;
        do
        {
          v60 = NextWorkQueueEntry;
          CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), &v59, v6);
          if ( v36 >= 0xA )
            break;
          ++v36;
        }
        while ( v60 == 35422 );
        v37 = KeGetCurrentThread();
        *((_DWORD *)&v37[1].SwapListEntry + 3) &= ~2u;
        break;
      case 3:
        v34 = *(unsigned int *)(NextWorkQueueEntry + 16);
        if ( *v67 )
          CcLazyWriteScanVolume(*v67, v6, NextWorkQueueEntry, v34);
        else
          CcLazyWriteScan(v5, v6, NextWorkQueueEntry, v34);
        break;
      case 4:
        KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
        v55 = 1;
        break;
    }
    if ( v1 == v21 || (v38 = (volatile signed __int32 *)(v6 + 192), v1 == (_QWORD *)(v6 + 120)) )
      v38 = (volatile signed __int32 *)(v6 + 188);
    _InterlockedDecrement(v38);
    if ( v60 == 35422 )
    {
      v7 = v58;
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      {
        LOBYTE(v28) = 1;
        CcPerfLogWorkItemEnqueue(v1, NextWorkQueueEntry, v28, 0LL, BugCheckParameter4, v53);
      }
    }
    else
    {
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      {
        v74 = NextWorkQueueEntry;
        v77[0] = &v74;
        v77[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v77, 1, -2147352576, 5634, 4200706);
      }
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
      v7 = v58;
    }
  }
  if ( !*(_BYTE *)(v6 + 225) )
    goto LABEL_19;
  *(_BYTE *)(v6 + 225) = 0;
LABEL_16:
  if ( v57 != 2 )
  {
    v39 = *(_QWORD **)(v6 + 64);
    if ( *v39 == v6 + 56 )
    {
      v40 = v63;
      *v63 = v6 + 56;
      v40[1] = v39;
      *v39 = v40;
      *(_QWORD *)(v6 + 64) = v40;
      v13 = (_DWORD *)(v6 + 48);
      --*(_DWORD *)(v6 + 48);
      v12 = (_DWORD *)(v64 + 152);
      goto LABEL_104;
    }
LABEL_102:
    __fastfail(3u);
  }
  v10 = *(_QWORD **)(v6 + 144);
  if ( *v10 != v6 + 136 )
    goto LABEL_102;
  v11 = v63;
  *v63 = v6 + 136;
  v11[1] = v10;
  *v10 = v11;
  *(_QWORD *)(v6 + 144) = v11;
  v12 = (_DWORD *)(v6 + 152);
  --*(_DWORD *)(v6 + 152);
  v13 = (_DWORD *)(v64 + 48);
LABEL_104:
  if ( *(_BYTE *)(v6 + 224) && !*v12 && *v13 <= 1u )
  {
    *(_BYTE *)(v6 + 224) = 0;
    memset(*(void **)(v5 + 1136), 0, 8LL * (unsigned int)(*(_DWORD *)(v5 + 864) + 1));
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v41 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v42 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && LockHandle.OldIrql <= 0xFu && v42 >= 2u )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v4 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  __writecr8(v41);
  if ( v7
    && v57 != 2
    && *v13 <= 1u
    && *(_QWORD *)(v7 + 992) >= (unsigned __int64)*(unsigned int *)(v7 + 1040)
    && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v7 + 1584) + 5000000LL )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v75);
    CcNotifyWriteBehindVolume(v7, 32LL);
    KxReleaseQueuedSpinLock(&v75);
    v46 = v75.OldIrql;
    if ( KiIrqlFlags )
    {
      v47 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && v75.OldIrql <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (v75.OldIrql + 1));
        v4 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    __writecr8(v46);
  }
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 && v57 == 2 )
    CcLogExtraWBThreadAction(v5, v6, 3LL);
  result = CcDereferencePartition(v5);
  if ( v7 )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8)) <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
