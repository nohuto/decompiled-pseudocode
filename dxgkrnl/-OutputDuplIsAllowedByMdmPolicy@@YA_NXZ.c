bool OutputDuplIsAllowedByMdmPolicy(void)
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  int *v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  __int128 v10; // [rsp+78h] [rbp+2Fh]
  __int128 v11; // [rsp+88h] [rbp+3Fh]
  __int64 v12; // [rsp+98h] [rbp+4Fh]
  int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v14 = 1;
  v13 = 1;
  v2 = 288;
  v3 = L"AllowScreenCapture";
  v5 = 67108868;
  v4 = &v13;
  v6 = &v14;
  v12 = 0LL;
  v7 = 4;
  v10 = 0LL;
  v11 = 0LL;
  RtlQueryRegistryValuesEx(
    0LL,
    L"\\Registry\\Machine\\Software\\Microsoft\\PolicyManager\\current\\Experience",
    &v1,
    0LL,
    0LL);
  return v13 != 0;
}
