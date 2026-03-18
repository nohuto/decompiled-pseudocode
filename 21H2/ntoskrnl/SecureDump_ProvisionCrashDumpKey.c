/*
 * XREFs of SecureDump_ProvisionCrashDumpKey @ 0x1403DF0B8
 * Callers:
 *     SecureDump_ReInitialize @ 0x14055EBF8 (SecureDump_ReInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E880 (SecureDump_LoadCertAndProvisionKey.c)
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
    || !DWORD1(xmmword_140C4EFD8)
    || (_DWORD)xmmword_140C4EFD8
    || !AllowCrashDump )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\system32\\ntdumpkey.p7b");
  result = SecureDump_LoadCertAndProvisionKey(
             (unsigned int)&DestinationString,
             (unsigned int)&xmmword_140C4EFD8 + 8,
             (unsigned int)&dwFlags,
             (unsigned int)(&dwFlags + 2),
             (__int64)(&dwFlags + 1));
  if ( (int)result < 0 )
  {
    if ( SecureDmpEncryptionContext == 1 )
      SecureDmpCertProvisionFailedDuringBoot = 1;
    SecureDmpEncryptionContext = 3;
    byte_140C4EFD4 = 0;
  }
  return result;
}
