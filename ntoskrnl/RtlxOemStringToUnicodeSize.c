/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1407A39B0
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140672B68 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14078C3F0 (RtlOemStringToCountedUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14079B134 (PopAnsiStringToUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x140868F30 (RtlOemStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140A51144 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1407A3AB0 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  Length = OemString->Length;
  Buffer = OemString->Buffer;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, Buffer, Length);
  return BytesInUnicodeString + 2;
}
