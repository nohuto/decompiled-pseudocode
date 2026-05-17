/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x180062680
 * Callers:
 *     toupper @ 0x180092310 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB370 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800626DC (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x18006277C (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToMultiByteN(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  char v4; // cl
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL, a2, a3) )
    return UpcaseUnicodeToUTF8NHelper(v8, v3, v5, v6, v7);
  if ( NlsMbCodePageTag == v4 )
    return UpcaseUnicodeToSingleByteNHelper(v8, v3, v5, v6, v7, NlsUnicodeToAnsiData, NlsAnsiToUnicodeData);
  return UpcaseUnicodeToMultiByteNHelper(v8, v3, v5, v6, v7);
}
