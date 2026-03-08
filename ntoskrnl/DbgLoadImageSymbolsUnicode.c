/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x14036C5E8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14036C640 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x14036C6D0 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2)
{
  STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
