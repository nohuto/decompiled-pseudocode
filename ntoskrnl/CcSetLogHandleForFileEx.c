__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v6; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 result; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-99h] BYREF
  __int64 v38; // [rsp+48h] [rbp-81h]
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+50h] [rbp-79h] BYREF
  _OWORD v40[10]; // [rsp+68h] [rbp-61h] BYREF

  v38 = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  memset(&v39, 0, sizeof(v39));
  v9 = *(_QWORD *)(v6 + 8);
  if ( !*(_DWORD *)(v9 + 4) )
    KeBugCheckEx(0x34u, 0x327uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD **)(v9 + 536);
  if ( (*(_DWORD *)(v9 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x336uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v10 + 96, &v39);
  if ( *(_QWORD *)(v9 + 248) )
  {
    v21 = *(_QWORD *)(v9 + 120);
    v22 = *(_QWORD **)(v9 + 128);
    if ( *(_QWORD *)(v21 + 8) != v9 + 120 || *v22 != v9 + 120 )
      goto LABEL_31;
    v13 = CcEnablePerVolumeLazyWriter == 0;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    if ( !v13 )
    {
      v23 = *(_QWORD *)(v9 + 584);
      v24 = *(_QWORD **)(v9 + 592);
      if ( *(_QWORD *)(v23 + 8) != v9 + 584 || *v24 != v9 + 584 )
        goto LABEL_31;
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
    }
  }
  if ( !a2 )
  {
    *(_QWORD *)(v9 + 248) = 0LL;
    *(_DWORD *)(v9 + 152) &= ~0x1000000u;
    goto LABEL_16;
  }
  v11 = (_QWORD *)(v9 + 120);
  if ( *(_DWORD *)(v9 + 112) )
  {
    v25 = (_QWORD *)v10[89];
    if ( (_QWORD *)*v25 != v10 + 88 )
      goto LABEL_31;
    v13 = CcEnablePerVolumeLazyWriter == 0;
    *v11 = v10 + 88;
    *(_QWORD *)(v9 + 128) = v25;
    *v25 = v11;
    v10[89] = v11;
    if ( v13 )
      goto LABEL_11;
    v14 = *(_QWORD *)(v9 + 600) + 688LL;
    goto LABEL_9;
  }
  v12 = (_QWORD *)v10[81];
  if ( (_QWORD *)*v12 != v10 + 80 )
    goto LABEL_31;
  v13 = CcEnablePerVolumeLazyWriter == 0;
  *v11 = v10 + 80;
  *(_QWORD *)(v9 + 128) = v12;
  *v12 = v11;
  v10[81] = v11;
  if ( !v13 )
  {
    v14 = *(_QWORD *)(v9 + 600) + 624LL;
LABEL_9:
    v15 = *(__int64 ***)(v14 + 8);
    v16 = (__int64 *)(v9 + 584);
    if ( *v15 == (__int64 *)v14 )
    {
      *v16 = v14;
      *(_QWORD *)(v9 + 592) = v15;
      *v15 = v16;
      *(_QWORD *)(v14 + 8) = v16;
      goto LABEL_11;
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_11:
  if ( !*(_QWORD *)(*(_QWORD *)(v9 + 512) + 40LL) )
  {
    memset(v40, 0, 0x98uLL);
    *(_QWORD *)&v40[1] = a4;
    *((_QWORD *)&v40[0] + 1) = a3;
    *(_QWORD *)&v40[0] = a2;
    *((_QWORD *)&v40[8] + 1) = -1LL;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *((_QWORD *)&v40[7] + 1) = Object;
    }
    v26 = *(_QWORD *)(v9 + 512);
    v27 = v40[1];
    *(_OWORD *)(v26 + 40) = v40[0];
    v28 = v40[2];
    *(_OWORD *)(v26 + 56) = v27;
    v29 = v40[3];
    *(_OWORD *)(v26 + 72) = v28;
    v30 = v40[4];
    *(_OWORD *)(v26 + 88) = v29;
    v31 = v40[5];
    *(_OWORD *)(v26 + 104) = v30;
    v32 = v40[6];
    *(_OWORD *)(v26 + 120) = v31;
    v33 = v40[8];
    *(_OWORD *)(v26 + 136) = v32;
    v34 = *(_QWORD *)&v40[9];
    *(_OWORD *)(v26 + 152) = v40[7];
    *(_OWORD *)(v26 + 168) = v33;
    *(_QWORD *)(v26 + 184) = v34;
  }
  v17 = *(_QWORD *)(v9 + 512) + 40LL;
  *(_QWORD *)(v9 + 248) = v17;
  if ( (*(_DWORD *)(v9 + 152) & 0x1000000) == 0 )
  {
    v18 = *(unsigned int *)(v9 + 112);
    if ( (_DWORD)v18 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), v18);
  }
  *(_DWORD *)(v9 + 152) |= 0x1000000u;
LABEL_16:
  KxReleaseQueuedSpinLock(&v39);
  result = KxReleaseQueuedSpinLock(&LockHandle.LockQueue.Lock);
  v20 = (unsigned __int8)v38;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v38 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v20);
  return result;
}
