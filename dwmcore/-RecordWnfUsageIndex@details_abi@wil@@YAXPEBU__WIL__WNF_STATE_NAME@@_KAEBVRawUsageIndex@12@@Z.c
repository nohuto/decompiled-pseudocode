void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int WnfStateData; // ebx
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdx
  char v14; // bl
  __int64 v15; // r9
  int updated; // eax
  __int64 v17; // r9
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE *v27; // [rsp+70h] [rbp-90h]
  _BYTE v28[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  wil::details *v31; // [rsp+B0h] [rbp-50h]
  char v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+B9h] [rbp-47h]
  _BYTE v34[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v35; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-30h]
  _BYTE *v37; // [rsp+E0h] [rbp-20h]
  void ***v38; // [rsp+130h] [rbp+30h]
  _BYTE v39[4096]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v25 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v28,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v22 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((__int64)v7, v8, v9, (__int64)&v23, (__int64)v39, (__int64)&v22);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v23 = 0;
      v22 = 0;
    }
    else
    {
      v11 = v22;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v28, v39, v11, 0x1000uLL);
    if ( v33 )
      break;
    v24 = 0LL;
    *(_QWORD *)&v26 = &v24;
    *((_QWORD *)&v26 + 1) = &v25;
    v27 = v28;
    v35 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v38 = &v35;
    v36 = v26;
    v37 = v28;
    v14 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v34);
    if ( !v32 )
      goto LABEL_11;
    updated = wil_details_NtUpdateWnfStateData((__int64)v7, v29, v30 - (int)v29, v15, v20, v23, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((__int64)v7, v29, v30 - v29, v17, v21, 0, 0);
LABEL_11:
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v25 = v24;
      goto LABEL_12;
    }
    ++v4;
    v14 = 0;
LABEL_12:
    v18 = v31;
    v31 = 0LL;
    if ( v18 )
      wil::details::FreeProcessHeap(v18, v13);
    if ( v14 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v19 = v31;
  v31 = 0LL;
  if ( v19 )
    wil::details::FreeProcessHeap(v19, v12);
}
