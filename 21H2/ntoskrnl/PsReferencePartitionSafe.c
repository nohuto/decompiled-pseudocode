/*
 * XREFs of PsReferencePartitionSafe @ 0x1402AC004
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14027318C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x1402732EC (MiScanPagefiles.c)
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x1402BAEB0 (CcGetPartitionWithCreate.c)
 *     MmQueryMemoryListInformation @ 0x1402D4240 (MmQueryMemoryListInformation.c)
 *     MiPartitionObjectToPartition @ 0x1402E5F80 (MiPartitionObjectToPartition.c)
 *     MiCheckZeroFreeRebalance @ 0x140318D50 (MiCheckZeroFreeRebalance.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiWakeLargePageRebuild @ 0x14038D600 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x14053B584 (MiObtainFreePages.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140692204 (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 *     MiContractWsSwapPageFile @ 0x14071068C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
