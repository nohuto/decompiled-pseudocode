/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1407805C0
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403A5FC4 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14066EAE4 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14077F74C (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A59338 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A593D4 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x140780650 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
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
