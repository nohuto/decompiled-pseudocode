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
