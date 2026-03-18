/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14020AA14
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14020A9BC (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14020B834 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140A30B64 (MiLoadUserSymbols.c)
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x1407561F0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758B90 (RtlUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
