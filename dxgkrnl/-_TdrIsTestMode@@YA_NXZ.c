bool _TdrIsTestMode(void)
{
  int v0; // eax
  int v1; // ecx
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
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF

  v4 = 288;
  v16 = 0;
  v15 = 0;
  v5 = L"TdrTestMode";
  v3 = 0LL;
  v6 = &v15;
  v7 = 67108868;
  v8 = &v16;
  v9 = 4;
  v14 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v0 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v3,
         0LL,
         0LL);
  v1 = v15;
  if ( v0 < 0 )
    v1 = 0;
  return v1 != 0;
}
