__int64 __fastcall AntiLog(int a1)
{
  int v1; // r8d
  unsigned int v2; // r9d
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int i; // edi
  int v9; // r9d

  v1 = a1;
  v2 = 1000000;
  if ( a1 >= 0 )
  {
    if ( a1 < 1000000 )
    {
      v4 = 0;
    }
    else
    {
      if ( a1 >= 3331930 )
        return 0x7FFFFFFFLL;
      v4 = (a1 + 999999) / 1000000;
      v1 = 1000000 * v4 - a1;
    }
  }
  else
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v4 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v4 + a1;
  }
  if ( !v1 )
    goto LABEL_21;
  v5 = v1 / 10000;
  if ( v1 / 10000 < 0 || (unsigned __int64)v5 > 0x63 )
    return 0x7FFFFFFFLL;
  _mm_lfence();
  v6 = (unsigned __int16)MantSearchTable[v5];
  v7 = (unsigned __int16)word_1C0325DF2[v5] + 1;
  for ( i = (v6 + v7) >> 1; ; i = (int)(v6 + v7) >> 1 )
  {
    if ( i == v6 )
    {
      v9 = MantissaToFraction((unsigned int)(v1 - MantissaTable[v6]), (unsigned int)MantissaCorrectData[v6]);
      goto LABEL_20;
    }
    if ( v1 < MantissaTable[i] )
    {
      v7 = i;
      continue;
    }
    if ( v1 <= MantissaTable[i] )
      break;
    v6 = i;
  }
  v9 = 0;
LABEL_20:
  v2 = 1000000 * (i + 100) + v9;
  v4 -= 2;
LABEL_21:
  if ( v4 < 0 )
    return FD6DivL(v2, Power10ExpNum[-v4]);
  if ( v4 > 0 )
    v2 *= Power10ExpNum[v4];
  return v2;
}
