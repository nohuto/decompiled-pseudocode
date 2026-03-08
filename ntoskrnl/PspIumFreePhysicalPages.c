/*
 * XREFs of PspIumFreePhysicalPages @ 0x1405A3C30
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspIumFreePartitionPages @ 0x1405A3A2C (PspIumFreePartitionPages.c)
 *     MmUnmapReservedMapping @ 0x14061C4D0 (MmUnmapReservedMapping.c)
 *     MmFreeSecureKernelPages @ 0x1406558DC (MmFreeSecureKernelPages.c)
 */

__int64 __fastcall PspIumFreePhysicalPages(__int64 a1, unsigned int a2, __int64 a3)
{
  KIRQL v5; // si
  _DWORD *v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v14 = a3;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  v5 = 0;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.ByteCount = 4096;
  v6 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v6 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v6 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( v6[10] )
  {
    if ( a1 )
      PspIumFreePartitionPages(a1, (v6[10] >> 12) + ((v6[10] & 0xFFF) != 0), (__int64)(v6 + 12));
    else
      MmFreeSecureKernelPages(v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock((volatile signed __int64 *)&PspIumFreeMappingLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    return PspIumFreePartitionPages(a1, 1, (__int64)&v14);
  else
    return MmFreeSecureKernelPages(&MemoryDescriptorList, 0LL);
}
