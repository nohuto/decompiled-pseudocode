/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14060F3A0
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF7C4 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C392C (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14060F1F8 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096EB50 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EBEC (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x14060F430 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
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
