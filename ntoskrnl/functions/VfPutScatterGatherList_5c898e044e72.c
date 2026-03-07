void __fastcall VfPutScatterGatherList(int a1, __int64 a2, char a3)
{
  __int64 RealDmaAdapter; // r13
  __int64 AdapterInformationInternal; // rbp
  _DWORD *SchedulerAssist; // r8
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf
  int v17; // edi
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _DWORD *v20; // r8
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  int v23; // eax
  __int64 v24; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v9 = (_QWORD *)(AdapterInformationInternal + 88), (_QWORD *)*v9 == v9) )
  {
LABEL_14:
    LOBYTE(SchedulerAssist) = a3;
    (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(RealDmaAdapter + 8) + 96LL))(
      RealDmaAdapter,
      a2,
      SchedulerAssist);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    return;
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
  v11 = (_QWORD *)*v9;
  v12 = (_QWORD *)(*v9 - 72LL);
  if ( v9 == (_QWORD *)*v9 )
  {
LABEL_6:
    KxReleaseSpinLock((volatile signed __int64 *)(AdapterInformationInternal + 104));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
    goto LABEL_14;
  }
  while ( v12[8] != a2 )
  {
    v12 = (_QWORD *)(*v11 - 72LL);
    v11 = (_QWORD *)*v11;
    if ( v9 == v11 )
      goto LABEL_6;
  }
  v17 = *(_DWORD *)a2;
  v18 = v12[9];
  v19 = (_QWORD *)v12[10];
  if ( *(_QWORD **)(v18 + 8) != v12 + 9 || (_QWORD *)*v19 != v12 + 9 )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  KxReleaseSpinLock((volatile signed __int64 *)(AdapterInformationInternal + 104));
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v20 = v22->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v16 = (v23 & v20[5]) == 0;
      v20[5] &= v23;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
  }
  __writecr8(v10);
  v24 = v12[12];
  if ( *(_QWORD *)(a2 + 8) == -559026163LL && v24 )
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v24 + 48);
  LOBYTE(v20) = a3;
  (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(RealDmaAdapter + 8) + 96LL))(RealDmaAdapter, a2, v20);
  SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v17);
  DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  ViFlushDoubleBuffer(v12[12], a3);
  ViFreeMapRegisterFile(AdapterInformationInternal);
  ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v12);
}
