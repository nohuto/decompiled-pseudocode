struct _XRUNLEN *__fastcall pxrlStrRead08OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // edi
  unsigned __int8 *v8; // r8
  __int64 v9; // r10
  unsigned int *v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // r11
  unsigned int *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r9
  _DWORD *v18; // r10

  v7 = 0;
  v8 = &a3[a6];
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( a6 != a7 )
  {
    if ( a5 )
    {
      v14 = 0LL;
      v15 = (unsigned int *)((char *)a1 + 32);
      v16 = (unsigned int)(a7 - a6);
      do
      {
        v17 = *v15++;
        if ( (_DWORD)v17 )
        {
          v7 += v17;
          v18 = (_DWORD *)((char *)a2 + 4 * v14 + 16);
          v14 += v17;
          do
          {
            *v18++ |= a5->pulXlate[*v8];
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
        }
        else
        {
          *((_DWORD *)a2 + v14 + 4) |= a5->pulXlate[*v8];
        }
        ++v8;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v9 = 0LL;
      v10 = (unsigned int *)((char *)a1 + 32);
      v11 = (unsigned int)(a7 - a6);
      do
      {
        v12 = *v10++;
        if ( (_DWORD)v12 )
        {
          v7 += v12;
          v13 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
          v9 += v12;
          do
          {
            *v13++ |= *v8;
            LODWORD(v12) = v12 - 1;
          }
          while ( (_DWORD)v12 );
        }
        else
        {
          *((_DWORD *)a2 + v9 + 4) |= *v8;
        }
        ++v8;
        --v11;
      }
      while ( v11 );
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v7 + 16);
}
