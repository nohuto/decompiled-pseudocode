/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402E4314
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402F8E6C (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x14035A380 (MiObtainPoolCharges.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140632198 (MiPrefetchPreallocatePages.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D974 (MiMoveBadPageCrossPartition.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065DA24 (MiProcessVaContiguityInformation.c)
 *     MiMakePageBad @ 0x14065E320 (MiMakePageBad.c)
 *     MiReplenishUltraPageTables @ 0x140661BEC (MiReplenishUltraPageTables.c)
 *     MiGetFileHashPage @ 0x140665F7C (MiGetFileHashPage.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiAllocateProcessShadow @ 0x14070615C (MiAllocateProcessShadow.c)
 *     MiAllocateFastAwePages @ 0x140A40214 (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeGapFrames @ 0x140B455F8 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B4750C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140B48578 (MiAllocateDummyPage.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v7; // r8

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
  MiReturnCommit(a1, a2);
  return 3221225626LL;
}
