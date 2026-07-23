/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1406F6350
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AA474 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2834 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C363C (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14069D2A8 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14078AA64 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x14096E308 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096E9C0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA5C (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1406F70C0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
