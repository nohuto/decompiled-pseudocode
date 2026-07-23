/*
 * XREFs of PsReferencePartitionSafe @ 0x1402745B0
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1402390C0 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14026112C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14026128C (MiScanPagefiles.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiCheckZeroFreeRebalance @ 0x140323AA0 (MiCheckZeroFreeRebalance.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiWakeLargePageRebuild @ 0x14038D750 (MiWakeLargePageRebuild.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     MiContractWsSwapPageFile @ 0x1406BECDC (MiContractWsSwapPageFile.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
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
