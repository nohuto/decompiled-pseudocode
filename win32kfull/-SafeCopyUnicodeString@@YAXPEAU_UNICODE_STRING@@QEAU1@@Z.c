/*
 * XREFs of ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C01BF948
 * Callers:
 *     xxxResolveDesktopForWOW @ 0x1C01BFDF8 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall SafeCopyUnicodeString(PUNICODE_STRING DestinationString, struct _UNICODE_STRING *const a2)
{
  USHORT Length; // ax
  unsigned __int64 v4; // rbx

  Length = a2->Length;
  if ( a2->Length > 0x20Au )
    Length = 522;
  v4 = Length;
  memmove(&DestinationString[1], a2->Buffer, Length);
  if ( v4 + 2 <= 0x20A )
    *(&DestinationString[1].Length + (v4 >> 1)) = 0;
  RtlInitUnicodeString(DestinationString, &DestinationString[1].Length);
  DestinationString->MaximumLength = 522;
}
