/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x140790108
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A8028 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403A76C0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadLanguageConfigList @ 0x14078F5A0 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14078FBC4 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14078FF70 (RtlpMuiRegFreeRegistryInfo.c)
 */

int __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1)
{
  int LicInformation; // eax
  int result; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return -1073741811;
  LicInformation = RtlpMuiRegLoadLicInformation(a1);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  result = RtlpMuiRegLoadInstalled(a1);
  if ( result >= 0 )
  {
    RtlpMuiRegFreeRegistryInfo(a1, 4u);
    result = RtlpLoadLanguageConfigList(v4, &v6, a1);
    if ( result >= 0 )
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
