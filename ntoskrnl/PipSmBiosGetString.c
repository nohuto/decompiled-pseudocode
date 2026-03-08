/*
 * XREFs of PipSmBiosGetString @ 0x140B56BA4
 * Callers:
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     strchr @ 0x1403D5520 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PipSmBiosGetString(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        UNICODE_STRING *DestinationString)
{
  char *v5; // rcx
  unsigned __int64 v6; // r9
  int v7; // r8d
  char v8; // al
  unsigned __int16 v9; // bx
  char *v10; // rdi
  bool v12; // zf
  STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  SourceString = 0LL;
  if ( !a2 )
    return -1073741275;
  v5 = (char *)(*(unsigned __int8 *)(a1 + 1) + a1);
  v6 = a3 + (unsigned int)(a4 - 1);
  v7 = 1;
  if ( a2 > 1u )
  {
    v8 = *v5;
    while ( !v8 )
    {
LABEL_7:
      if ( !++v5 )
        return -1073741275;
      v8 = *v5;
      if ( !*v5 )
        return -1073741275;
      if ( ++v7 >= (unsigned int)a2 )
        goto LABEL_12;
    }
    while ( (unsigned __int64)++v5 < v6 )
    {
      if ( !*v5 )
        goto LABEL_7;
    }
    return -1073741275;
  }
  if ( !v5 )
    return -1073741275;
LABEL_12:
  v9 = 0;
  SourceString.Buffer = v5;
  SourceString.Length = 0;
  v10 = v5;
  while ( *v5 )
  {
    ++v9;
    ++v5;
    SourceString.Length = v9;
    if ( (unsigned __int64)v5 >= v6 || v9 > 0x40u )
      return -1073741275;
  }
  if ( v5 == (char *)-1LL )
    return -1073741275;
  if ( *v10 )
  {
    do
    {
      if ( !strchr(" \t\r", *v10) )
        break;
      --v9;
      ++v10;
      SourceString.Length = v9;
    }
    while ( *v10 );
    SourceString.Buffer = v10;
  }
  if ( v9 )
  {
    do
    {
      if ( !strchr(" \t\r", v10[v9 - 1]) )
        break;
      v12 = v9-- == 1;
      SourceString.Length = v9;
    }
    while ( !v12 );
  }
  SourceString.MaximumLength = v9 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
