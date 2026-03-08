/*
 * XREFs of MiSetPfnPteFrame @ 0x14028A310
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E5F48 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14032F4F0 (MiUnlinkProtectedStandbyPfn.c)
 *     MiAssignNonPagedPoolPte @ 0x140345570 (MiAssignNonPagedPoolPte.c)
 *     MiInitializePfnForOtherProcess @ 0x140348804 (MiInitializePfnForOtherProcess.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140394B74 (MiAddExpansionNonPagedPool.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x14062878C (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiExtendPagingFileMaximum @ 0x140636BC4 (MiExtendPagingFileMaximum.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPageTable @ 0x14065F934 (MiBuildForkPageTable.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiSwitchToPfns @ 0x140B37268 (MiSwitchToPfns.c)
 *     MiAllocateDummyPage @ 0x140B39E68 (MiAllocateDummyPage.c)
 *     MxMovePageTables @ 0x140B4F948 (MxMovePageTables.c)
 *     MxCreatePfn @ 0x140B5002C (MxCreatePfn.c)
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
