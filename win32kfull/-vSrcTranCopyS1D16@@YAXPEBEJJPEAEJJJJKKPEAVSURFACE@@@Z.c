void __fastcall vSrcTranCopyS1D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9)
{
  int v9; // ebx
  unsigned __int8 *v10; // r11
  int v11; // esi
  const unsigned __int8 *v12; // r9
  unsigned __int8 *v13; // rdi
  __int64 v14; // r14
  unsigned __int8 *v15; // r10
  char v16; // r8
  unsigned __int8 *v17; // rcx
  unsigned __int8 *v18; // rcx
  char v19; // al
  char v20; // al

  v9 = a2 & 7;
  v10 = &a4[2 * a5];
  v11 = a6 - a5;
  v12 = &a1[(__int64)a2 >> 3];
  v13 = &v10[a8 * a7];
  v14 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v9 )
    v11 = 8 - v9;
  do
  {
    v15 = &v10[2 * (a6 - a5)];
    if ( (a2 & 7) != 0 )
    {
      v16 = *v12++ << v9;
      v17 = &v10[2 * v11];
      do
      {
        if ( v16 < 0 )
          *(_WORD *)v10 = a9;
        v10 += 2;
        v16 *= 2;
      }
      while ( v10 != v17 );
    }
    v18 = &v10[(v15 - v10) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v10 != v18 )
    {
      v19 = *v12;
      if ( *(char *)v12 < 0 )
        *(_WORD *)v10 = a9;
      if ( (v19 & 0x40) != 0 )
        *((_WORD *)v10 + 1) = a9;
      if ( (v19 & 0x20) != 0 )
        *((_WORD *)v10 + 2) = a9;
      if ( (v19 & 0x10) != 0 )
        *((_WORD *)v10 + 3) = a9;
      if ( (v19 & 8) != 0 )
        *((_WORD *)v10 + 4) = a9;
      if ( (v19 & 4) != 0 )
        *((_WORD *)v10 + 5) = a9;
      if ( (v19 & 2) != 0 )
        *((_WORD *)v10 + 6) = a9;
      if ( (v19 & 1) != 0 )
        *((_WORD *)v10 + 7) = a9;
      ++v12;
      v10 += 16;
    }
    if ( v10 != v15 )
    {
      v20 = *v12++;
      do
      {
        if ( v20 < 0 )
          *(_WORD *)v10 = a9;
        v20 *= 2;
        v10 += 2;
      }
      while ( v10 != v15 );
    }
    v10 += a7 - 2 * (a6 - a5);
    v12 += v14;
  }
  while ( v10 != v13 );
}
