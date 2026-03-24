/*
 * XREFs of MiSufficientAvailablePages @ 0x14033E480
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     MiPickClusterForMappedFileFault @ 0x14029A300 (MiPickClusterForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiFillNoReservationCluster @ 0x140318F70 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x14031E52C (MiStoreSetEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiScanPagefiles @ 0x14033C2FC (MiScanPagefiles.c)
 *     MiComputeZeroClusterMaximum @ 0x14033D4AC (MiComputeZeroClusterMaximum.c)
 *     MmEnoughMemoryForWrite @ 0x14033D628 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x14033DA1C (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x14033DC4C (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x14033DCF0 (MiAllocateAccessLog.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 *     MiGetPageTablePages @ 0x140356F00 (MiGetPageTablePages.c)
 *     MiNoPagesLastChance @ 0x140550708 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408DA134 (MiFindLargePageMemory.c)
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

  v2 = *(_QWORD *)(a1 + 7104);
  if ( v2 < a2 )
  {
    v5 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 4200); ; ++i )
    {
      v7 = *i;
      v8 = 0;
      if ( dword_140C4DEFC )
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
      if ( v8 >= dword_140C4DEFC )
        goto LABEL_7;
    }
  }
  return 1LL;
}
