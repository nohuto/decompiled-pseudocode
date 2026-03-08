/*
 * XREFs of MiLoadUserSymbols @ 0x140A2DE34
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x14036C640 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x1405A52E4 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x1407EA820 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // ebx
  STRING AnsiString; // [rsp+30h] [rbp-38h] BYREF

  AnsiString = 0LL;
  v2 = MiReferenceControlAreaFile(a1);
  v3 = v2;
  if ( *(_WORD *)(v2 + 88) )
  {
    v4 = DbgUnicodeStringToAnsiString(&AnsiString, (PCUNICODE_STRING)(v2 + 88));
    MiDereferenceControlAreaFile(a1, v3);
    if ( v4 )
    {
      DbgLoadUserImageSymbols();
      RtlFreeAnsiString(&AnsiString);
    }
  }
  else
  {
    MiDereferenceControlAreaFile(a1, v2);
  }
}
