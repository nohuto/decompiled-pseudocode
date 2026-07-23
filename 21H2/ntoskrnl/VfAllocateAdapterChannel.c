/*
 * XREFs of VfAllocateAdapterChannel @ 0x1409CB5C0
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
 *     ViAllocateMapRegisterFile @ 0x1409CE5C4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409CF3C4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  char *v6; // rdi
  __int64 AdapterInformationInternal; // rbx
  char *v11; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned __int64 v17; // rsi
  char **v18; // rax
  void **v19; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD, void *, __int64); // [rsp+30h] [rbp-38h]

  v6 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, _QWORD, void *, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v11 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v6 = v11;
    if ( !v11 )
      return 3221225626LL;
    memset(v11, 0, 0x98uLL);
    *(_QWORD *)v6 = a5;
    *((_QWORD *)v6 + 1) = a4;
    *((_QWORD *)v6 + 7) = AdapterInformationInternal;
    *((_DWORD *)v6 + 12) = a3;
    if ( !*(_BYTE *)(AdapterInformationInternal + 33) && *(_DWORD *)(AdapterInformationInternal + 192) < 3u )
      *((_QWORD *)v6 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    a4 = &ViAdapterCallback;
    v13 = (__int64)v6;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    v14 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v6 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
  }
  else
  {
    v13 = a5;
    v14 = 144LL;
  }
  v15 = RealDmaOperation(a1, a2, a3, a4, v13);
  v16 = v15;
  if ( AdapterInformationInternal && v15 && ViIsActiveChannelWcb(AdapterInformationInternal, (__int64)v6) )
  {
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
    v18 = (char **)*((_QWORD *)v6 + 9);
    v19 = (void **)*((_QWORD *)v6 + 10);
    if ( v18[1] != v6 + 72 || *v19 != v6 + 72 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (char *)v19;
    KxReleaseSpinLock((PKSPIN_LOCK)v14);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v6 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v6);
  }
  return v16;
}
