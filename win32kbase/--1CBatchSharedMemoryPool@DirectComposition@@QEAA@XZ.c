/*
 * XREFs of ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1C0099810
 * Callers:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0099780 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  DirectComposition::CBatchSharedMemoryPool **v2; // rcx
  DirectComposition::CBatchSharedMemoryPool **v3; // rax
  void *v4; // rcx

  v2 = *(DirectComposition::CBatchSharedMemoryPool ***)this;
  if ( v2[1] != this || (v3 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)this + 1), *v3 != this) )
    __fastfail(3u);
  *v3 = (DirectComposition::CBatchSharedMemoryPool *)v2;
  v2[1] = (DirectComposition::CBatchSharedMemoryPool *)v3;
  MmUnmapViewInSessionSpace(*((PVOID *)this + 7));
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    ObfDereferenceObject(v4);
}
