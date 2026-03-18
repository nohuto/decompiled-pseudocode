/*
 * XREFs of ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x1C00C5E98
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0059BAC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::~CBatchSharedMemoryPoolSet(
        DirectComposition::CBatchSharedMemoryPoolSet *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    ObfDereferenceObject(v1);
}
