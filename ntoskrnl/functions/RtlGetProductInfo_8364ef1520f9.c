BOOLEAN __stdcall RtlGetProductInfo(
        ULONG OSMajorVersion,
        ULONG OSMinorVersion,
        ULONG SpMajorVersion,
        ULONG SpMinorVersion,
        PULONG ReturnedProductType)
{
  ULONG v5; // esi
  BOOLEAN v6; // bl
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  unsigned int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v14; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v16[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v18[52]; // [rsp+78h] [rbp-90h] BYREF

  v5 = 0;
  v13 = 0;
  v6 = 1;
  v12 = 0;
  v14 = 0;
  v15[0] = OSMajorVersion;
  v15[1] = OSMinorVersion;
  v15[2] = SpMajorVersion;
  v15[3] = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v16[0] = OSMajorVersion;
  v16[1] = OSMinorVersion;
  v17 = xmmword_140016E68;
  v16[2] = SpMajorVersion;
  v16[3] = SpMinorVersion;
  if ( (int)CompareVersions(v16, &v17) < 0 )
    return 0;
  if ( (int)ZwQueryLicenseValue(L"$&", &v13, &v14, 4LL, &v12) < 0 || v13 != 4 || v12 != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( (int)ZwQueryLicenseValue(L">@", &v13, v18, 200LL, &v12) < 0 )
    goto LABEL_7;
  if ( v13 != 3 || v12 < 0x14 || v12 != 20 * (v12 / 0x14uLL) )
    return 0;
  if ( v12 / 0x14uLL )
  {
    v8 = 0LL;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v8];
      if ( (int)CompareVersions(v15, &v17) < 0 )
        v5 = v18[v11 + 4];
      v8 = (unsigned int)(v10 + 1);
    }
    while ( v8 < v9 );
    if ( v5 )
    {
      *ReturnedProductType = v5;
      return v6;
    }
  }
LABEL_7:
  *ReturnedProductType = v14;
  return v6;
}
