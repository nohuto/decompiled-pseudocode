/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140214A54
 * Callers:
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiBuildMappedCluster @ 0x140213100 (MiBuildMappedCluster.c)
 *     MiConfirmPageIsZero @ 0x140213880 (MiConfirmPageIsZero.c)
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiFlushCacheForAttributeChange @ 0x140214754 (MiFlushCacheForAttributeChange.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiWriteRepurposedTransitionPte @ 0x14029EC64 (MiWriteRepurposedTransitionPte.c)
 *     MiCopySinglePage @ 0x1402A2358 (MiCopySinglePage.c)
 *     MiReplicatePteChangeToProcess @ 0x1402A470C (MiReplicatePteChangeToProcess.c)
 *     MiClearContainingMapping @ 0x1402A5720 (MiClearContainingMapping.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     MiMakeProtoTransition @ 0x1402C59B0 (MiMakeProtoTransition.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeImageHeaderPage @ 0x1402F8ED0 (MiInitializeImageHeaderPage.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403BA720 (MiReadWriteAnyLevelShadowPte.c)
 *     MmStealTopLevelPage @ 0x1403D1884 (MmStealTopLevelPage.c)
 *     MiComputePageHash @ 0x140466BDC (MiComputePageHash.c)
 *     MiUpdateSystemPdes @ 0x1406170F0 (MiUpdateSystemPdes.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140624E58 (MiMirrorOmitPagesFromCopy.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiPersistPage @ 0x14063C604 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = a2;
  result = ZeroPte;
  *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
  *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( a2 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  return result;
}
