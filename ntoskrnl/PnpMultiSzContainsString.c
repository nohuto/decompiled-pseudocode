/*
 * XREFs of PnpMultiSzContainsString @ 0x1403C22EC
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&String1, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)DestinationString.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}
