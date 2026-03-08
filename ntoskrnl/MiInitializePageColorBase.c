/*
 * XREFs of MiInitializePageColorBase @ 0x14028B040
 * Callers:
 *     MiInitializeColorBase @ 0x14020FE2C (MiInitializeColorBase.c)
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403A796C (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiGetExtendedStandbyPage @ 0x14064E0CC (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetUltraMdlContext @ 0x14065F3EC (MiGetUltraMdlContext.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406619A4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiCombineIdenticalPages @ 0x1407F7D84 (MiCombineIdenticalPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x1408384D8 (MiCreateZeroThreadContext.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A433C8 (MiInitializeScrubPacket.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     MxRelocatePageTables @ 0x140B4F790 (MxRelocatePageTables.c)
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
    NodeShiftedColor = (a2 - 1) << byte_140C6570D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C6570E) - 1;
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
