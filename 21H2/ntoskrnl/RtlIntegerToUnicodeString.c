/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14062C070
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF654 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C36FC (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1406B9D18 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14078AB64 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x14079E4C0 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096E970 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA0C (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1409804D0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14062C640 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14062CDE0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
