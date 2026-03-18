/*
 * XREFs of RtlOemToUnicodeN @ 0x140774840
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x1407DB1E0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14086BB60 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1409401C8 (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140774304 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140774370 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  __int128 *CodePageData; // rax

  CodePageData = RtlpGetCodePageData(1u);
  return RtlCustomCPToUnicodeN(
           (PCPTABLEINFO)CodePageData,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
