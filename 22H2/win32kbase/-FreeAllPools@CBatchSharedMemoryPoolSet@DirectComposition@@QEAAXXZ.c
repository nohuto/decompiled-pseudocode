/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0021894
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0021980 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0083A3C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00218E4 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1C0021924 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools(
        DirectComposition::CBatchSharedMemoryPool **this)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v2; // rbx

  while ( 1 )
  {
    v2 = *this;
    if ( *this == (DirectComposition::CBatchSharedMemoryPool *)this )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*this);
    if ( v2 )
    {
      DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(v2);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    }
  }
}
