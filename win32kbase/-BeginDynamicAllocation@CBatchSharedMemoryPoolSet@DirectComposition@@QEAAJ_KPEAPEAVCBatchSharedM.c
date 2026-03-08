/*
 * XREFs of ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00614C8
 * Callers:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005DE38 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0060E20 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C005E290 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005E2BC (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  int v4; // r10d
  char *v8; // rbx
  unsigned __int64 v9; // rdx
  DirectComposition::CBatchSharedMemoryPoolSet **v10; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v15[0] = 0LL;
  v16 = 0LL;
  v8 = (char *)this;
  while ( 1 )
  {
    this = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( this == (DirectComposition::CBatchSharedMemoryPoolSet *)v8 )
    {
      v4 = DirectComposition::CBatchSharedMemoryPool::Create(
             (struct DirectComposition::CBatchSharedMemoryPoolSet *)v8,
             v8[24],
             &v16);
      if ( v4 < 0 )
        return (unsigned int)v4;
      DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v16, a2, v15);
      v14 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
      {
        *(_QWORD *)this = v14;
        *((_QWORD *)this + 1) = v8;
        *(_QWORD *)(v14 + 8) = this;
        v9 = v15[0];
        goto LABEL_12;
      }
LABEL_16:
      __fastfail(3u);
    }
    if ( !*((_BYTE *)this + 64) )
    {
      v9 = *((_QWORD *)this + 5);
      if ( a2 <= 4096 - v9 )
        break;
    }
  }
  *((_BYTE *)this + 64) = 1;
  v10 = (DirectComposition::CBatchSharedMemoryPoolSet **)*((_QWORD *)this + 1);
  if ( v10 == (DirectComposition::CBatchSharedMemoryPoolSet **)v8 )
    goto LABEL_6;
  v12 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
  if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
    goto LABEL_16;
  if ( *v10 != this )
    goto LABEL_16;
  *v10 = v12;
  *((_QWORD *)v12 + 1) = v10;
  v13 = *(_QWORD *)v8;
  if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
    goto LABEL_16;
  *(_QWORD *)this = v13;
  *((_QWORD *)this + 1) = v8;
  *(_QWORD *)(v13 + 8) = this;
LABEL_12:
  *(_QWORD *)v8 = this;
LABEL_6:
  *a3 = this;
  *a4 = v9;
  return (unsigned int)v4;
}
