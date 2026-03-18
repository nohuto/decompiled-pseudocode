/*
 * XREFs of PspIumFreePhysicalPages @ 0x1405E281C
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     MmFreeSecureKernelPages @ 0x1405B1D98 (MmFreeSecureKernelPages.c)
 *     PspIumFreePartitionPages @ 0x1405E2630 (PspIumFreePartitionPages.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1, int a2, ULONG_PTR a3)
{
  KIRQL v5; // si
  PVOID v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v13[2]; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v13[0] = a3;
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
  if ( *((_DWORD *)v6 + 10) )
  {
    if ( a1 )
      PspIumFreePartitionPages(
        a1,
        (*((_DWORD *)v6 + 10) >> 12) + ((*((_DWORD *)v6 + 10) & 0xFFF) != 0),
        (ULONG_PTR *)v6 + 6);
    else
      MmFreeSecureKernelPages((PMDL)v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock(&PspIumFreeMappingLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
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
    }
    __writecr8(v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    PspIumFreePartitionPages(a1, 1, v13);
  else
    MmFreeSecureKernelPages(&MemoryDescriptorList, 0);
}
