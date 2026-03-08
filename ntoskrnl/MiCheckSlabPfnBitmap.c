/*
 * XREFs of MiCheckSlabPfnBitmap @ 0x1402B7400
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140287110 (MiIsPageEligibleForProtectedStandby.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiBetterDriverPageNeeded @ 0x1402E93C8 (MiBetterDriverPageNeeded.c)
 *     MiPurgeSlabEntries @ 0x140300024 (MiPurgeSlabEntries.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiStandbyPageContentsIntact @ 0x14034B200 (MiStandbyPageContentsIntact.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiUpdatePageAttributeStamp @ 0x14036A854 (MiUpdatePageAttributeStamp.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140370D54 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x140620DF0 (MiFreeSmallPageFromMdl.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140642570 (MiInitializeBootShadowStackPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140642840 (MiKernelShadowStackIdealForCaching.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiCheckContiguityTradeEligible @ 0x140646880 (MiCheckContiguityTradeEligible.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiIsFreeSlabPage @ 0x140654AC8 (MiIsFreeSlabPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckSlabPfnBitmap(__int64 a1, __int64 a2, int a3)
{
  const signed __int64 **v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  const signed __int64 *v11; // rdx
  signed __int64 v12; // rbx
  const signed __int64 *v13; // r9
  const signed __int64 *v14; // r11
  bool v15; // zf
  const signed __int64 *v16; // r9

  if ( !byte_140C6EE66 )
    return 0LL;
  v4 = (const signed __int64 **)&unk_140C6EFF8;
  if ( !a3 )
    v4 = (const signed __int64 **)&unk_140C6EFE8;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = v5 >> 9;
  if ( a2 == 1 )
    return (char)_bittest64(v4[1], v6);
  v9 = (v5 + a2 - 1) >> 9;
  v10 = v9 - v6 + 1;
  if ( v6 >= (unsigned __int64)*v4 )
    return 1LL;
  if ( v10 <= 1 )
  {
    if ( v9 == v6 )
      return (char)_bittest64(&v4[1][v6 >> 6], v6 & 0x3F);
    return 1LL;
  }
  if ( (unsigned __int64)*v4 - v6 < v10 )
    return 1LL;
  v11 = v4[1];
  v12 = v11[v6 >> 6];
  v13 = &v11[v6 >> 6];
  v14 = &v11[v9 >> 6];
  if ( v13 == v14 )
  {
    v15 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << v6)) == 0;
  }
  else
  {
    if ( (v12 & (-1LL << v6)) != 0 )
      return 1LL;
    v16 = v13 + 1;
    if ( v16 != v14 )
    {
      while ( !*v16 )
      {
        if ( ++v16 == v14 )
          goto LABEL_20;
      }
      return 1LL;
    }
LABEL_20:
    v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v9) & *v16) == 0;
  }
  return !v15;
}
