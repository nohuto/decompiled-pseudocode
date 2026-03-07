__int64 __fastcall bInitICM(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  NTSTATUS v3; // eax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  unsigned __int64 v20; // rsi
  __int64 StockObject; // rax
  __int64 v22; // rax
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  _BYTE v29[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v30; // [rsp+304h] [rbp+1FCh]

  v1 = 1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v24 = 0;
  QueryTable.Name = L"GdiIcmControl";
  QueryTable.EntryContext = &v24;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 292;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v3 = RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL);
  v4 = v24;
  if ( v3 < 0 )
    v4 = 0;
  v24 = v4;
  if ( (v4 & 0x10000) == 0 )
  {
    *(_DWORD *)(v2 + 2420) = 1934772034;
    wcscpy_s((wchar_t *)(v2 + 2476), 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  memset(v29, 0, sizeof(v29));
  v5 = 4LL;
  v6 = v2 + 2408;
  v7 = v29;
  do
  {
    v8 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)v7 = *(_OWORD *)v6;
    v9 = *(_OWORD *)(v6 + 32);
    *((_OWORD *)v7 + 1) = v8;
    v10 = *(_OWORD *)(v6 + 48);
    *((_OWORD *)v7 + 2) = v9;
    v11 = *(_OWORD *)(v6 + 64);
    *((_OWORD *)v7 + 3) = v10;
    v12 = *(_OWORD *)(v6 + 80);
    *((_OWORD *)v7 + 4) = v11;
    v13 = *(_OWORD *)(v6 + 96);
    *((_OWORD *)v7 + 5) = v12;
    v14 = *(_OWORD *)(v6 + 112);
    v6 += 128LL;
    *((_OWORD *)v7 + 6) = v13;
    v7 += 128;
    *((_OWORD *)v7 - 1) = v14;
    --v5;
  }
  while ( v5 );
  v15 = *(_QWORD *)(v6 + 64);
  v16 = *(_OWORD *)(v6 + 16);
  *(_OWORD *)v7 = *(_OWORD *)v6;
  v17 = *(_OWORD *)(v6 + 32);
  *((_OWORD *)v7 + 1) = v16;
  v18 = *(_OWORD *)(v6 + 48);
  *((_OWORD *)v7 + 2) = v17;
  *((_OWORD *)v7 + 3) = v18;
  *((_QWORD *)v7 + 8) = v15;
  *((_DWORD *)v7 + 18) = *(_DWORD *)(v6 + 72);
  v30 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v29);
  v20 = (unsigned __int64)ColorSpace;
  if ( !ColorSpace )
    return 0;
  HmgSetOwner((__int64)ColorSpace, 0, 9);
  HmgMarkUndeletable(v20, 9);
  bSetStockObject(v20, 20, 0);
  StockObject = GreGetStockObject(20);
  *(_QWORD *)(v2 + 2400) = StockObject;
  v22 = HmgShareLockEx(StockObject, 9, 0);
  *(_QWORD *)(v2 + 328) = *(_QWORD *)(v2 + 2400);
  *(_QWORD *)(v2 + 2392) = v22;
  *(_QWORD *)(v2 + 768) = v22;
  if ( !v22 )
    return 0;
  return v1;
}
