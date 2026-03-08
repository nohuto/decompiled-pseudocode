/*
 * XREFs of MiAcquireNonPagedResources @ 0x140348D54
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402B3CA8 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1402EDAA0 (MiObtainPoolCharges.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x14062FD08 (MiPrefetchPreallocatePages.c)
 *     MiInitializeBootShadowStackPage @ 0x140642570 (MiInitializeBootShadowStackPage.c)
 *     MiMoveBadPageCrossPartition @ 0x14064B358 (MiMoveBadPageCrossPartition.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 *     MiMakePageBad @ 0x14065BCD0 (MiMakePageBad.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 *     MiGetFileHashPage @ 0x14066392C (MiGetFileHashPage.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x140728E84 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x1407F5F44 (MiChargeSystemImageCommitment.c)
 *     MiAllocateFastAwePages @ 0x140A3D534 (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeGapFrames @ 0x140B36EE8 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B38DFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140B39E68 (MiAllocateDummyPage.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v7; // r8
  __int64 v8; // r8

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4uLL);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2, v8);
  return 3221225626LL;
}
