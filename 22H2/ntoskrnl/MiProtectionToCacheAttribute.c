/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1402E1560
 * Callers:
 *     MiInitializeTransitionPfn @ 0x14021AF78 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026A260 (MiResolvePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027CE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetHardFaultPages @ 0x1402DF274 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiCreateSharedZeroPages @ 0x1402E0DC0 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1402E86FC (MiGetFastLargePages.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     MiPrefetchPreallocatePages @ 0x140632198 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x14066A064 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiFindLargePageMemory @ 0x140A497D8 (MiFindLargePageMemory.c)
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
