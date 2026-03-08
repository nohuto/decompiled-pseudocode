/*
 * XREFs of MiReplenishSlabAllocator @ 0x1403496D8
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiReplenishSlabAllocatorWorker @ 0x14034A100 (MiReplenishSlabAllocatorWorker.c)
 *     MiInitialSlabPopulate @ 0x1403AFC60 (MiInitialSlabPopulate.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiAllocateSlabPageForMdl @ 0x140620D1C (MiAllocateSlabPageForMdl.c)
 *     MiFastReplenishWithAsync @ 0x1406542D8 (MiFastReplenishWithAsync.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x140349C90 (MiInsertSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 SlabEntry; // rsi
  unsigned int v6; // edi
  int v7; // r15d
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  struct _KPRCB *v10; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax

  v3 = a1[3];
  if ( a1[14] + a1[6] >= a2 )
    return 1LL;
  CurrentThread = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
  }
  SlabEntry = MiAllocateSlabEntry(a1, v3);
  if ( SlabEntry )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(SlabEntry + 140) & 2;
      if ( !(unsigned int)MiInsertSlabEntry(v3, a1, SlabEntry, 1LL) )
        break;
      *(_DWORD *)(SlabEntry + 140) |= 2u;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v17) = 4;
        else
          v17 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v17;
      }
      MiFreeSlabEntry(a1, SlabEntry);
      if ( KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      SlabEntry = MiAllocateSlabEntry(a1, v3);
      if ( !SlabEntry )
        goto LABEL_21;
    }
    if ( v7 )
      goto LABEL_16;
    v9 = 512LL;
    MiReturnCommit(v3, 512LL, v8);
    if ( (_UNKNOWN *)v3 != &MiSystemPartition )
      goto LABEL_15;
    v10 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v10->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_15;
    if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
    {
      do
      {
        v13 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v10->CachedResidentAvailable,
                CachedResidentAvailable + 512,
                CachedResidentAvailable);
        v12 = (_DWORD)CachedResidentAvailable == v13;
        LODWORD(CachedResidentAvailable) = v13;
        if ( v12 )
          goto LABEL_16;
      }
      while ( v13 != -1 && (unsigned __int64)(v13 + 512LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v10->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v9 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( v9 )
LABEL_15:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 17280), v9);
  }
  else
  {
LABEL_21:
    v6 = 0;
  }
LABEL_16:
  if ( CurrentThread )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
