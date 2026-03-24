/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 *     MiBuildMappedCluster @ 0x140255930 (MiBuildMappedCluster.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiFlushCacheForAttributeChange @ 0x140283EC8 (MiFlushCacheForAttributeChange.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402ACA70 (MiDecrementAndInsertStandbyPages.c)
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
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiFlushHyperSpace @ 0x14032BF00 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 *v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  _QWORD *MmInternal; // rsi
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // r9
  struct _KPRCB *v12; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v3 = (unsigned __int8)a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = 0;
  v7 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v7 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v6 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  if ( (int)a3 >= 0 )
  {
    result = ZeroPte;
    *v5 = ZeroPte;
  }
  else
  {
    v9 = ZeroPte;
    result = MiPteInShadowRange(v5, a2);
    if ( !(_DWORD)result )
    {
LABEL_5:
      *v5 = v9;
      goto LABEL_6;
    }
    if ( !(unsigned int)MiPteHasShadow(a1, a2, a3, v11) )
    {
      result = (__int64)KeGetCurrentThread();
      a1 = *(_QWORD *)(result + 184);
      if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      {
        result = 0x8000000000000000uLL;
        v9 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_5;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v9 = ZeroPte | 0x8000000000000000uLL;
    *v5 = v9;
    result = MiWritePteShadow(v5, v9);
  }
LABEL_6:
  if ( !MmInternal )
  {
    if ( v6 == 64 )
    {
      MiFlushHyperSpace(a1, a2, a3);
      v6 = 0;
    }
    result = v7 | v6;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( (_BYTE)v3 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          SchedulerAssist = v12->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(v12);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
