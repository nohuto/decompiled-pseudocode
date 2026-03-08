/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14036C640
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14036C5E8 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036CBB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140A2DE34 (MiLoadUserSymbols.c)
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *Pool2; // rax

  v4 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    Pool2 = (char *)ExAllocatePool2(64LL, v4, 1682730317LL);
    DestinationString->Buffer = Pool2;
    if ( Pool2 )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}
