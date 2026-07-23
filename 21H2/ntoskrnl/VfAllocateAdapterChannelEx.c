/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x1409CB810
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ViIsActiveChannelWcb @ 0x1405A140C (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x1409CABC0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CACD0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409CAF2C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CAFCC (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  void *v8; // rsi
  int v12; // r12d
  __int64 v13; // rbx
  __int64 AdapterInformationInternal; // rdi
  PVOID v15; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *); // rax
  unsigned int v20; // ebp
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf

  v8 = a6;
  v12 = a1;
  v13 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v13 = (__int64)v15;
    if ( !v15 )
      return 3221225626LL;
    memset(v15, 0, 0x98uLL);
    v17 = a7;
    *(_QWORD *)v13 = a7;
    *(_QWORD *)(v13 + 8) = a6;
    *(_QWORD *)(v13 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v13 + 48) = a4;
    *(_QWORD *)(v13 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    if ( a6 )
      v17 = v13;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    v18 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v13 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
    v8 = &ViAdapterCallback;
    if ( !a6 )
      v8 = 0LL;
  }
  else
  {
    v17 = a7;
    v18 = 144LL;
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *))ViGetRealDmaOperation(v12);
  v20 = RealDmaOperation(a1, a2, a3, a4, a5, v8, v17, a8);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v13) )
  {
    if ( v20 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18);
      v22 = *(_QWORD *)(v13 + 72);
      v23 = *(_QWORD **)(v13 + 80);
      if ( *(_QWORD *)(v22 + 8) != v13 + 72 || *v23 != v13 + 72 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      KxReleaseSpinLock((PKSPIN_LOCK)v18);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v21);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v13);
    }
    else if ( !v8 )
    {
      *(_DWORD *)(v13 + 52) = 1;
      *(_QWORD *)(v13 + 88) = *a8;
    }
  }
  return v20;
}
