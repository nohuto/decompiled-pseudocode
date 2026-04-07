/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180040EE8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18002D610 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18002E760 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18002EFC4 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180041070 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180041178 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042ED4 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x180055264 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800552EC (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800581F0 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  int v8; // edx
  int v9; // r8d
  unsigned int WnfStateData; // ebx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  int v14; // r9d
  void *v15; // rcx
  int updated; // eax
  int v17; // r9d
  void *v18; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h]
  _BYTE *v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[24]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  void *v29; // [rsp+A0h] [rbp-60h]
  char v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+A9h] [rbp-57h]
  _BYTE v32[8]; // [rsp+B0h] [rbp-50h] BYREF
  void **v33; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-40h]
  _BYTE *v35; // [rsp+D0h] [rbp-30h]
  void ***v36; // [rsp+120h] [rbp+20h]
  _BYTE v37[4096]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v23 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v26,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    LODWORD(v21) = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData(
                     (_DWORD)v7,
                     v8,
                     v9,
                     (unsigned int)&v21 + 4,
                     (__int64)v37,
                     (__int64)&v21);
    wil::details::NtStatusToHr((wil::details *)WnfStateData, v11);
    if ( WnfStateData )
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
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v32);
    if ( v30 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v27, (int)v28 - (int)v27, v14, v19, HIDWORD(v21), 1);
      if ( updated == -1073741823 )
      {
        ++v4;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v27, v28 - v27, v17, v20, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v23 = v22;
LABEL_7:
    v15 = v29;
    v29 = 0LL;
    if ( v15 )
      MemoryFree(v15);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v18 = v29;
  v29 = 0LL;
  if ( v18 )
    MemoryFree(v18);
}
