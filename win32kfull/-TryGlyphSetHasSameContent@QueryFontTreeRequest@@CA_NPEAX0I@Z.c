bool __fastcall QueryFontTreeRequest::TryGlyphSetHasSameContent(char *Source2, char *Source1, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r11
  char *v7; // rsi
  unsigned int i; // edx

  v3 = a3;
  if ( RtlCompareMemory(Source1, Source2, 0x10uLL) != 16 )
    return 0;
  v7 = &Source1[v3];
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)Source1 + 3) )
      return RtlCompareMemory(
               &Source1[16 * *((unsigned int *)Source1 + 3) + 16],
               &Source2[16 * *((unsigned int *)Source1 + 3) + 16],
               v7 - &Source1[16 * *((unsigned int *)Source1 + 3) + 16]) == (_QWORD)&v7[-v6];
    if ( *(_WORD *)&Source1[16 * i + 16] != *(_WORD *)&Source2[16 * i + 16]
      || *(_WORD *)&Source1[16 * i + 18] != *(_WORD *)&Source2[16 * i + 18] )
    {
      break;
    }
    if ( *(_QWORD *)&Source1[16 * i + 24] - (_QWORD)Source1 != *(_QWORD *)&Source2[16 * i + 24] - (_QWORD)Source2 )
      return 0;
  }
  return 0;
}
