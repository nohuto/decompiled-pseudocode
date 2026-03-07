char __fastcall DxgkpIsDrtEnabled(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+38h] [rbp-11h]
  const wchar_t *v5; // [rsp+40h] [rbp-9h]
  int *v6; // [rsp+48h] [rbp-1h]
  int v7; // [rsp+50h] [rbp+7h]
  int *v8; // [rsp+58h] [rbp+Fh]
  int v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+70h] [rbp+27h]
  __int128 v12; // [rsp+78h] [rbp+2Fh]
  __int128 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+98h] [rbp+4Fh]
  int v15; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current && (*((_DWORD *)Current + 106) & 0x1000) != 0 )
    return 1;
  v15 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v5 = L"DRTTestEnable";
  v11 = 0;
  v14 = 0LL;
  v6 = &v15;
  v8 = &v15;
  v4 = 288;
  v7 = 67108868;
  v9 = 4;
  v12 = 0LL;
  v13 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v3, 0LL, 0LL);
  if ( v15 == 1484026436 )
    return 1;
  WdLogSingleEntry1(4LL, 51LL);
  return 0;
}
