/*
 * XREFs of ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C005DDBC
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0091094 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005E2BC (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
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
  while ( v4 < a2 )
  {
    v6 = *((_BYTE *)this + 24);
    v10 = 0LL;
    v2 = DirectComposition::CBatchSharedMemoryPool::Create(this, v6, &v10);
    if ( v2 < 0 )
      break;
    v7 = *(_QWORD *)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    v8 = v10;
    ++v4;
    *(_QWORD *)v10 = v7;
    *((_QWORD *)v8 + 1) = this;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)this = v8;
  }
  return (unsigned int)v2;
}
