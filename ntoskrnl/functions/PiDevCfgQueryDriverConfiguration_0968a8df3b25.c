__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  int ObjectProperties; // ebx
  const WCHAR *v4; // rbx
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rsi
  void *v9; // r9
  __int64 v10; // rdx
  char v11; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[64]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(_DWORD *)(a1 + 184);
  LOWORD(v15) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(const WCHAR **)(a1 + 32);
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, (UNICODE_STRING *)(a1 + 408));
    if ( ObjectProperties < 0 )
      goto LABEL_44;
    if ( !*(_QWORD *)(a1 + 24) )
    {
LABEL_45:
      ObjectProperties = -1073740653;
      goto LABEL_44;
    }
    v4 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v4 )
    goto LABEL_45;
  memset(v17, 0, 0x1F8uLL);
  LODWORD(v17[4]) = 0x1000000;
  LODWORD(v17[11]) = 117440512;
  LODWORD(v17[1]) = 288;
  LODWORD(v17[18]) = 117440512;
  v17[2] = L"Service";
  LODWORD(v17[25]) = 0x4000000;
  LODWORD(v17[8]) = 304;
  v17[3] = a1 + 288;
  LODWORD(v17[15]) = 304;
  v17[9] = L"LowerFilters";
  LODWORD(v17[32]) = 117440512;
  v17[16] = L"UpperFilters";
  LODWORD(v17[29]) = 304;
  v17[23] = L"ConfigFlags";
  LODWORD(v17[39]) = 117440512;
  v17[24] = a1 + 400;
  v17[30] = L"IncludedInfs";
  v17[37] = L"IncludedConfigs";
  v17[44] = L"Reboot";
  v17[45] = a1 + 404;
  LODWORD(v17[36]) = 304;
  LODWORD(v17[46]) = 0x4000000;
  LODWORD(v17[43]) = 288;
  LODWORD(v17[53]) = 117440512;
  LODWORD(v17[50]) = 304;
  v17[51] = L"ShimIds";
  v17[10] = a1 + 304;
  v17[17] = a1 + 320;
  LODWORD(v17[22]) = 292;
  v17[31] = a1 + 336;
  v17[38] = a1 + 352;
  v17[52] = a1 + 384;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v4, v17, 0LL);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    goto LABEL_45;
  if ( RegistryValues < 0 )
    goto LABEL_44;
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 336));
  if ( *(_WORD *)(a1 + 352) <= 2u && *(_QWORD *)(a1 + 360) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 352));
  if ( *(_WORD *)(a1 + 384) <= 2u && *(_QWORD *)(a1 + 392) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 384));
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 4) == 0 && *(_QWORD *)(a1 + 296) )
      RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 288));
    if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
      if ( *(_QWORD *)(a1 + 328) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
    }
  }
  v6 = *(const WCHAR **)(a1 + 296);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 288) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
        goto LABEL_45;
    }
  }
  v7 = *(const WCHAR **)(a1 + 312);
  if ( v7 )
  {
    if ( *v7 )
    {
      while ( 1 )
      {
        ObjectProperties = PiDevCfgVerifyService(v7);
        if ( ObjectProperties < 0 )
          goto LABEL_45;
        v13 = -1LL;
        do
          ++v13;
        while ( v7[v13] );
        v7 += v13 + 1;
        if ( !*v7 )
          goto LABEL_28;
      }
    }
    if ( ObjectProperties < 0 )
      goto LABEL_44;
  }
LABEL_28:
  v8 = *(const WCHAR **)(a1 + 328);
  if ( !v8 )
    goto LABEL_29;
  if ( *v8 )
  {
    while ( 1 )
    {
      ObjectProperties = PiDevCfgVerifyService(v8);
      if ( ObjectProperties < 0 )
        goto LABEL_45;
      v14 = -1LL;
      do
        ++v14;
      while ( v8[v14] );
      v8 += v14 + 1;
      if ( !*v8 )
        goto LABEL_29;
    }
  }
  if ( ObjectProperties < 0 )
    goto LABEL_44;
LABEL_29:
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
LABEL_43:
    *(_DWORD *)(a1 + 184) |= 1u;
    goto LABEL_44;
  }
  memset(v17, 0, 0xA0uLL);
  v9 = *(void **)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 64);
  v17[0] = DEVPKEY_DriverPackage_ClassGuid;
  LODWORD(v17[1]) = 13;
  v17[5] = &DEVPKEY_DriverPackage_ProviderName;
  v17[10] = DEVPKEY_DriverPackage_NeedsReconfig;
  v17[12] = &v15;
  v17[2] = a1 + 240;
  v17[15] = DEVPKEY_DriverPackage_GroupIds;
  v17[17] = &DestinationString;
  LODWORD(v17[3]) = 16;
  LODWORD(v17[6]) = 18;
  v17[7] = a1 + 272;
  HIDWORD(v17[8]) = 6;
  LODWORD(v17[11]) = 17;
  LODWORD(v17[13]) = 1;
  LODWORD(v17[16]) = 8210;
  HIDWORD(v17[18]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v10, 8u, v9, (__int64)v17, 4u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v17[4]) < 0 )
    {
      *(_OWORD *)(a1 + 240) = 0LL;
    }
    else
    {
      ObjectProperties = RtlStringFromGUIDEx((unsigned int *)(a1 + 240), a1 + 256, 1);
      if ( ObjectProperties < 0 )
        goto LABEL_44;
    }
    if ( SLODWORD(v17[9]) < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)(a1 + 272), 0LL);
    v11 = v15;
    if ( SLODWORD(v17[14]) < 0 )
      v11 = 0;
    LOBYTE(v15) = v11;
    if ( v11 == -1 )
      *(_DWORD *)(a1 + 184) |= 0x40u;
    if ( SLODWORD(v17[19]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( DestinationString.Buffer && DestinationString.Length > 2u )
      *(_DWORD *)(a1 + 184) |= 0x80u;
    ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
    if ( ObjectProperties >= 0 )
      goto LABEL_43;
  }
LABEL_44:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
