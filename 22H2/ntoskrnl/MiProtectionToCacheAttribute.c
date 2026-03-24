/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1402417B0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402100E0 (MiResolvePrivateZeroFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023D740 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiCreateSharedZeroPages @ 0x1402410E0 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x1402EB468 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 *     MiGetHardFaultPages @ 0x1403592E4 (MiGetHardFaultPages.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiGetFastLargePages @ 0x1403F71A0 (MiGetFastLargePages.c)
 *     MmMapMdl @ 0x1405374F0 (MmMapMdl.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x1405558B0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiAllocateLargeZeroPages @ 0x14055D99C (MiAllocateLargeZeroPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiProcessCrcList @ 0x140726CE0 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x1408DA134 (MiFindLargePageMemory.c)
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
