void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  char v8; // cl
  char v9; // al
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp+8h]

  v11 = *(_OWORD *)((char *)this + 24);
  v12 = *((_QWORD *)this + 5);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = 0LL;
  v6 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v5;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, a2);
  *(_OWORD *)((char *)a2 + 24) = v11;
  *((_QWORD *)a2 + 5) = v12;
  v7 = (wil::details *)*((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = v4;
  if ( v7 )
    wil::details::FreeProcessHeap(v7, a2);
  v8 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  v9 = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 56) = v8;
  v10 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = v9;
  *((_BYTE *)a2 + 57) = v10;
}
