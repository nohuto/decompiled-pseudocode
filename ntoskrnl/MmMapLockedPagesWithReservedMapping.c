/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0
 * Callers:
 *     sub_1403EBEF0 @ 0x1403EBEF0 (sub_1403EBEF0.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x14050E9D8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14050F0B4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x1405607AC (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x1405A3C30 (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140A99C68 (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLegitimatePageForDriversToMap @ 0x14029F8D0 (MiLegitimatePageForDriversToMap.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // rbp
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  ULONG_PTR BugCheckParameter4; // rsi
  PMDL i; // rbx
  struct _MDL *Next; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140C68140);
  v10 = qword_140C68148;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( v10 )
  {
    v13 = *(_QWORD *)(v10 + 24);
    if ( v11 < v13 )
    {
      v10 = *(_QWORD *)v10;
    }
    else
    {
      if ( v11 < v13 + (*(_QWORD *)(v10 + 32) << 12) )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( !v10 )
    KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C68140);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  if ( (*(_DWORD *)(v10 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v15 = v7;
    v14 = *(_QWORD *)(v10 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v10 + 24)) >> 12);
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 32);
    MappingAddress = *(PVOID *)(v10 + 24);
    v15 = v14;
  }
  if ( v7 <= v14 )
  {
    v16 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( BugCheckParameter4 = v16 + 8 * v15; v16 < BugCheckParameter4; v16 += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(v16) )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, v16, BugCheckParameter4);
    }
    for ( i = MemoryDescriptorList + 1; ; i = (PMDL)((char *)i + 8) )
    {
      Next = i->Next;
      if ( i->Next <= (struct _MDL *)qword_140C65820
        && _bittest64((const signed __int64 *)(48LL * (_QWORD)Next - 0x21FFFFFFFFD8LL), 0x36u)
        && (int)MiLegitimatePageForDriversToMap(48LL * (_QWORD)Next - 0x220000000000LL) < 0 )
      {
        break;
      }
      if ( !--v7 )
        return (PVOID)MiMapMdlCommon(
                        (_DWORD)MemoryDescriptorList,
                        (unsigned int)((unsigned __int64)MappingAddress >> 9) & 0xFFFFFFF8,
                        0,
                        4,
                        CacheType);
    }
  }
  return 0LL;
}
