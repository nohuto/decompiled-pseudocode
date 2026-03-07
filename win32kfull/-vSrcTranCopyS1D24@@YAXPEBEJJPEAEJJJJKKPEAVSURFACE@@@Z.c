void __fastcall vSrcTranCopyS1D24(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  int v10; // r14d
  const unsigned __int8 *v11; // r10
  unsigned __int8 *v12; // rbx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // r12
  unsigned __int8 *v16; // r15
  __int64 v17; // r11
  int v18; // r13d
  __int64 v19; // r9
  unsigned __int8 *v20; // r8
  char v21; // al
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rcx
  char v24; // al
  char v25; // al

  v10 = a2 & 7;
  v11 = &a1[(__int64)a2 >> 3];
  v12 = &a4[3 * a5];
  v13 = a6 - a5;
  v14 = 3 * (a6 - a5);
  v15 = v14;
  v16 = &v12[a8 * a7];
  v17 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v10 )
    v13 = 8 - v10;
  v18 = 3 * v13;
  v19 = a7 - v14;
  do
  {
    v20 = &v12[v15];
    if ( (a2 & 7) != 0 )
    {
      v21 = *v11++ << v10;
      v22 = &v12[v18];
      do
      {
        if ( v21 < 0 )
        {
          *(_WORD *)v12 = a9;
          v12[2] = BYTE2(a9);
        }
        v12 += 3;
        v21 *= 2;
      }
      while ( v12 != v22 );
    }
    v23 = &v12[24 * ((v20 - v12) / 0x18uLL)];
    while ( v12 != v23 )
    {
      v24 = *v11;
      if ( *(char *)v11 < 0 )
      {
        *(_WORD *)v12 = a9;
        v12[2] = BYTE2(a9);
      }
      if ( (v24 & 0x40) != 0 )
      {
        *(_WORD *)(v12 + 3) = a9;
        v12[5] = BYTE2(a9);
      }
      if ( (v24 & 0x20) != 0 )
      {
        *((_WORD *)v12 + 3) = a9;
        v12[8] = BYTE2(a9);
      }
      if ( (v24 & 0x10) != 0 )
      {
        *(_WORD *)(v12 + 9) = a9;
        v12[11] = BYTE2(a9);
      }
      if ( (v24 & 8) != 0 )
      {
        *((_WORD *)v12 + 6) = a9;
        v12[14] = BYTE2(a9);
      }
      if ( (v24 & 4) != 0 )
      {
        *(_WORD *)(v12 + 15) = a9;
        v12[17] = BYTE2(a9);
      }
      if ( (v24 & 2) != 0 )
      {
        *((_WORD *)v12 + 9) = a9;
        v12[20] = BYTE2(a9);
      }
      if ( (v24 & 1) != 0 )
      {
        *(_WORD *)(v12 + 21) = a9;
        v12[23] = BYTE2(a9);
      }
      ++v11;
      v12 += 24;
    }
    if ( v12 != v20 )
    {
      v25 = *v11++;
      do
      {
        if ( v25 < 0 )
        {
          *(_WORD *)v12 = a9;
          v12[2] = BYTE2(a9);
        }
        v25 *= 2;
        v12 += 3;
      }
      while ( v12 != v20 );
    }
    v12 += v19;
    v11 += v17;
  }
  while ( v12 != v16 );
}
