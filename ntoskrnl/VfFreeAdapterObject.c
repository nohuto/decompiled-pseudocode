/*
 * XREFs of VfFreeAdapterObject @ 0x140AC30E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC1290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeAdapterObject(int a1, unsigned int a2)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // rdx
  _QWORD *v14; // rcx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 216LL))(RealDmaAdapter, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 176));
    v8 = *(_QWORD **)(AdapterInformationInternal + 160);
    v9 = (__int64)(v8 - 9);
    if ( (_QWORD *)(AdapterInformationInternal + 160) != v8 )
    {
      while ( *(_DWORD *)(v9 + 52) != 1 )
      {
        v9 = *v8 - 72LL;
        v8 = (_QWORD *)*v8;
        if ( (_QWORD *)(AdapterInformationInternal + 160) == v8 )
          goto LABEL_6;
      }
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      if ( a2 == 3 )
      {
        *(_DWORD *)(v9 + 52) = 3;
      }
      else
      {
        v13 = *(_QWORD *)(v9 + 72);
        v14 = *(_QWORD **)(v9 + 80);
        if ( *(_QWORD *)(v13 + 8) != v9 + 72 || *v14 != v9 + 72 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v9 + 48));
        if ( *(_QWORD *)(v9 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v9);
      }
    }
LABEL_6:
    result = KxReleaseSpinLock((volatile signed __int64 *)(AdapterInformationInternal + 176));
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  return result;
}
