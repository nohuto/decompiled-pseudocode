/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x14075A6A0
 * Callers:
 *     mbstowcs @ 0x1403E1C30 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x14075A700 (RtlCustomCPToUnicodeN.c)
 *     RtlpGetCodePageData @ 0x14075A7E4 (RtlpGetCodePageData.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData();
  RtlCustomCPToUnicodeN(
    CodePageData,
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    (PCH)MultiByteString,
    BytesInMultiByteString);
  return 0;
}
