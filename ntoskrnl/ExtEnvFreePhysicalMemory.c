/*
 * XREFs of ExtEnvFreePhysicalMemory @ 0x14051D17C
 * Callers:
 *     IvtAllocateContextTable @ 0x140528DA0 (IvtAllocateContextTable.c)
 *     IvtFreeScalableModePasidTables @ 0x14052A358 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14052D9F0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     HalpMmIsInsideHalVa @ 0x1405036B4 (HalpMmIsInsideHalVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExtEnvFreePhysicalMemory(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  KIRQL v7; // al
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 *v16; // rax
  bool v17; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 <= 1 )
  {
    v5 = a3;
    v17 = 0;
    if ( (int)HalpMmIsInsideHalVa((unsigned __int64)a2, &v17) >= 0 && !v17 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
      v8 = (__int64 *)ExtEnvAllocationList;
      v9 = v7;
      while ( v8 != &ExtEnvAllocationList )
      {
        if ( (void *)v8[2] == a2 && v8[4] == v5 && *((_DWORD *)v8 + 12) == a4 )
        {
          MmFreeContiguousMemory(a2);
          v15 = *v8;
          v16 = (__int64 *)v8[1];
          if ( *(__int64 **)(*v8 + 8) != v8 || (__int64 *)*v16 != v8 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          HalpMmAllocCtxFree(v15, (__int64)v8);
          break;
        }
        v8 = (__int64 *)*v8;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&ExtEnvAllocationLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
  }
}
