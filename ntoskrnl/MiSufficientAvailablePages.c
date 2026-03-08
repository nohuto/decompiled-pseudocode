/*
 * XREFs of MiSufficientAvailablePages @ 0x1403643E4
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiPickClusterForMappedFileFault @ 0x14028B0C0 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiScanPagefiles @ 0x140361A24 (MiScanPagefiles.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     MmEnoughMemoryForWrite @ 0x1403637E0 (MmEnoughMemoryForWrite.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiAllocateAccessLog @ 0x140364034 (MiAllocateAccessLog.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140364340 (MiRetryNonPagedAllocation.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x140637058 (MiFillNoReservationCluster.c)
 *     MiNoPagesLastChance @ 0x14064E904 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiStoreSetEvictPageFile @ 0x14065A380 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r9
  unsigned __int16 **i; // rcx
  unsigned __int16 *v7; // rdx
  unsigned int v8; // r10d

  v2 = *(_QWORD *)(a1 + 17216);
  if ( v2 < a2 )
  {
    v5 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 6808); ; ++i )
    {
      v7 = *i;
      v8 = 0;
      if ( dword_140C6577C )
        break;
LABEL_7:
      if ( ++v5 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v7;
      if ( v2 >= a2 )
        break;
      ++v8;
      v7 += 8;
      if ( v8 >= dword_140C6577C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
