/*
 * XREFs of MiArePageContentsZero @ 0x14054EB08
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCreateSharedZeroPages @ 0x1402410E0 (MiCreateSharedZeroPages.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x1402843C0 (MiLargePageFreeToZero.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402995B0 (MiUnlinkNodeLargePageHelper.c)
 *     MiSlistGetFreePage @ 0x1402EC520 (MiSlistGetFreePage.c)
 *     MiCreateSystemPageTable @ 0x140356770 (MiCreateSystemPageTable.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x140402380 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x14054F0B0 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  __int64 v8; // r9
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  __int64 result; // rax

  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( KeGetCurrentPrcb()->HyperPte )
  {
    v7 = *(unsigned __int8 *)(v4 + 34) >> 6;
    if ( v7 == 3 )
    {
      a2 = 0LL;
    }
    else if ( v7 != 1 && a2 > 0x10 )
    {
      a2 = 16LL;
    }
    while ( a2 )
    {
      if ( (*(_BYTE *)(v4 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v4) )
      {
        v9 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000, v8);
        if ( KeCheckForZeroPage(v9) )
          MiPageNotZero((ULONG_PTR)v9, v3);
        LOBYTE(v10) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v9, v10, 0LL);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_2;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
