__int64 __fastcall CcWriteBehindPreProcess(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // r15
  _DWORD *v3; // rax
  char v4; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 OldIrql; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  char v14; // r12
  char v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int *v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v24; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int64 v39; // rdi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v52; // [rsp+90h] [rbp+40h]

  v1 = *(_QWORD *)(a1 + 256);
  v2 = 0;
  v3 = *(_DWORD **)(a1 + 112);
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v52 = v3;
  memset(&v51, 0, sizeof(v51));
  if ( *(_DWORD *)(v1 + 128) == 2 )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v4 = *(_BYTE *)(v1 + 56);
    v7 = *(_QWORD *)(v6 + 536);
  }
  else
  {
    v6 = *(_QWORD *)(v1 + 24);
    v7 = *(_QWORD *)(v1 + 136);
  }
  *(_BYTE *)(a1 + 136) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
  ++*(_DWORD *)(v6 + 4);
  ++*(_DWORD *)(v6 + 544);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = -1LL << (LockHandle.OldIrql + 1);
      v28 = ~(unsigned __int16)v8;
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  LOBYTE(v8) = 1;
  CcApplyLowIoPriorityToThread(v7, v8, v6);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 832), &v51);
  if ( !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v7) )
    v2 = 1;
  KxReleaseQueuedSpinLock(&v51);
  v10 = v51.OldIrql;
  if ( KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v51.OldIrql <= 0xFu && v30 >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (v51.OldIrql + 1));
      v29 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  __writecr8(v10);
  if ( v2 )
    CcApplyLowIoPriorityToThread(v7, 0LL, v6);
  v11 = 0LL;
  *(_DWORD *)(a1 + 140) = 0;
  v12 = *(_QWORD *)(v6 + 216);
  if ( (*(_DWORD *)(v6 + 156) & 1) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, bool, __int64))(v12 + 8))(
            *(_QWORD *)(v6 + 224),
            *(_BYTE *)(a1 + 139) == 0,
            a1 + 140);
  }
  else
  {
    LOBYTE(v11) = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))v12)(*(_QWORD *)(v6 + 224), v11);
  }
  v14 = v13;
  v15 = *(_BYTE *)(a1 + 140) & 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( v13 )
    {
LABEL_13:
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 288));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
      if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
        *(_BYTE *)(a1 + 136) = 1;
      v16 = *(_QWORD *)(v6 + 168);
      if ( v16 )
      {
        if ( CcEnablePerVolumeLazyWriter )
          v24 = *(_DWORD *)(*(_QWORD *)(v6 + 600) + 912LL);
        else
          v24 = *(_DWORD *)(v7 + 976);
        v17 = *(_DWORD *)(v16 + 8);
        *(_DWORD *)(v16 + 4) = v17;
        if ( v17 > v24 )
        {
          *(_DWORD *)(v16 + 4) = v24;
          v17 = v24;
        }
      }
      else
      {
        v17 = *(_DWORD *)(v6 + 200);
      }
      v18 = (unsigned int *)(a1 + 244);
      *(_DWORD *)(a1 + 244) = v17;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
      KxReleaseQueuedSpinLock(&LockHandle);
      v19 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v29 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      __writecr8(v19);
      ExReleaseFastMutex((PFAST_MUTEX)(v6 + 288));
      if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 )
      {
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(v6 + 248) + 112LL);
        *(_QWORD *)(a1 + 88) = a1 + 80;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 512) + 196LL), *v18);
      if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 512) + 200LL), *v18);
      v20 = *(_QWORD *)(v6 + 512);
      *(_QWORD *)(v20 + 288) += *(unsigned int *)(v20 + 196);
      v21 = *(_QWORD *)(v20 + 296);
      if ( v21 <= *(unsigned int *)(*(_QWORD *)(v6 + 512) + 196LL) )
        v21 = *(unsigned int *)(*(_QWORD *)(v6 + 512) + 196LL);
      ++*(_QWORD *)(v20 + 304);
      *(_QWORD *)(v20 + 296) = v21;
      *(_QWORD *)(v20 + 312) += *(unsigned int *)(*(_QWORD *)(v6 + 512) + 200LL);
      v22 = *(_QWORD *)(v20 + 320);
      if ( v22 <= *(unsigned int *)(*(_QWORD *)(v6 + 512) + 200LL) )
        v22 = *(unsigned int *)(*(_QWORD *)(v6 + 512) + 200LL);
      ++*(_QWORD *)(v20 + 328);
      *(_QWORD *)(v20 + 320) = v22;
      return 0LL;
    }
    CcApplyLowIoPriorityToThread(v7, 0LL, v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
    *(_DWORD *)(v6 + 152) &= ~0x20u;
    if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
      CcCancelMmWaitForUninitializeCacheMap(v6);
    CcDecrementOpenCount(v6);
    KxReleaseQueuedSpinLock(&LockHandle);
    v34 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v29 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(v34);
    *v52 = -1073741740;
    if ( v4 )
      KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
    return 1LL;
  }
  else
  {
    if ( v13 && v15 )
      goto LABEL_13;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
    CcDecrementOpenCount(v6);
    KxReleaseQueuedSpinLock(&LockHandle);
    v39 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v29 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    __writecr8(v39);
    *v52 = -1073741740;
    if ( v14 && !v15 )
    {
      v44 = *(_QWORD *)(v6 + 216);
      v45 = *(_QWORD *)(v6 + 224);
      if ( (*(_DWORD *)(v6 + 156) & 1) != 0 )
        (*(void (__fastcall **)(__int64))(v44 + 16))(v45);
      else
        (*(void (__fastcall **)(__int64))(v44 + 8))(v45);
    }
    return 2LL;
  }
}
