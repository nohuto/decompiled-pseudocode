__int64 __fastcall RtlpFillMemoryWithInverseStride(unsigned int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  int v6; // ecx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  char *v13; // r8
  _DWORD *v14; // rdi
  unsigned __int64 i; // rcx
  char *v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  char *v19; // rdi
  unsigned __int64 j; // rcx
  unsigned __int64 v21; // rcx
  char *v22; // rdi

  v4 = 2 * a2;
  v5 = a1;
  v6 = 2 * a2;
  v7 = a4 + 4096;
  v8 = 4096LL;
  v9 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  v10 = (unsigned int)(v6 - v9);
  if ( (unsigned int)v9 > v4 )
    v10 = (unsigned int)(v10 + 12);
  v11 = 4 * v10;
  if ( v11 + a4 <= v7 )
    v8 = v11;
  result = v8 >> 2;
  v13 = (char *)(v8 + a4);
  if ( a4 > v8 + a4 )
    result = 0LL;
  if ( result )
  {
    v14 = (_DWORD *)a4;
    result = (unsigned int)v5;
    if ( a4 > (unsigned __int64)v13 )
      v8 = 0LL;
    for ( i = v8 >> 2; i; --i )
      *v14++ = v5;
    a4 += v8;
  }
  v16 = (char *)(a4 + 8);
  if ( (unsigned __int64)v13 < v7 )
  {
    result = 4LL * ((unsigned int)((__int64)(v7 - (_QWORD)v13) >> 2) % 0xC);
    v17 = v7 - result;
    if ( v13 != (char *)(v7 - result) )
    {
      while ( 1 )
      {
        v13 += 48;
        if ( (unsigned __int64)v16 >= v17 )
          break;
        result = (unsigned __int64)(v13 - v16 + 3) >> 2;
        if ( v16 > v13 )
          result = 0LL;
        if ( result )
        {
          v18 = (v13 - v16 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          v19 = v16;
          result = v5;
          if ( v16 > v13 )
            v18 = 0LL;
          for ( j = v18 >> 2; j; --j )
          {
            *(_DWORD *)v19 = v5;
            v19 += 4;
          }
          v16 += v18;
        }
        v16 += 8;
      }
    }
  }
  v21 = (v7 - (unsigned __int64)v16 + 3) >> 2;
  if ( (unsigned __int64)v16 > v7 )
    v21 = 0LL;
  if ( v21 )
  {
    result = v5;
    v22 = v16;
    while ( v21 )
    {
      *(_DWORD *)v22 = v5;
      v22 += 4;
      --v21;
    }
  }
  return result;
}
