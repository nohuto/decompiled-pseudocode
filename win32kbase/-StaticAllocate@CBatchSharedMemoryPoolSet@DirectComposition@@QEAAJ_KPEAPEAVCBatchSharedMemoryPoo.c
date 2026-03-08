/*
 * XREFs of ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005DE38
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C009BAA0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C005DEB4 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00614C8 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  int v5; // r10d

  v5 = DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(this, 0x28uLL, a3, a4);
  if ( v5 >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPool::UseSpace(*a3, 0x28uLL);
    *((_BYTE *)*a3 + 64) = 0;
  }
  return (unsigned int)v5;
}
