/*
 * XREFs of RtlOemToUnicodeN @ 0x1407F9C40
 * Callers:
 *     FsRtlNotifyUpdateBuffer @ 0x1406AC4B0 (FsRtlNotifyUpdateBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x1407F9B70 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1409B56D0 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x14075A700 (RtlCustomCPToUnicodeN.c)
 *     RtlpGetCodePageData @ 0x14075A7E4 (RtlpGetCodePageData.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = RtlpGetCodePageData();
  return RtlCustomCPToUnicodeN(
           CodePageData,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
