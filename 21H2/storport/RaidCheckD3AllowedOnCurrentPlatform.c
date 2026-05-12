/*
 * XREFs of RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0058D78
 * Callers:
 *     DllInitialize @ 0x1C004C5C0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

bool RaidCheckD3AllowedOnCurrentPlatform()
{
  int v2[4]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+30h] [rbp-138h] BYREF

  v2[0] = 1;
  EmClientQueryRuleState(&GUID_STORAGE_DEVICE_D3_ALLOWED_RULE, v2);
  if ( v2[0] != 2 )
    return 0;
  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  return (unsigned __int8)(BYTE2(VersionInformation[70]) - 2) > 1u;
}
