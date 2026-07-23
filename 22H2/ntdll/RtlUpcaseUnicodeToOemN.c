/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800624D0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180061FF0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062340 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB480 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800626DC (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x18006277C (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  const WCHAR *v7; // r9
  ULONG v8; // r10d
  CHAR *v9; // r11

  LOBYTE(OemString) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(OemString, MaxBytesInOemString, BytesInOemString) )
    return UpcaseUnicodeToUTF8NHelper(v9, v5, v8);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(v9, v5, v6, v7, v8);
  return UpcaseUnicodeToSingleByteNHelper(
           (_DWORD)v9,
           v5,
           (_DWORD)v6,
           (_DWORD)v7,
           v8,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
