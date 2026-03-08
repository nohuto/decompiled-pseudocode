/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1407A0310
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14036C640 (DbgUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14079F7A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407A0140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     RtlUnicodeStringToOemString @ 0x14085D450 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408716E0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B5BB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FD130 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1407A35C0 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG Length; // r8d
  wchar_t *Buffer; // rdx
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  Length = UnicodeString->Length;
  Buffer = UnicodeString->Buffer;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, Buffer, Length);
  return BytesInMultiByteString + 1;
}
