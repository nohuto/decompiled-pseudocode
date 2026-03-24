/*
 * XREFs of ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C005B744
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BA50 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00AA79C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005B7C4 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2)
{
  int v2; // r8d
  unsigned int v4; // edi
  char v6; // dl
  __int64 v7; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v8; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  do
  {
    if ( v4 >= a2 )
      break;
    v6 = *((_BYTE *)this + 24);
    v10 = 0LL;
    v2 = DirectComposition::CBatchSharedMemoryPool::Create(this, v6, &v10);
    if ( v2 >= 0 )
    {
      v7 = *(_QWORD *)this;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
        __fastfail(3u);
      v8 = v10;
      *(_QWORD *)v10 = v7;
      *((_QWORD *)v8 + 1) = this;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)this = v8;
    }
    ++v4;
  }
  while ( v2 >= 0 );
  return (unsigned int)v2;
}
