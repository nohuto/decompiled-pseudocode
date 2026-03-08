/*
 * XREFs of RtlPrefixString @ 0x14075DBF0
 * Callers:
 *     IopCheckDiskName @ 0x140386144 (IopCheckDiskName.c)
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 * Callees:
 *     RtlUpperChar @ 0x14075DD40 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // rbp
  CHAR v7; // r14
  CHAR v9; // bl
  signed __int64 v10; // rsi

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v6 = &Buffer[Length];
    if ( Buffer >= &Buffer[Length] )
      return 1;
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v7 = *Buffer;
        if ( *Buffer != *v5 )
        {
          v9 = RtlUpperChar(*v5);
          if ( RtlUpperChar(v7) != v9 )
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
      v10 = v5 - Buffer;
      while ( *Buffer == Buffer[v10] )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
  }
  return 0;
}
