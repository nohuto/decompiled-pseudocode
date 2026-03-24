/*
 * XREFs of CcSetLogHandleForFileEx @ 0x1403119F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, PVOID Object)
{
  __int64 v5; // rax
  __int64 v9; // rbx
  __int64 Partition; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rdx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v32; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v34; // [rsp+48h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v36[10]; // [rsp+68h] [rbp-71h] BYREF

  v34 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&v35.OldIrql = 0LL;
  v9 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x316uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(*(_QWORD **)(v5 + 8), a2, a3, a4);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x325uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v35.LockQueue.Next = 0LL;
  v35.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock((__int64)&v35, (volatile __int64 *)(Partition + 128));
  if ( *(_QWORD *)(v9 + 240) )
  {
    v20 = *(_QWORD *)(v9 + 120);
    v21 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v20 + 8) != v9 + 120 || *v21 != v9 + 120 )
      goto FatalListEntryError_25;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  if ( !a2 )
  {
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    *(_QWORD *)(v9 + 240) = 0LL;
    goto LABEL_13;
  }
  v11 = (__int64 *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
    v12 = Partition + 96;
  else
    v12 = Partition + 32;
  v13 = *(__int64 ***)(v12 + 8);
  if ( *v13 != (__int64 *)v12 )
FatalListEntryError_25:
    __fastfail(3u);
  *v11 = v12;
  *(_QWORD *)(v9 + 128) = v13;
  *v13 = v11;
  *(_QWORD *)(v12 + 8) = v11;
  v14 = *(_QWORD *)(v9 + 504);
  if ( !*(_QWORD *)(v14 + 40) )
  {
    memset(v36, 0, 0x98uLL);
    *(_QWORD *)&v36[1] = a4;
    *((_QWORD *)&v36[0] + 1) = a3;
    *(_QWORD *)&v36[0] = a2;
    *((_QWORD *)&v36[8] + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v14 = *(_QWORD *)(v9 + 504);
      *((_QWORD *)&v36[7] + 1) = Object;
    }
    v22 = v36[1];
    *(_OWORD *)(v14 + 40) = v36[0];
    v23 = v36[2];
    *(_OWORD *)(v14 + 56) = v22;
    v24 = v36[3];
    *(_OWORD *)(v14 + 72) = v23;
    v25 = v36[4];
    *(_OWORD *)(v14 + 88) = v24;
    v26 = v36[5];
    *(_OWORD *)(v14 + 104) = v25;
    v27 = v36[6];
    *(_OWORD *)(v14 + 120) = v26;
    v28 = v36[8];
    *(_OWORD *)(v14 + 136) = v27;
    v29 = *(_QWORD *)&v36[9];
    *(_OWORD *)(v14 + 152) = v36[7];
    *(_OWORD *)(v14 + 168) = v28;
    *(_QWORD *)(v14 + 184) = v29;
  }
  v15 = *(_DWORD *)(v9 + 152);
  v16 = *(_QWORD *)(v9 + 504) + 40LL;
  *(_QWORD *)(v9 + 240) = v16;
  if ( (v15 & 0x1000000) == 0 )
  {
    v17 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v17 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), v17);
      v15 = *(_DWORD *)(v9 + 152);
    }
  }
  *(_DWORD *)(v9 + 152) = v15 | 0x1000000;
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  result = (unsigned int)KiIrqlFlags;
  v19 = (unsigned __int8)v34;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v34 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
        v32 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v32 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v19);
  return result;
}
