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

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1)
{
  int LicInformation; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  LicInformation = RtlpMuiRegLoadLicInformation(a1);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  result = RtlpMuiRegLoadInstalled(a1, v3);
  if ( (int)result >= 0 )
  {
    RtlpMuiRegFreeRegistryInfo(a1, 4u);
    result = RtlpLoadLanguageConfigList(v5, &v7, a1);
    if ( (int)result >= 0 )
    {
      v6 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v6;
      }
    }
  }
  return result;
}
