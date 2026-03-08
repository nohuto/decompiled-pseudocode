/*
 * XREFs of PsReferencePartitionSafe @ 0x140295BC8
 * Callers:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     MiCheckZeroFreeRebalance @ 0x14027DFA0 (MiCheckZeroFreeRebalance.c)
 *     CcGetPartitionWithCreate @ 0x1402E20D0 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140361A24 (MiScanPagefiles.c)
 *     MiReferencePagePartition @ 0x1406271E4 (MiReferencePagePartition.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiWakeLargePageRebuild @ 0x14065BC3C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x14067E2A0 (MiContractWsSwapPageFile.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 32));
  v1 = *(_QWORD *)(a1 + 32);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
