char __fastcall DirectComposition::CBatch::EnsureBatchBuffer(
        struct DirectComposition::CBatch ***a1,
        unsigned __int64 a2,
        void **a3)
{
  DirectComposition::CBatchSharedMemoryPool **v3; // rax
  struct DirectComposition::CBatch *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  void *v10; // rdx

  v3 = *a1;
  v7 = (*a1)[17];
  v8 = *((_QWORD *)v7 + 5);
  if ( a2 <= 4096 - v8 )
  {
    v9 = *((_QWORD *)v7 + 7);
    *((_QWORD *)v7 + 5) = v8 + a2;
    v10 = (void *)(v8 + v9);
    if ( v10 )
    {
      v3[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v3[19] + a2);
      *a3 = v10;
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a1, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a1, a2, a3) )
      KeBugCheck(0xC000000D);
    return 1;
  }
  return 0;
}
