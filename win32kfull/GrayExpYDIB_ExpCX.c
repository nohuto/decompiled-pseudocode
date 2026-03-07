__int64 __fastcall GrayExpYDIB_ExpCX(unsigned __int64 *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int64 v6; // rax
  int v7; // r8d
  __int64 result; // rax

  do
  {
    v6 = *a1++;
    a2 += (unsigned __int64)(unsigned __int16)v6 >> 15;
    v7 = *a2 * HIWORD(v6);
    if ( WORD2(v6) )
    {
      v7 += WORD2(v6) * *(a2 - 1);
      if ( WORD1(v6) )
      {
        v7 += WORD1(v6) * *(a2 - 2);
        if ( (v6 & 0x3FFF) != 0 )
          v7 += (v6 & 0x3FFF) * *(a2 - 3);
      }
    }
    result = (unsigned int)(v7 + 4096) >> 13;
    *a3++ = result;
  }
  while ( a3 != a4 );
  return result;
}
