/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x140793BA8
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x14071F530 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  int v4; // [rsp+54h] [rbp+14h]
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF

  v4 = HIDWORD(a1);
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductType");
  if ( NtQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4
    || !Data
    || Data > 3 )
  {
    return 0;
  }
  MEMORY[0xFFFFF78000000264] = Data;
  return 1;
}
