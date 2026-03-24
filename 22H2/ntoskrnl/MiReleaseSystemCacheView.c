/*
 * XREFs of MiReleaseSystemCacheView @ 0x14029037C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C8470 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x140290314 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x140292920 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x140293260 (MiGetPteLink.c)
 *     MiDecrementSystemCacheViewCount @ 0x140294070 (MiDecrementSystemCacheViewCount.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiSetSystemCacheReverseMap @ 0x14030A824 (MiSetSystemCacheReverseMap.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     RemoveListEntryPte @ 0x140316F78 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6E0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r15
  __int64 v4; // r13
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  void *SystemCacheReverseMap; // rsi
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  unsigned __int8 v26[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v27; // [rsp+30h] [rbp-41h]
  __int64 v28; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v30[8]; // [rsp+58h] [rbp-19h] BYREF

  v26[0] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v30, 0, sizeof(v30));
  v2 = 0LL;
  v3 = 0LL;
  v28 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E648
                 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v27 = v4;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E3A8, &LockHandle);
  if ( !(unsigned __int8)MiDecrementSystemCacheViewCount((__int64)(a1 << 25) >> 16) )
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) >= v8 )
      goto LABEL_3;
    while ( 1 )
    {
      if ( v7 != a1 )
      {
        RemoveListEntryPte(v4 + 1784, v7);
        if ( MiGetPteLink(*(_QWORD *)(v7 + 24)) != 1 )
        {
          v10 = ZeroPte;
          v11 = 0;
          if ( !(unsigned int)MiPteInShadowRange(v7 + 24, v9) )
          {
LABEL_10:
            *(_QWORD *)(v7 + 24) = v10;
            if ( v11 )
              MiWritePteShadow(v7 + 24, v10);
            v4 = v27;
            v8 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow(v13, v12, v14, v15) )
          {
            v11 = 1;
            if ( HIBYTE(word_140C4E008) )
              goto LABEL_10;
            v20 = (ZeroPte & 1) == 0;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
              goto LABEL_10;
            v20 = (ZeroPte & 1) == 0;
          }
          if ( !v20 )
            v10 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_10;
        }
        v30[v2] = v7;
        v2 = (unsigned int)(v2 + 1);
      }
LABEL_13:
      v7 += 512LL;
      if ( v7 >= v8 )
        goto LABEL_3;
    }
  }
  InsertTailListPte(v4 + 1784, a1);
LABEL_3:
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
        v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v24 = v30;
      v25 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v24++);
        --v25;
      }
      while ( v25 );
    }
    v16 = v3 << 25;
    v17 = (__int64)(v16 - v28) >> 16;
    v18 = MiLockWorkingSetOptimal(v4 + 7232, a1, v26, SchedulerAssist);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v17);
    MiSetSystemCacheReverseMap(v17, 0LL);
    MiUnlockPageTableInternal(v4 + 7232, v18);
    MiUnlockWorkingSetShared(v4 + 7232, v26[0]);
    MiReturnSystemVa(v17, (__int64)(v16 - v28 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
