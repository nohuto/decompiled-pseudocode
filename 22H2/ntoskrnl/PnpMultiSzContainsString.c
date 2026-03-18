/*
 * XREFs of PnpMultiSzContainsString @ 0x1403CDF30
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14087D884 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E5B4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgAppendMultiSz @ 0x14095C6E4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960200 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
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
