/*
 * XREFs of RtlOemToUnicodeN @ 0x1407A3940
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x14078C3F0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x140868F30 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x14093D1A8 (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x1407A3BA4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1407A3C10 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData(1LL);
  return RtlCustomCPToUnicodeN(
           CodePageData,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
