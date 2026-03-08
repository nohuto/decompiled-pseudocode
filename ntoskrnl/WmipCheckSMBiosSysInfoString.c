/*
 * XREFs of WmipCheckSMBiosSysInfoString @ 0x1409DC878
 * Callers:
 *     WmiMatchSMBiosSysInfo @ 0x1409DC7D0 (WmiMatchSMBiosSysInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

char __fastcall WmipCheckSMBiosSysInfoString(PCSZ SourceString, PCUNICODE_STRING String2)
{
  bool v2; // bl
  __int64 v4; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  String1 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  if ( v4 == 1 && *SourceString == 42 )
    return 1;
  RtlInitAnsiString(&DestinationString, SourceString);
  if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
  {
    v2 = RtlCompareUnicodeString(&String1, String2, 0) == 0;
    RtlFreeUnicodeString(&String1);
  }
  return v2;
}
