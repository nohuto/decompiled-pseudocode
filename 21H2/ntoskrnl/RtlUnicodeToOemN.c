/*
 * XREFs of RtlUnicodeToOemN @ 0x1407592A0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1406EAEF0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407591C0 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x140759E60 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x14075A7E4 (RtlpGetCodePageData.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData();
  return RtlUnicodeToCustomCPN(
           CodePageData,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}
