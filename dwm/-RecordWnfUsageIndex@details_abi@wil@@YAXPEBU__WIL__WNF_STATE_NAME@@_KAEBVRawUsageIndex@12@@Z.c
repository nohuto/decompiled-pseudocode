void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  int v8; // edx
  int v9; // r8d
  wil::details *WnfStateData; // rbx
  int v11; // edx
  unsigned int v12; // eax
  void *v13; // rdx
  void *v14; // rdx
  char v15; // bl
  wil::details *v16; // rcx
  int updated; // eax
  wil::details *v18; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  _BYTE v26[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  wil::details *v29; // [rsp+B0h] [rbp-50h]
  char v30; // [rsp+B8h] [rbp-48h]
  char v31; // [rsp+B9h] [rbp-47h]
  _BYTE v32[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v33; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-30h]
  _BYTE *v35; // [rsp+E0h] [rbp-20h]
  void ***v36; // [rsp+130h] [rbp+30h]
  _BYTE v37[4096]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v23 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v20) = *((_BYTE *)a3 + 8);
    LOWORD(v19) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v26, *a3, a3[1], a4, v19, v20);
    LODWORD(v21) = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v7,
                                                   v8,
                                                   v9,
                                                   (unsigned int)&v21 + 4,
                                                   (__int64)v37,
                                                   (__int64)&v21);
    wil::details::NtStatusToHr(WnfStateData, v11);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v21 = 0LL;
    }
    else
    {
      v12 = v21;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v37, v12, 0x1000uLL);
    if ( v31 )
      break;
    v22 = 0LL;
    *(_QWORD *)&v24 = &v22;
    *((_QWORD *)&v24 + 1) = &v23;
    v25 = v26;
    v33 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v36 = &v33;
    v34 = v24;
    v35 = v26;
    v15 = wil::details_abi::RawUsageIndex::Iterate(a3, v32);
    if ( v30 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v27, v28 - (int)v27, (_DWORD)a4, v19, HIDWORD(v21), 1);
      if ( updated == -1073741823 )
      {
        ++v4;
        v15 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v27, v28 - v27, (_DWORD)a4, v19, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v23 = v22;
LABEL_7:
    v16 = v29;
    v29 = 0LL;
    if ( v16 )
      wil::details::FreeProcessHeap(v16, v14);
    if ( v15 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v18 = v29;
  v29 = 0LL;
  if ( v18 )
    wil::details::FreeProcessHeap(v18, v13);
}
