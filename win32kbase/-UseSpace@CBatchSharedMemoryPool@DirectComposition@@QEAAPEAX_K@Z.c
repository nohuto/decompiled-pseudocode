/*
 * XREFs of ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C005DEB4
 * Callers:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005DE38 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::UseSpace(
        DirectComposition::CBatchSharedMemoryPool *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 5);
  v3 = 0LL;
  if ( a2 <= 4096 - v2 )
  {
    v3 = v2 + *((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = v2 + a2;
  }
  return v3;
}
