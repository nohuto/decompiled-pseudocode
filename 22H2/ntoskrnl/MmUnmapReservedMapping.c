/*
 * XREFs of MmUnmapReservedMapping @ 0x140531BD0
 * Callers:
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     sub_1403E9C00 @ 0x1403E9C00 (sub_1403E9C00.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C76D0 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C7DCC (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C84AC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x14050F080 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x14050F9A8 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x140583D0C (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140948CDC (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x1409ADD1C (PnprMapPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140530C30 (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // r14
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 i; // rbx

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140C4EBC0);
  v8 = qword_140C4EBC8;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v3, v4, 2uLL);
      v11 = *(_QWORD *)(v8 + 24);
      if ( v9 >= v11 )
        break;
      v8 = *(_QWORD *)v8;
    }
    if ( v9 < v11 + (*(_QWORD *)(v8 + 32) << 12) )
      break;
    v8 = *(_QWORD *)(v8 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EBC0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
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
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v17 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
    v17 -= (v3 - *(_QWORD *)(v8 + 24)) >> 12;
  else
    v3 = *(_QWORD *)(v8 + 24);
  if ( BugCheckParameter4 > v17 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, *(_QWORD *)(v8 + 32), BugCheckParameter4);
  MiUnmapMdlCommon(v3, 0LL, v4, (__int64)MemoryDescriptorList, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v18 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v18 + 8LL * *(_QWORD *)(v8 + 32);
    for ( i = v18 + 8 * BugCheckParameter4; i < v19; i += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(i) )
        KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
