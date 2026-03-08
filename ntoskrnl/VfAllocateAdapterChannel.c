/*
 * XREFs of VfAllocateAdapterChannel @ 0x140AC1B90
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ViIsActiveChannelWcb @ 0x1405CC650 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x140AC1180 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC1290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140AC14EC (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140AC16AC (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(int a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  char *v6; // rdi
  __int64 AdapterInformationInternal; // rbx
  char *v11; // rax
  bool v13; // zf
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 RealDmaAdapter; // rax
  unsigned int v17; // eax
  unsigned int v18; // r15d
  unsigned __int64 v19; // rbp
  char **v20; // rax
  void **v21; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax

  v6 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v11 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v6 = v11;
    if ( !v11 )
      return 3221225626LL;
    memset(v11, 0, 0x98uLL);
    v13 = ViDoubleBufferDma == 0;
    *(_QWORD *)v6 = a5;
    *((_QWORD *)v6 + 1) = a4;
    *((_QWORD *)v6 + 7) = AdapterInformationInternal;
    *((_DWORD *)v6 + 12) = a3;
    if ( !v13 && !*(_BYTE *)(AdapterInformationInternal + 73) && *(_DWORD *)(AdapterInformationInternal + 224) < 3u )
      *((_QWORD *)v6 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 64) )
      *(_QWORD *)(AdapterInformationInternal + 64) = a2;
    a4 = &ViAdapterCallback;
    v14 = (__int64)v6;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    v15 = AdapterInformationInternal + 176;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 160),
      (PLIST_ENTRY)(v6 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 176));
  }
  else
  {
    v14 = a5;
    v15 = 176LL;
  }
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void *, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 32LL))(
          RealDmaAdapter,
          a2,
          a3,
          a4,
          v14);
  v18 = v17;
  if ( AdapterInformationInternal && v17 && ViIsActiveChannelWcb(AdapterInformationInternal, (__int64)v6) )
  {
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15);
    v20 = (char **)*((_QWORD *)v6 + 9);
    v21 = (void **)*((_QWORD *)v6 + 10);
    if ( v20[1] != v6 + 72 || *v21 != v6 + 72 )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (char *)v21;
    KxReleaseSpinLock((volatile signed __int64 *)v15);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v13 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v19);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v6 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v6);
  }
  return v18;
}
