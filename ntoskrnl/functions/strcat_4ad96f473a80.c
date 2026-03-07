char *__cdecl strcat(char *Dest, const char *Source)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // eax

  if ( ((unsigned __int8)Dest & 7) != 0 )
  {
    while ( *Dest )
    {
      if ( ((unsigned __int8)++Dest & 7) == 0 )
        goto LABEL_4;
    }
  }
  else
  {
    while ( 1 )
    {
      do
      {
LABEL_4:
        v3 = *(_QWORD *)Dest;
        v4 = (*(_QWORD *)Dest + 0x7EFEFEFEFEFEFEFFLL) ^ ~*(_QWORD *)Dest;
        Dest += 8;
      }
      while ( (v4 & 0x8101010101010100uLL) == 0 );
      Dest -= 8;
      if ( !(_BYTE)v3 )
        break;
      ++Dest;
      if ( !BYTE1(v3) )
        break;
      ++Dest;
      v5 = v3 >> 16;
      if ( !(_BYTE)v5 )
        break;
      ++Dest;
      if ( !BYTE1(v5) )
        break;
      ++Dest;
      v6 = v5 >> 16;
      if ( !(_BYTE)v6 )
        break;
      ++Dest;
      if ( !BYTE1(v6) )
        break;
      ++Dest;
      v7 = WORD1(v6);
      if ( !(_BYTE)v7 )
        break;
      ++Dest;
      if ( !BYTE1(v7) )
        break;
      ++Dest;
    }
  }
  return (char *)__entry_from_strcat_in_strcpy(Dest, Source);
}
