/*
 * XREFs of ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E4B4
 * Callers:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E5DC (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C000D294 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C000E5B0 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v8; // rcx
  int v9; // r10d
  DirectComposition::CBatchSharedMemoryPoolSet *v10; // rax
  unsigned __int64 v11; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v13; // rdx
  DirectComposition::CBatchSharedMemoryPoolSet *v14; // rdx
  DirectComposition::CBatchSharedMemoryPoolSet *v15; // rax
  unsigned __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v17; // [rsp+40h] [rbp+8h] BYREF

  v16[0] = 0LL;
  v17 = 0LL;
  do
  {
    v8 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( v8 == this )
      goto LABEL_10;
  }
  while ( !DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v8, a2, v16) );
  v17 = this;
  if ( !this )
  {
LABEL_10:
    v9 = DirectComposition::CBatchSharedMemoryPool::Create(this, *((_BYTE *)this + 24), &v17);
    if ( v9 < 0 )
      return (unsigned int)v9;
    DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v17, a2, v16);
    v14 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this )
    {
      *(_QWORD *)this = v14;
      *((_QWORD *)this + 1) = this;
      *((_QWORD *)v14 + 1) = this;
LABEL_13:
      *(_QWORD *)this = this;
      goto LABEL_6;
    }
LABEL_9:
    __fastfail(3u);
  }
  v10 = (DirectComposition::CBatchSharedMemoryPoolSet *)*((_QWORD *)this + 1);
  if ( v10 != this )
  {
    v13 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this
      && *(DirectComposition::CBatchSharedMemoryPoolSet **)v10 == this )
    {
      *(_QWORD *)v10 = v13;
      *((_QWORD *)v13 + 1) = v10;
      v15 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this )
      {
        *(_QWORD *)this = v15;
        *((_QWORD *)this + 1) = this;
        *((_QWORD *)v15 + 1) = this;
        goto LABEL_13;
      }
    }
    goto LABEL_9;
  }
LABEL_6:
  v11 = v16[0];
  *a3 = this;
  *a4 = v11;
  return (unsigned int)v9;
}
