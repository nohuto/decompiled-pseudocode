bool __fastcall DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPool *this,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  bool result; // al

  if ( *((_BYTE *)this + 64) )
    return 0;
  v3 = *((_QWORD *)this + 5);
  if ( a2 > 4096 - v3 )
    return 0;
  *a3 = v3;
  result = 1;
  *((_BYTE *)this + 64) = 1;
  return result;
}
