/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x14079FA50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407A0140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  char v4; // r14
  BOOLEAN v5; // bp
  bool v6; // r12
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int Length; // r8d
  char **p_Buffer; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  char *v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v20; // [rsp+20h] [rbp-68h] BYREF
  char v21; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 0;
  v20 = 0LL;
  v6 = 0;
  Flink = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v19, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Flink = CurrentServerSiloGlobals[76].Flink;
    v6 = WORD2(CurrentServerSiloGlobals[71].Flink) != 0;
  }
  if ( Name->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    LODWORD(v20) = 786432;
    *((_QWORD *)&v20 + 1) = &v21;
    OemName = (POEM_STRING)&v20;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(OemName, Name, 0) < 0 )
    return 0;
  Length = OemName->Length;
  p_Buffer = &OemName->Buffer;
  if ( (_WORD)Length == 1 )
  {
    if ( **p_Buffer == 46 )
      goto LABEL_36;
  }
  else if ( Length == 2 && **p_Buffer == 46 && (*p_Buffer)[1] == 46 )
  {
LABEL_36:
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v14 = 0;
  v15 = OemName->Length;
  if ( OemName->Length )
  {
    v16 = *p_Buffer;
    do
    {
      v17 = (unsigned __int8)v16[v14];
      if ( v6 && *((_WORD *)&Flink->Flink + v17) )
      {
        if ( !v4 && v14 >= 7 || v14 == v15 - 1 )
          return 0;
        ++v14;
      }
      else
      {
        if ( (unsigned __int8)v17 < 0x80u )
        {
          v18 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)(unsigned __int8)v16[v14] >> 5));
          if ( _bittest(&v18, v17 & 0x1F) )
            return 0;
        }
        if ( (_BYTE)v17 == 32 )
        {
          v5 = 1;
        }
        else if ( (_BYTE)v17 == 46 )
        {
          if ( v4 || !v14 || v16[v14 - 1] == 32 || v15 - v14 - 1 > 3 )
            return 0;
          v4 = 1;
        }
        if ( v14 >= 8 && !v4 )
          return 0;
      }
      ++v14;
    }
    while ( v14 < v15 );
    if ( (_BYTE)v17 == 32 || (_BYTE)v17 == 46 )
      return 0;
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = v5;
  return 1;
}
