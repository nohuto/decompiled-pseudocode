char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // rbx
  char *p_Str; // rdi
  char *v7; // rbx
  unsigned __int16 i; // cx
  char v9; // al
  const char *v10; // rax
  char *v11; // rbx
  __int16 v12; // si
  unsigned __int16 j; // dx
  char v14; // r8
  __int64 v15; // rcx
  char result; // al
  char Str; // [rsp+9Fh] [rbp-29h] BYREF

  if ( a1 )
  {
    BiosBegin = a1;
    Start = a1 + 1;
    End = a2 + a1 - 2;
  }
  while ( 1 )
  {
    v4 = (_BYTE *)Start;
    v5 = 0LL;
    if ( Start > (unsigned __int64)End )
      return 0;
    while ( *v4 != 46 || (unsigned __int8)(v4[1] - 48) > 9u || (unsigned __int8)(*(v4 - 1) - 48) > 9u )
    {
      Start = (__int64)++v4;
      if ( (unsigned __int64)v4 > End )
        goto LABEL_10;
    }
    v5 = v4;
LABEL_10:
    if ( (unsigned __int64)v4 > End )
      return 0;
    Str = 0;
    Start = (__int64)(v4 + 2);
    p_Str = &Str;
    v7 = v5 - 1;
    for ( i = 0; i < 0x78u; ++i )
    {
      if ( (unsigned __int64)v7 < BiosBegin )
        break;
      v9 = *v7;
      if ( *v7 < 32 )
        break;
      if ( v9 == 36 )
        break;
      --p_Str;
      --v7;
      *p_Str = v9;
    }
    v10 = SearchStrings;
    v11 = v7 + 1;
    v12 = 0;
    while ( v10 )
    {
      if ( strstr(p_Str, v10) )
      {
        for ( ; v11; ++v11 )
        {
          if ( *v11 != 32 )
            break;
        }
        for ( j = 0; j < 0x7Fu; ++j )
        {
          if ( !v11 )
            break;
          if ( (unsigned __int64)v11 > End + 1 )
            break;
          v14 = *v11;
          if ( *v11 < 32 )
            break;
          if ( v14 == 36 )
            break;
          v15 = j;
          ++v11;
          *(_BYTE *)(v15 + a3) = v14;
        }
        result = 1;
        *(_BYTE *)(j + a3) = 0;
        return result;
      }
      v10 = (&SearchStrings)[(unsigned __int16)++v12];
    }
  }
}
