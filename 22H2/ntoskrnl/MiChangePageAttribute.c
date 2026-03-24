/*
 * XREFs of MiChangePageAttribute @ 0x140284864
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x14023B5B0 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeHardFaultPfn @ 0x14023DF10 (MiInitializeHardFaultPfn.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MiInitializeReadInProgressPfn @ 0x14027C5B0 (MiInitializeReadInProgressPfn.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 *     MiCopySinglePage @ 0x14030C314 (MiCopySinglePage.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140355540 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiFillCombinePage @ 0x14036A95C (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B5BD4 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x14054C5B4 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x140557F0C (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140283EA0 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140283EC8 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // si
  unsigned int v5; // r15d
  unsigned __int8 v7; // bl
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v12; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E708 == KeGetCurrentThread() )
    v7 = 17;
  else
    v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1);
    LOBYTE(v10) = *(_BYTE *)(a1 + 34);
    v4 = -5;
  }
  LOBYTE(v12) = (_BYTE)v5 << 6;
  LOBYTE(v10) = ((_BYTE)v5 << 6) | v10 & 0x3F;
  *(_BYTE *)(a1 + 34) = v10;
  if ( v8 != 3 && (v4 & 4) == 0 )
  {
    if ( (v4 & 2) != 0
      || (v9 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v24, 0),
          v12 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v9) & 0xF,
          v12 <= 2)
      && ((v9 & 1) != 0 || v12 < 2) )
    {
      LOBYTE(v12) = MiFlushEntireTbDueToAttributeChange(v9, 2LL, v10, SchedulerAssist);
    }
    if ( v8 == 1 )
    {
      ++dword_140C4DF08;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, v5, (__int64)SchedulerAssist);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v12) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v7 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && v7 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v18 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    LOBYTE(v12) = v7;
    __writecr8(v7);
  }
  return v12;
}
