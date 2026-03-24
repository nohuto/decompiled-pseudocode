/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1402B2140
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 *     MiBuildMappedCluster @ 0x140255930 (MiBuildMappedCluster.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiFlushCacheForAttributeChange @ 0x140283EC8 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiClearContainingMapping @ 0x1402EA2CC (MiClearContainingMapping.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140301240 (MiReadWriteAnyLevelShadowPte.c)
 *     MiCopySinglePage @ 0x14030C314 (MiCopySinglePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140332EB8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiCreateSystemPageTable @ 0x140356770 (MiCreateSystemPageTable.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     MiInitializeImageHeaderPage @ 0x1403590BC (MiInitializeImageHeaderPage.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConfirmPageIsZero @ 0x1403698E0 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038576C (MiMirrorOmitPagesFromCopy.c)
 *     MiComputePageHash @ 0x140389A90 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14038C960 (MiGetFileHashPage.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A3FA8 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiUpdateSystemPdes @ 0x14052C920 (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x1405417DC (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x14055A5E0 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x14055C6A8 (MiMakeProtoTransition.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3, __int64 a4)
{
  int v5; // r8d
  int v7; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *SchedulerAssist; // r9

  v5 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000000u;
LABEL_19:
      v5 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v5 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000, a4);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal
    || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
        v13 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        MmInternal[1543] = (unsigned __int64)v13,
        !UltraMapping) )
  {
    UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v13 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  v14 = MiPteInShadowRange(v13, 0xFFFFF68000000000uLL);
  if ( a3 >= 0 )
  {
    if ( !v14 )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      if ( HIBYTE(word_140C4E008) || (ValidPte & 1) == 0 )
        goto LABEL_29;
LABEL_28:
      ValidPte |= 0x8000000000000000uLL;
LABEL_29:
      *v13 = ValidPte;
      MiWritePteShadow(v13, ValidPte);
      return UltraMapping;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_15;
    }
LABEL_40:
    ValidPte |= 0x8000000000000000uLL;
    goto LABEL_15;
  }
  if ( v14 )
  {
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      if ( HIBYTE(word_140C4E008) || (ValidPte & 1) == 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
      || (ValidPte & 1) == 0 )
    {
      goto LABEL_15;
    }
    goto LABEL_40;
  }
LABEL_15:
  *v13 = ValidPte;
  return UltraMapping;
}
