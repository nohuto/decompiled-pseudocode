/*
 * XREFs of AntiLog @ 0x1C001F55C
 * Callers:
 *     RaisePower @ 0x1C001F468 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C001F774 (FD6DivL.c)
 *     MantissaToFraction @ 0x1C001F7A8 (MantissaToFraction.c)
 */

__int64 __fastcall AntiLog(int a1)
{
  int v1; // r8d
  int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int i; // edi
  unsigned int v7; // r8d

  v1 = a1;
  if ( a1 >= 0 )
  {
    if ( a1 >= 1000000 )
    {
      if ( a1 >= 3331930 )
        return 0x7FFFFFFFLL;
      v2 = (a1 + 999999) / 1000000;
      v1 = 1000000 * v2 - a1;
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v2 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v2 + a1;
  }
  if ( v1 )
  {
    v3 = v1 / 10000;
    if ( v1 / 10000 >= 0 && v3 <= 0x63 )
    {
      _mm_lfence();
      v4 = (unsigned __int16)MantSearchTable[v3];
      v5 = (unsigned __int16)word_1C02EC8C2[v3] + 1;
      for ( i = (v4 + v5) >> 1; i != v4; i = (int)(v4 + v5) >> 1 )
      {
        if ( v1 < MantissaTable[i] )
        {
          v5 = i;
        }
        else
        {
          if ( v1 <= MantissaTable[i] )
          {
            v1 = 0;
            break;
          }
          v4 = i;
        }
      }
      if ( v1 )
        v1 = MantissaToFraction((unsigned int)(v1 - MantissaTable[v4]), (unsigned int)MantissaCorrectData[v4]);
      v7 = 1000000 * (i + 100) + v1;
      v2 -= 2;
      goto LABEL_17;
    }
    return 0x7FFFFFFFLL;
  }
  v7 = 1000000;
LABEL_17:
  if ( v2 < 0 )
    return FD6DivL(v7, (unsigned int)Power10ExpNum[-v2]);
  if ( v2 > 0 )
    return v7 * Power10ExpNum[v2];
  return v7;
}
