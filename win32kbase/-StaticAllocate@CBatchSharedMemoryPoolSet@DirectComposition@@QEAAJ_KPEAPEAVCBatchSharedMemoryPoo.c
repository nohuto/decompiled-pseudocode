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
