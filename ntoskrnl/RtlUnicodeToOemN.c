/*
 * XREFs of RtlUnicodeToOemN @ 0x14079F690
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14079F7A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x14085D450 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x14079F6F0 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x1407A3BA4 (RtlpGetCodePageData.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData(0LL);
  return RtlUnicodeToCustomCPN(
           CodePageData,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}
