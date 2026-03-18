/*
 * XREFs of MiSetPfnPteFrame @ 0x1402E15A0
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF78 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140285570 (MiUnlinkProtectedStandbyPfn.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E3F60 (MiInitializePfnForOtherProcess.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     KiInSwapProcesses @ 0x14034CA8C (KiInSwapProcesses.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1403528E8 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140396D44 (MiAddExpansionNonPagedPool.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628FEC (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x14062AC18 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140637074 (MiMakeLargePageTable.c)
 *     MiExtendPagingFileMaximum @ 0x140639044 (MiExtendPagingFileMaximum.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPageTable @ 0x140661F84 (MiBuildForkPageTable.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiSwitchToPfns @ 0x140B45978 (MiSwitchToPfns.c)
 *     MiAllocateDummyPage @ 0x140B48578 (MiAllocateDummyPage.c)
 *     MxMovePageTables @ 0x140B5B258 (MxMovePageTables.c)
 *     MxCreatePfn @ 0x140B5B93C (MxCreatePfn.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnPteFrame(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 & 0xFFFFFFFFFFLL | v2 & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v4 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 & 0xFFFFFFFFFFLL | result & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v4 != result );
  }
  return result;
}
