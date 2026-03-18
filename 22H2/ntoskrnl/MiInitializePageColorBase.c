/*
 * XREFs of MiInitializePageColorBase @ 0x1402E1690
 * Callers:
 *     MiInitializeColorBase @ 0x140211FB4 (MiInitializeColorBase.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiGetPageForHeader @ 0x14021A4F4 (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B8F0 (MiAllocateMdlPagesByLists.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026A260 (MiResolvePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403ACF4C (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5488 (MiInitializeNewUltraHugeContext.c)
 *     MiPruneStandbyPages @ 0x14046C950 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiGetExtendedStandbyPage @ 0x140650720 (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetUltraMdlContext @ 0x140661A3C (MiGetUltraMdlContext.c)
 *     MiReplenishUltraPageTables @ 0x140661BEC (MiReplenishUltraPageTables.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140663FF4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiGetClusterPage @ 0x14066A064 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407063D4 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiCombineIdenticalPages @ 0x1407EBA94 (MiCombineIdenticalPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x140839588 (MiCreateZeroThreadContext.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 *     MmRelocatePfnList @ 0x140A3C9F8 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A4609C (MiInitializeScrubPacket.c)
 *     MiFillPerSessionProtos @ 0x140A4A01C (MiFillPerSessionProtos.c)
 *     MmInitializeProcessor @ 0x140A898EC (MmInitializeProcessor.c)
 *     MxRelocatePageTables @ 0x140B5B0A0 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  int NodeShiftedColor; // edx
  unsigned __int8 result; // al

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140C65B8D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C65B8E) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 184) & 7, result < 2u) )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    result = (_BYTE)CurrentPrcb + 80;
    *(_QWORD *)a3 = &CurrentPrcb->PageColor;
  }
  return result;
}
