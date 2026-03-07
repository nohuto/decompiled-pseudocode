__int64 __fastcall DirectComposition::CSystemChannel::BoostCompositorClock(
        DirectComposition::CBatchSharedMemoryPool ***this,
        char a2)
{
  _DWORD *v4; // rax
  void *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[21], 0xCuLL, &v6) )
    return 3221225473LL;
  v4 = v6;
  *(_DWORD *)v6 = 12;
  v4[1] = 268;
  *((_BYTE *)v4 + 8) = a2;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)this,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
