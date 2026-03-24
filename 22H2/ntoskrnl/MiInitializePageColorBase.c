/*
 * XREFs of MiInitializePageColorBase @ 0x14023EBF0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402100E0 (MiResolvePrivateZeroFault.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiInitializeColorBase @ 0x14027DAF8 (MiInitializeColorBase.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiGetPageForHeader @ 0x14033763C (MiGetPageForHeader.c)
 *     MiGetPoolPages @ 0x14033DA1C (MiGetPoolPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F4EF0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053424C (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiProcessVaContiguityInformation @ 0x140552200 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x1405558B0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A078 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D8818 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBEA0 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140A56734 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  unsigned int *result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  int NodeShiftedColor; // edx

  result = (unsigned int *)a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140C4DE8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C4DE8D) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
