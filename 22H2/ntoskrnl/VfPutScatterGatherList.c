/*
 * XREFs of VfPutScatterGatherList @ 0x1409CCF40
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409C9E10 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409C9FDC (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x1409CA0FC (VF_ASSERT_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x1409CE220 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3D4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE758 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CEA60 (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  __int64 AdapterInformationInternal; // rbp
  _DWORD *SchedulerAssist; // r8
  _QWORD *v8; // rdi
  KIRQL v9; // al
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rsi
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
  void (__fastcall *RealDmaOperation)(__int64, __int64, _DWORD *); // [rsp+78h] [rbp+20h]

  RealDmaOperation = (void (__fastcall *)(__int64, __int64, _DWORD *))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v8 = (_QWORD *)(AdapterInformationInternal + 56), (_QWORD *)*v8 == v8) )
  {
LABEL_15:
    LOBYTE(SchedulerAssist) = a3;
    RealDmaOperation(a1, a2, SchedulerAssist);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    v10 = (_QWORD *)*v8;
    v11 = v9;
    while ( 1 )
    {
      v12 = v10 - 9;
      if ( v8 == v12 + 9 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        goto LABEL_15;
      }
      if ( v12[8] == a2 )
        break;
      v10 = (_QWORD *)v12[9];
    }
    v17 = *(_DWORD *)a2;
    v18 = v12[9];
    v19 = (_QWORD *)v12[10];
    if ( *(_QWORD **)(v18 + 8) != v12 + 9 || (_QWORD *)*v19 != v12 + 9 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v20 = v22->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v23 & v20[5]) == 0;
          v20[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
    }
    __writecr8(v11);
    v24 = v12[12];
    if ( *(_QWORD *)(a2 + 8) == -559026163LL && v24 )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v24 + 48);
    LOBYTE(v20) = a3;
    RealDmaOperation(a1, a2, v20);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v17);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v12[12], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v12);
  }
}
