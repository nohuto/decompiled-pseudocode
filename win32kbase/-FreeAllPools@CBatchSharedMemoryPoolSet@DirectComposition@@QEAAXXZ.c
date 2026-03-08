/*
 * XREFs of ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0099780
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0098744 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0098BC8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00997D0 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1C0099810 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
