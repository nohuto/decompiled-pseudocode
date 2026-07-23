/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x140372784
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x1403727E0 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x140372834 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2)
{
  _STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&P, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&P, a2, -1LL);
  ExFreePoolWithTag(P.Buffer, 0);
  return 1LL;
}
