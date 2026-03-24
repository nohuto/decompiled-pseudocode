/*
 * XREFs of MiAcquireNonPagedResources @ 0x1403571F0
 * Callers:
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403546C4 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x140355770 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x140357184 (MiObtainPoolCharges.c)
 *     MiGetFileHashPage @ 0x14038C960 (MiGetFileHashPage.c)
 *     MiStoreChargeReservedPages @ 0x1403B6D98 (MiStoreChargeReservedPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EF2C (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x140552200 (MiProcessVaContiguityInformation.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055CE7C (MiGetCrossPartitionCombineCharges.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x140563874 (MiMakePageBad.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x14075E354 (MiChargeSystemImageCommitment.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA9C8 (MiAllocatePartitionPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v10; // r9

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit((__int64)a1, a2, 4u);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL, v10);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3, v8) )
    return 0LL;
  MiReturnCommit((__int64)a1, a2);
  return 3221225626LL;
}
