/*
 * XREFs of MiProtectionToCacheAttribute @ 0x14028A2D0
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiCreateSharedZeroPages @ 0x14028A420 (MiCreateSharedZeroPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x14028B490 (MiBuildMdlForMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x14028CE24 (MiGetHardFaultPages.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetFastLargePages @ 0x14034D588 (MiGetFastLargePages.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     MiPrefetchPreallocatePages @ 0x14062FD08 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return 1LL;
  if ( a1 >> 3 == 3 )
  {
    if ( (a1 & 7) == 0 )
      return 1LL;
    return 2LL;
  }
  else
  {
    return a1 >> 3 != 1;
  }
}
