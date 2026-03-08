/*
 * XREFs of MiReleasePageFileInfo @ 0x14020B300
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140200008 (MiProcessWsInSwapFault.c)
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiInPageSingleKernelStack @ 0x1402A7A08 (MiInPageSingleKernelStack.c)
 *     MiTrimSystemImagePages @ 0x1402B0298 (MiTrimSystemImagePages.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A4834 (MmDbgMarkPfnModifiedWorker.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiStoreMarkLockedPagesModified @ 0x140465404 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x140637B1C (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MiUnlockStoreLockedPages @ 0x14065A830 (MiUnlockStoreLockedPages.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1407659CC (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 * Callees:
 *     MiUpdateReserveClusterInfo @ 0x14020B44C (MiUpdateReserveClusterInfo.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreSetEvictPageFile @ 0x14065A380 (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x1406635B0 (MiClearPageFileHash.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdi
  volatile LONG *v9; // rcx
  KIRQL v10; // bp
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v19; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v3 = a2;
  if ( qword_140C657C0 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C657C0;
  v4 = HIDWORD(v3);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 17056);
  v7 = (a2 >> 1) & 1;
  v8 = (a2 >> 2) & 1;
  v19 = a3 & 1;
  v9 = (volatile LONG *)(v6 + 232);
  if ( (a3 & 1) != 0 )
  {
    v10 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v9);
  }
  v11 = *(_QWORD *)(v6 + 112);
  v21 = v11;
  if ( (_DWORD)v7 )
  {
    *(_BYTE *)(*(_QWORD *)(v11 + 32) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    ++*(_QWORD *)(v6 + 48);
  }
  if ( (_DWORD)v8 )
  {
    if ( (a3 & 2) == 0 )
    {
      MiClearPageFileHash(v6, (unsigned int)v4);
      v11 = v21;
    }
    if ( (*(_BYTE *)(v6 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v6, (unsigned int)v4);
      goto LABEL_13;
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 16) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    v12 = ++*(_QWORD *)(v6 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v6 + 120) )
      *(_DWORD *)(v6 + 120) = v4;
    ++*(_DWORD *)(v6 + 128);
    if ( v12 == 1 && (*(_BYTE *)(v6 + 206) & 1) != 0 )
      v5 = 1;
  }
  if ( ((_DWORD)v7 || !_bittest64(*(const signed __int64 **)(v11 + 32), v4))
    && ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v11 + 16), v4)) )
  {
    MiCoalescePageFileBitmapsCache(v6, (unsigned int)v7, (unsigned int)v4);
    MiUpdateReserveClusterInfo(*(_QWORD *)(v6 + 248), 0LL, 0LL);
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 232));
  if ( !v19 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  if ( v5 )
    KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
}
