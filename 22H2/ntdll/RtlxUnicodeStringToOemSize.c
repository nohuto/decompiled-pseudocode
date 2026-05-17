/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1800627A0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180062170 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062340 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB240 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB370 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB480 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1800628B0 (RtlUnicodeToMultiByteSize.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(PWCH *a1)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a1[1], *(unsigned __int16 *)a1);
  return BytesInMultiByteString + 1;
}
