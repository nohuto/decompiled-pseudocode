__int64 __fastcall DirectComposition::CSystemChannel::ForceRender(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        char a2,
        char a3,
        int a4,
        char a5)
{
  _DWORD *v9; // rcx
  char v10; // al
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[21], 0x14uLL, &v12) )
    return 3221225473LL;
  v9 = v12;
  v10 = a5;
  *(_DWORD *)v12 = 20;
  v9[1] = 270;
  *((_BYTE *)v9 + 8) = a2;
  *((_BYTE *)v9 + 9) = a3;
  v9[3] = a4;
  *((_BYTE *)v9 + 16) = v10;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)a1,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
