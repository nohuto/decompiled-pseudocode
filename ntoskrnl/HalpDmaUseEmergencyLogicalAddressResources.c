/*
 * XREFs of HalpDmaUseEmergencyLogicalAddressResources @ 0x1404FEAEC
 * Callers:
 *     HalpConstructScatterGatherListDmarThin @ 0x140511AA4 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaUseEmergencyLogicalAddressResources(__int64 a1, _QWORD *a2, char a3)
{
  volatile signed __int64 *v3; // r14
  unsigned __int64 v7; // rdi
  char v8; // si
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v3 = (volatile signed __int64 *)(a1 + 568);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  if ( *(_BYTE *)(a1 + 592) )
  {
    v8 = 0;
    if ( a3 )
    {
      v9 = *(_QWORD **)(a1 + 584);
      if ( *v9 != a1 + 576 )
        __fastfail(3u);
      *a2 = a1 + 576;
      a2[1] = v9;
      *v9 = a2;
      *(_QWORD *)(a1 + 584) = a2;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 592) = 1;
    v8 = 1;
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v8;
}
