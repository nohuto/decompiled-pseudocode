/*
 * XREFs of MiReleasePageFileInfo @ 0x140330CC0
 * Callers:
 *     MiLockPageTablePage @ 0x140209DB0 (MiLockPageTablePage.c)
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x1402AD540 (MiOutSwapWorkingSetPte.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiStoreMarkLockedPagesModified @ 0x14030EFB0 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimSystemImagePages @ 0x1403174C0 (MiTrimSystemImagePages.c)
 *     MiUnlockStoreLockedPages @ 0x140318E70 (MiUnlockStoreLockedPages.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiInPageSingleKernelStack @ 0x1403561A0 (MiInPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140396E8C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A4CC4 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8FCC (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052D944 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x140543664 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1406BEA64 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1408D0820 (MiScanPagefileSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiStoreSetEvictPageFile @ 0x14031E52C (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140324CD4 (MiClearPageFileHash.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140330EC0 (MiCoalescePageFileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  volatile LONG *v8; // rcx
  int v9; // r12d
  KIRQL v10; // r15
  __int64 v11; // r13
  volatile LONG *v12; // rcx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v20; // [rsp+68h] [rbp+10h]

  v3 = a2;
  if ( qword_140C4DF40 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C4DF40;
  v4 = HIDWORD(v3);
  v5 = (a2 >> 1) & 1;
  v6 = (a2 >> 2) & 1;
  v20 = 0;
  v7 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 6944);
  v8 = (volatile LONG *)(v7 + 232);
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    v10 = 2;
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v8);
  }
  v11 = *(_QWORD *)(v7 + 112);
  if ( (_DWORD)v5 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 32), v4);
    ++*(_QWORD *)(v7 + 48);
  }
  if ( (_DWORD)v6 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v7, v4);
    if ( (*(_BYTE *)(v7 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v7, v4);
      goto LABEL_13;
    }
    _bittestandreset(*(signed __int32 **)(v11 + 16), v4);
    v13 = ++*(_QWORD *)(v7 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v7 + 120) )
      *(_DWORD *)(v7 + 120) = v4;
    ++*(_DWORD *)(v7 + 128);
    if ( v13 == 1 && (*(_BYTE *)(v7 + 206) & 1) != 0 )
      v20 = 1;
  }
  if ( ((_DWORD)v5 || !_bittest64(*(const signed __int64 **)(v11 + 32), v4))
    && ((_DWORD)v6 || !_bittest64(*(const signed __int64 **)(v11 + 16), v4)) )
  {
    MiCoalescePageFileBitmapsCache(v7, (unsigned int)v5, (unsigned int)v4);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v7 + 248) + 872LL),
      (*(_DWORD *)(*(_QWORD *)(v7 + 248) + 872LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_13:
  v12 = (volatile LONG *)(v7 + 232);
  if ( v9 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  if ( v20 == 1 )
    KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
}
