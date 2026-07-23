/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x1405F3E30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1405F3FE0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  bool v3; // cc
  POEM_STRING v5; // rbx
  char v6; // si
  BOOLEAN v7; // bp
  unsigned int Length; // ecx
  unsigned int v10; // edx
  char *v11; // r10
  unsigned __int64 v12; // r8
  int v13; // eax
  char *Buffer; // rdx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  char v16; // [rsp+30h] [rbp-48h] BYREF

  v3 = Name->Length <= 0x18u;
  v5 = OemName;
  v6 = 0;
  v7 = 0;
  v15 = 0LL;
  if ( !v3 )
    return 0;
  if ( !OemName )
  {
    LODWORD(v15) = 786432;
    *((_QWORD *)&v15 + 1) = &v16;
    v5 = (POEM_STRING)&v15;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v5, Name, 0) < 0 )
    return 0;
  Length = v5->Length;
  if ( (_WORD)Length == 1 && *v5->Buffer == 46 || Length == 2 && (Buffer = v5->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v10 = 0;
  if ( v5->Length )
  {
    v11 = v5->Buffer;
    do
    {
      v12 = (unsigned __int8)v11[v10];
      if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v12] )
      {
        if ( !v6 && v10 >= 7 || v10 == Length - 1 )
          return 0;
        ++v10;
      }
      else
      {
        if ( (unsigned __int8)v12 < 0x80u )
        {
          v13 = RtlFatIllegalTable[v12 >> 5];
          if ( _bittest(&v13, v12 & 0x1F) )
            return 0;
        }
        if ( (_BYTE)v12 == 32 )
          v7 = 1;
        if ( (_BYTE)v12 == 46 )
        {
          if ( v6 || !v10 || v11[v10 - 1] == 32 || Length - v10 - 1 > 3 )
            return 0;
          v6 = 1;
        }
        if ( v10 >= 8 && !v6 )
          return 0;
      }
      ++v10;
    }
    while ( v10 < Length );
    if ( (_BYTE)v12 == 32 || (_BYTE)v12 == 46 )
      return 0;
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = v7;
  return 1;
}
