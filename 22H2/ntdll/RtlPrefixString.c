/*
 * XREFs of RtlPrefixString @ 0x1800620F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180062230 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // cl
  CHAR v9; // bl
  char *v10; // rdx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v5 = &Buffer[Length];
    if ( Buffer >= &Buffer[Length] )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v7 = Buffer[(_QWORD)v6];
        if ( *Buffer != v7 )
        {
          v9 = RtlUpperChar(v7);
          if ( RtlUpperChar(*Buffer) != v9 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v10 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v10] )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
