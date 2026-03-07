__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  int v4; // edi
  unsigned __int8 CurrentIrql; // dl
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v30[2]; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 v32; // [rsp+48h] [rbp-28h]
  __int128 v33; // [rsp+58h] [rbp-18h]
  unsigned __int64 v34; // [rsp+68h] [rbp-8h]
  __int64 v35; // [rsp+A0h] [rbp+30h] BYREF

  v1 = a1 + 1976;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 0LL;
  v30[1] = v30;
  v4 = 0;
  v30[0] = v30;
  LockHandle.LockQueue.Lock = qword_140C66D30;
  LockHandle.LockQueue.Next = 0LL;
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
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, qword_140C66D30);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)qword_140C66D30, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( !*(_BYTE *)(a1 + 17052) )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(qword_140C66D30, &LockHandle);
  }
  _InterlockedOr(v29, 0);
  MiRebalanceSystemCacheFreedViews(a1, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( *(_QWORD *)(v1 + 16) )
  {
    v6 = *(__int64 **)v1;
    v7 = **(_QWORD **)v1;
    if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *(_QWORD *)v1 = v7;
    *(_QWORD *)(v7 + 8) = v1;
    v34 = v6[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    v32 = 0LL;
    v33 = 0LL;
    v6[4] = v34;
    --*(_QWORD *)(v1 + 16);
LABEL_10:
    MiGetSystemCacheRegionsToFree(a1, v30);
    KxReleaseQueuedSpinLock(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v27 & v26[5]) == 0;
        v8 = (unsigned int)v27 & v26[5];
        v26[5] = v8;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(v9);
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v6 = MiConsumeSystemCachePde(a1);
  if ( v6 )
    goto LABEL_10;
  v6 = MiConsumeSystemCacheTbFlushNeededView(a1, 0x400uLL);
  if ( v6 )
    goto LABEL_10;
  KxReleaseQueuedSpinLock(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v19 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(v13);
  v6 = MiExpandSystemCache((__int16 *)a1);
  if ( !v6 )
  {
    KeAcquireInStackQueuedSpinLock(qword_140C66D30, &LockHandle);
    v4 = 1;
    v6 = MiConsumeSystemCacheTbFlushNeededView(a1, 1uLL);
    goto LABEL_10;
  }
LABEL_12:
  v2 = v6[2];
LABEL_13:
  if ( v4 )
  {
    v28 = *(_QWORD *)(a1 + 200);
    v35 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v28, v8, 0LL, &v35) )
    {
      if ( v2 )
        MiReleaseSystemCacheView(0LL, v2);
      v2 = v35;
      MiReadyReservedView(v35);
    }
  }
  if ( (_QWORD *)v30[0] != v30 )
    MiReturnSystemCacheRegionsToKva(a1, v30);
  return v2;
}
