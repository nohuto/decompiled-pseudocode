/*
 * XREFs of PsReferencePartitionSafe @ 0x140303F74
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MmQueryMemoryListInformation @ 0x14026EA10 (MmQueryMemoryListInformation.c)
 *     MiCheckZeroFreeRebalance @ 0x1402993D0 (MiCheckZeroFreeRebalance.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x140313D10 (CcGetPartitionWithCreate.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14033C19C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14033C2FC (MiScanPagefiles.c)
 *     MiPartitionObjectToPartition @ 0x1403574E0 (MiPartitionObjectToPartition.c)
 *     MiWakeLargePageRebuild @ 0x14038CF00 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x14053B4C4 (MiObtainFreePages.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 *     PsReferencePartitionByHandle @ 0x140676644 (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x1406FB22C (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
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
