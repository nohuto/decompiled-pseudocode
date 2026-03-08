/*
 * XREFs of HvlpProcessIommu @ 0x1402FEE8C
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x1407976C4 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 */

bool HvlpProcessIommu()
{
  char v0; // bl
  int v1; // eax
  unsigned int v3; // [rsp+20h] [rbp-30h] BYREF
  int v4; // [rsp+28h] [rbp-28h] BYREF
  __int64 v5; // [rsp+2Ch] [rbp-24h]
  __int64 v6; // [rsp+34h] [rbp-1Ch]

  v0 = 0;
  v5 = 1LL;
  v6 = 0LL;
  v4 = 1094930505;
  v3 = 20;
  v1 = KiGetCpuVendor() - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return v0;
    HIDWORD(v5) = 1380011332;
  }
  else
  {
    HIDWORD(v5) = 1397904969;
  }
  if ( (unsigned int)ZwQuerySystemInformation(76LL, &v4, v3, &v3) == -1073741789 )
    return v3 != 0;
  return v0;
}
