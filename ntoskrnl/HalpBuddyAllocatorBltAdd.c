/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x14052FBC0
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140456A60 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14052F760 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1405301B8 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140530290 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpBuddyAllocatorBltAdd(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  _BitScanForward64(&v3, a1[7]);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 96) + 16LL * (unsigned int)(v3 - 12);
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *a1 = v6;
  a1[1] = (__int64)v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)(a2 + 104));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
