/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140214870
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
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v4; // rbp
  int v5; // r8d
  int v7; // eax
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 result; // rax
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9

  LODWORD(v4) = 4;
  v5 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000000u;
LABEL_14:
      v5 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x220000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_14;
  }
  v5 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v4 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v4;
    }
    *a2 = CurrentIrql;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
  v11 = (__int64 *)(((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MmInternal[1543] = v11;
  *v11 = ValidPte;
  return result;
}
