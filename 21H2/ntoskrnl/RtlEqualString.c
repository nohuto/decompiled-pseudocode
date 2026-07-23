/*
 * XREFs of RtlEqualString @ 0x14022D5E0
 * Callers:
 *     HalMatchAcpiOemId @ 0x1403C0590 (HalMatchAcpiOemId.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x1406DCD40 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // rbp
  signed __int64 v7; // rsi
  CHAR v9; // r14
  CHAR v10; // bl

  Length = String1->Length;
  if ( (_WORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = &Buffer[Length];
    if ( Buffer >= &Buffer[Length] )
      return 1;
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( *Buffer != *v5 )
        {
          v10 = RtlUpperChar(*Buffer);
          if ( v10 != RtlUpperChar(v9) )
            break;
        }
        ++Buffer;
        ++v5;
        if ( Buffer >= v6 )
          return 1;
      }
    }
    else
    {
      v7 = v5 - Buffer;
      while ( *Buffer == Buffer[v7] )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
  }
  return 0;
}
