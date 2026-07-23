/*
 * XREFs of VfFreeAdapterObject @ 0x1409CCA00
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CACD0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CAFCC (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x1409CF3C4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // rdx
  _QWORD *v14; // rcx

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  result = RealDmaOperation(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 128); ; i = *(_QWORD *)(v9 + 72) )
    {
      v9 = i - 72;
      if ( AdapterInformationInternal + 128 == v9 + 72 )
        break;
      if ( *(_DWORD *)(v9 + 52) == 1 )
      {
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
        break;
      }
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
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
    }
    __writecr8(v7);
  }
  return result;
}
