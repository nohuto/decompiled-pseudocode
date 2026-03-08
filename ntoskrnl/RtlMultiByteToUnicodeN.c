/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x1407A3B40
 * Callers:
 *     mbstowcs @ 0x1403D4670 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x1407A3BA4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1407A3C10 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData(0LL);
  RtlCustomCPToUnicodeN(
    CodePageData,
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    (PCH)MultiByteString,
    BytesInMultiByteString);
  return 0;
}
