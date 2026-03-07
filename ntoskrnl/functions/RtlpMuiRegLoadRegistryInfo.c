__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1)
{
  int LicInformation; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  LicInformation = RtlpMuiRegLoadLicInformation(a1);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  result = RtlpMuiRegLoadInstalled(a1);
  if ( (int)result >= 0 )
  {
    RtlpMuiRegFreeRegistryInfo(a1, 4LL);
    result = RtlpLoadLanguageConfigList(v4, &v6, a1);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      if ( v6 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v5;
      }
    }
  }
  return result;
}
