__int64 __fastcall ExpYDIB_ExpCX(unsigned __int64 *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  __int64 result; // rax

  do
  {
    v8 = *a1++;
    a2 += 2 * ((unsigned __int64)(unsigned __int16)v8 >> 15) + ((unsigned __int64)(unsigned __int16)v8 >> 15);
    v9 = HIWORD(v8) * a2[2];
    v10 = HIWORD(v8) * a2[1];
    v11 = HIWORD(v8) * *a2;
    if ( WORD2(v8) )
    {
      v9 += WORD2(v8) * *(a2 - 1);
      v10 += WORD2(v8) * *(a2 - 2);
      v11 += WORD2(v8) * *(a2 - 3);
      if ( WORD1(v8) )
      {
        v9 += WORD1(v8) * *(a2 - 4);
        v10 += WORD1(v8) * *(a2 - 5);
        v11 += WORD1(v8) * *(a2 - 6);
        v12 = v8 & 0x3FFF;
        if ( v12 )
        {
          v9 += v12 * *(a2 - 7);
          v10 += v12 * *(a2 - 8);
          v11 += v12 * *(a2 - 9);
        }
      }
    }
    a3[2] = (unsigned int)(v9 + 4096) >> 13;
    a3[1] = (unsigned int)(v10 + 4096) >> 13;
    result = (unsigned int)(v11 + 4096) >> 13;
    *a3 = result;
    a3 += 3;
  }
  while ( a3 != a4 );
  return result;
}
