/*
 * XREFs of SecureDump_ProvisionCrashDumpKey @ 0x1403B1104
 * Callers:
 *     SecureDump_ReInitialize @ 0x14055C0B8 (SecureDump_ReInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
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
    || !DWORD1(xmmword_140C64958)
    || (_DWORD)xmmword_140C64958
    || !AllowCrashDump )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\system32\\ntdumpkey.p7b");
  result = SecureDump_LoadCertAndProvisionKey(
             (unsigned int)&DestinationString,
             (unsigned int)&xmmword_140C64958 + 8,
             (unsigned int)&dwFlags,
             (unsigned int)(&dwFlags + 2),
             (__int64)(&dwFlags + 1));
  if ( (int)result < 0 )
  {
    if ( SecureDmpEncryptionContext == 1 )
      SecureDmpCertProvisionFailedDuringBoot = 1;
    SecureDmpEncryptionContext = 3;
    byte_140C64954 = 0;
  }
  return result;
}
