/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x14030FEE0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x1402767E0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x14027733C (CcFreeWorkQueueEntry.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 Partition; // r13
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // eax
  unsigned __int8 OldIrql; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // edx
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int8 v30; // bl
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v38; // [rsp+52h] [rbp-96h]
  char v39; // [rsp+53h] [rbp-95h]
  int v40; // [rsp+54h] [rbp-94h]
  _QWORD v41[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v44; // [rsp+98h] [rbp-50h] BYREF
  char v46; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v36 = 0LL;
  v39 = 0;
  v46 = 0;
  v2 = 0;
  v3 = 0LL;
  v44 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v35, 0, sizeof(v35));
  memset(&v42, 0, sizeof(v42));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v38 = 6;
    v40 = 0;
    v41[1] = v41;
    v41[0] = v41;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      Partition = CcGetPartition(*(_QWORD **)(v9 + 8), v6, v7, v8);
      v35.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v35.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v35, (volatile __int64 *)(Partition + 128));
      v5 = 1;
      if ( *(_QWORD *)(v10 + 224) == v10 + 224 )
      {
        v11 = *(_DWORD *)(v10 + 152);
        if ( (v11 & 0x100) == 0 )
        {
          v46 = 1;
          *(_DWORD *)(v10 + 152) = v11 | 0x10000;
          v36 = *(_QWORD *)(v10 + 272);
          *(_QWORD *)(v10 + 272) = (char *)&v36 + 1;
          v12 = *(_DWORD *)(v10 + 152);
          if ( (v12 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v10 + 496) )
            {
              v42.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v42.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock((__int64)&v42, (volatile __int64 *)(Partition + 192));
              v14 = *(_QWORD *)(v10 + 496);
              if ( v14 )
              {
                v3 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
                v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
                v16 = *(_QWORD **)((v14 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v15 + 8) != v3 || *v16 != v3 )
                  __fastfail(3u);
                *v16 = v15;
                *(_QWORD *)(v15 + 8) = v16;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v10 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
            }
          }
          else
          {
            *(_DWORD *)(v10 + 152) = v12 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v44 + 1) = v3;
      CcWriteBehind(v10, (__int64)&v44);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v46 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v35);
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v22 )
        {
          v23 = (_QWORD *)(v22 + 272);
          v24 = *(_QWORD *)(v22 + 272);
          if ( v24 )
          {
            while ( (__int64 *)v24 != (__int64 *)((char *)&v36 + 1) )
            {
              v23 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFEuLL);
              v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v24 )
                goto LABEL_37;
            }
            *v23 = v36;
          }
LABEL_37:
          *(_DWORD *)(v22 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
          v25 = v35.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v26 = KeGetCurrentIrql();
              if ( v26 <= 0xFu && v35.OldIrql <= 0xFu && v26 >= 2u )
              {
                v27 = KeGetCurrentPrcb();
                v28 = v27->SchedulerAssist;
                v29 = ~(unsigned __int16)(-1LL << (v35.OldIrql + 1));
                v21 = (v29 & v28[5]) == 0;
                v28[5] &= v29;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
          }
          __writecr8(v25);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
          v30 = v35.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v31 = KeGetCurrentIrql();
              if ( v31 <= 0xFu && v35.OldIrql <= 0xFu && v31 >= 2u )
              {
                v32 = KeGetCurrentPrcb();
                v33 = v32->SchedulerAssist;
                v34 = ~(unsigned __int16)(-1LL << (v35.OldIrql + 1));
                v21 = (v34 & v33[5]) == 0;
                v33[5] &= v34;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick(v32);
              }
            }
          }
          __writecr8(v30);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
