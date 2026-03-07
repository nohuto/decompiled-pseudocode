bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details **this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rdi
  void *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal((wil::details_abi::RawUsageIndex *)this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( this[3] )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(this + 3), v11);
  }
  else
  {
    *(_OWORD *)v15 = 0LL;
    v16 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v15, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)this,
        v15[0],
        0LL,
        v16 - (unsigned __int64)v15[0]);
      v13 = this[6];
      v14 = 0LL;
      this[6] = (wil::details *)*((_QWORD *)&v16 + 1);
      if ( v13 )
        wil::details::FreeProcessHeap(v13, v12);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v14 = (wil::details *)*((_QWORD *)&v16 + 1);
    }
    if ( v14 )
      wil::details::FreeProcessHeap(v14, v12);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(
           (wil::details_abi::RawUsageIndex *)this,
           a2,
           a3,
           a4,
           a5,
           a6);
}
