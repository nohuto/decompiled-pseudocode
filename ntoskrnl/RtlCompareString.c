/*
 * XREFs of RtlCompareString @ 0x14075DC90
 * Callers:
 *     KsepGetModuleInfoByName @ 0x1409745B4 (KsepGetModuleInfoByName.c)
 * Callees:
 *     RtlUpperChar @ 0x14075DD40 (RtlUpperChar.c)
 */

LONG __stdcall RtlCompareString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // esi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  char *Buffer; // rbx
  char *v7; // rdi
  char *v8; // rbp
  CHAR v9; // r14
  int v11; // r15d
  int v12; // eax
  int v13; // ecx
  signed __int64 v14; // rdi

  Length = String1->Length;
  v4 = String2->Length;
  v5 = String1->Length;
  Buffer = String1->Buffer;
  v7 = String2->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v8 = &Buffer[v5];
  if ( Buffer >= v8 )
    return Length - v4;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *Buffer != *v7 )
      {
        v11 = (unsigned __int8)RtlUpperChar(*Buffer);
        LOBYTE(v12) = RtlUpperChar(v9);
        if ( (_BYTE)v11 != (_BYTE)v12 )
          break;
      }
      ++Buffer;
      ++v7;
      if ( Buffer >= v8 )
        return Length - v4;
    }
    v12 = (unsigned __int8)v12;
    v13 = v11;
  }
  else
  {
    v14 = v7 - Buffer;
    while ( 1 )
    {
      v13 = (unsigned __int8)*Buffer;
      v12 = (unsigned __int8)Buffer[v14];
      if ( (_BYTE)v13 != (_BYTE)v12 )
        break;
      if ( ++Buffer >= v8 )
        return Length - v4;
    }
  }
  return v13 - v12;
}
