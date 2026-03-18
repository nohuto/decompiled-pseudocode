/*
 * XREFs of SecureDump_ProvisionCrashDumpKey @ 0x1403B5D94
 * Callers:
 *     SecureDump_ReInitialize @ 0x14055E558 (SecureDump_ReInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E1E0 (SecureDump_LoadCertAndProvisionKey.c)
 */

__int64 SecureDump_ProvisionCrashDumpKey()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !SecureDmpEncryptionContext )
    return 3221225860LL;
  if ( !SecureDmpLoadCertificate
    || ForceDumpDisabled
    || !DWORD1(xmmword_140C64DD8)
    || (_DWORD)xmmword_140C64DD8
    || !AllowCrashDump )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\system32\\ntdumpkey.p7b");
  result = SecureDump_LoadCertAndProvisionKey(
             (unsigned int)&DestinationString,
             (unsigned int)&xmmword_140C64DD8 + 8,
             (unsigned int)&dwFlags,
             (unsigned int)(&dwFlags + 2),
             (__int64)(&dwFlags + 1));
  if ( (int)result < 0 )
  {
    if ( SecureDmpEncryptionContext == 1 )
      SecureDmpCertProvisionFailedDuringBoot = 1;
    SecureDmpEncryptionContext = 3;
    byte_140C64DD4 = 0;
  }
  return result;
}
