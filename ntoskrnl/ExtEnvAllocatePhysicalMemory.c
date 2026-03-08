/*
 * XREFs of ExtEnvAllocatePhysicalMemory @ 0x14051CE10
 * Callers:
 *     IvtAllocateContextTable @ 0x140528DA0 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x140529000 (IvtAllocateScalableModePasidTables.c)
 *     IvtExtendScalableModePasidTables @ 0x14052A0B4 (IvtExtendScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x14061BD50 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall ExtEnvAllocatePhysicalMemory(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        MEMORY_CACHING_TYPE CacheType,
        LARGE_INTEGER *a5,
        __int64 a6)
{
  PVOID *v6; // r15
  PHYSICAL_ADDRESS v8; // r10
  __int64 v9; // r13
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  char v14; // r8
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // r12
  LARGE_INTEGER v18; // rcx
  PVOID v19; // rax
  PVOID ContiguousMemorySpecifyCacheNode; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v28; // eax
  _DWORD *SchedulerAssist; // r8

  v6 = (PVOID *)a6;
  v8.QuadPart = a3;
  v9 = a2;
  *(_QWORD *)a6 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741637;
  v11 = a3 >> 12;
  if ( a3 >> 12 << 12 != a3 )
    return (unsigned int)-1073741637;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v13, v11);
  v14 = -1;
  v15 = -1;
  if ( !v12 )
    v15 = v13;
  v12 = !_BitScanForward64((unsigned __int64 *)&v16, v11);
  if ( !v12 )
    v14 = v16;
  if ( v15 != v14 || (unsigned int)CacheType > MmCached )
    return (unsigned int)-1073741637;
  v10 = 0;
  v17 = (unsigned int)(v9 + 4095) >> 12 << 12;
  if ( !HalpExtEnvAllocationPhase )
  {
    a6 = -1LL;
    v18.QuadPart = HalpAllocPhysicalMemory(HalpExtEnvLoaderBlock, &a6, (unsigned int)(v9 + 4095) >> 12, v8.LowPart);
    *a5 = v18;
    if ( v18.QuadPart )
    {
      v19 = HalMapIoSpace(v18, (unsigned int)v17, CacheType);
      *v6 = v19;
      if ( v19 )
        return v10;
    }
    goto LABEL_13;
  }
  if ( HalpExtEnvAllocationPhase != 1
    || (a6 = -1LL,
        ContiguousMemorySpecifyCacheNode = MmAllocateContiguousMemorySpecifyCacheNode(
                                             (unsigned int)(v9 + 4095) >> 12 << 12,
                                             0LL,
                                             (PHYSICAL_ADDRESS)-1LL,
                                             v8,
                                             CacheType,
                                             0x80000000),
        (*v6 = ContiguousMemorySpecifyCacheNode) == 0LL)
    || (*a5 = MmGetPhysicalAddress(ContiguousMemorySpecifyCacheNode),
        v22 = HalpMmAllocCtxAlloc((__int64)a5, 56LL),
        (v23 = (_QWORD *)v22) == 0LL) )
  {
LABEL_13:
    v10 = -1073741670;
    if ( *v6 && HalpExtEnvAllocationPhase == 1 )
      MmFreeContiguousMemory(*v6);
    return v10;
  }
  *(_OWORD *)v22 = 0LL;
  *(_OWORD *)(v22 + 16) = 0LL;
  *(_OWORD *)(v22 + 32) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  *(_QWORD *)(v22 + 16) = *v6;
  *(_QWORD *)(v22 + 32) = v9;
  *(_QWORD *)(v22 + 40) = v17;
  *(_DWORD *)(v22 + 48) = CacheType;
  v24 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v25 = (_QWORD *)qword_140C5FEA8;
  if ( *(__int64 **)qword_140C5FEA8 != &ExtEnvAllocationList )
    __fastfail(3u);
  *v23 = &ExtEnvAllocationList;
  v23[1] = v25;
  *v25 = v23;
  qword_140C5FEA8 = (__int64)v23;
  KxReleaseSpinLock((volatile signed __int64 *)&ExtEnvAllocationLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v24);
  return v10;
}
