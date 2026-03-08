/*
 * XREFs of _PnpIsValidGuidString @ 0x1406C5480
 * Callers:
 *     _CmValidateDeviceContainerName @ 0x1406C3EDC (_CmValidateDeviceContainerName.c)
 *     _CmValidateInstallerClassName @ 0x1406C4F20 (_CmValidateInstallerClassName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140823FCC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  Guid = 0LL;
  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
