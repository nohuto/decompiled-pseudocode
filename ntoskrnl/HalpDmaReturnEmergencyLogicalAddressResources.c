/*
 * XREFs of HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404FE8AC
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x1404549F0 (HalPutScatterGatherListDmarThin.c)
 *     HalpDmaFreeLa @ 0x1404FDD64 (HalpDmaFreeLa.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140511AA4 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaReturnEmergencyLogicalAddressResources(__int64 a1)
{
  volatile signed __int64 *v1; // r14
  __int64 v3; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  char v8; // bp
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  int v15; // ecx

  v1 = (volatile signed __int64 *)(a1 + 568);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  v5 = (_QWORD *)(a1 + 576);
  v6 = v4;
  v7 = *(__int64 **)(a1 + 576);
  if ( v7 == (__int64 *)(a1 + 576) )
  {
    v8 = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 576);
    v8 = 0;
    v9 = *v7;
    if ( *(_QWORD **)(v3 + 8) != v5 || *(_QWORD *)(v9 + 8) != v3 )
      __fastfail(3u);
    *v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = -1LL << ((unsigned __int8)v6 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)v11;
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( !v8 )
  {
    v15 = *(_DWORD *)(v3 + 16);
    if ( v15 )
    {
      if ( v15 != 1 )
        return result;
    }
    else if ( *(_DWORD *)(a1 + 624) == 3 )
    {
      LOBYTE(v11) = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) = *(_QWORD *)(a1 + 560);
      ++*(_DWORD *)(a1 + 624);
      return HalpAllocateDmaResourcesInternal(a1, v11, 0LL);
    }
    return HalpConstructScatterGatherListDmarThin(v3);
  }
  return result;
}
