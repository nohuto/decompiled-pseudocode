/*
 * XREFs of OutputAATo1BPP @ 0x1C014B390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo1BPP(
        int *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  int v11; // edx
  char v14; // al
  int v15; // eax
  int v16; // eax
  __int16 *v17; // r10
  char v18; // r8
  char v19; // dl
  char v20; // dl
  int v21; // edx
  char v22; // si
  __int16 v23; // ax
  unsigned int v24; // ecx
  int v25; // eax
  int v27; // [rsp+8h] [rbp+8h]
  int v28; // [rsp+8h] [rbp+8h]

  v11 = (unsigned __int8)a9;
  if ( (_BYTE)a9 )
  {
    v27 = 0;
    do
    {
      v14 = *(_BYTE *)(a2 + 7);
      a2 += 4LL;
      LOBYTE(v27) = v14;
      --v11;
      v15 = a6[1];
      a6 += 3;
      v27 = (2 * v27) | (((unsigned __int16)~*(_WORD *)a2 >> 4) - v15) & 0x10000;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
    }
    while ( v11 );
    LOBYTE(v27) = 0;
    *a4 = *a4 & ~((unsigned __int16)(v27 << SBYTE2(a9)) >> 8) | ((unsigned __int16)(v27 << SBYTE2(a9)) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v27 << SBYTE2(a9)) >> 16));
    ++a4;
  }
  v16 = *a1;
  v17 = (__int16 *)(a2 + 4);
  if ( (*a1 & 0x80u) == 0 )
  {
    while ( (unsigned __int64)v17 < a3 )
    {
      v20 = ((((unsigned __int16)~v17[6] >> 4) - (unsigned int)a6[10]) >> 16) & 0x10 | ((((unsigned __int16)~v17[4] >> 4)
                                                                                       - (unsigned int)a6[7]) >> 16) & 0x20 | ((((unsigned __int16)~v17[8] >> 4) - (unsigned int)a6[13]) >> 16) & 8 | ((((unsigned __int16)~v17[2] >> 4) - (unsigned int)a6[4]) >> 16) & 0x40 | ((((unsigned __int16)~v17[10] >> 4) - (unsigned int)a6[16]) >> 16) & 4 | ((((unsigned __int16)~v17[12] >> 4) - (unsigned int)a6[19]) >> 16) & 2 | ((((unsigned __int16)~v17[14] >> 4) - (unsigned int)a6[22]) >> 16) & 1;
      v16 = a6[1];
      a6 += 24;
      *a4++ = BYTE1(a9) ^ (((unsigned int)(((unsigned __int16)~*v17 >> 4) - v16) >> 16) & 0x80 | v20);
      if ( (unsigned __int64)a6 >= a7 )
      {
        LOBYTE(v16) = a8;
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      }
      v17 += 16;
    }
  }
  else
  {
    while ( (unsigned __int64)v17 < a3 )
    {
      v18 = *((_BYTE *)v17 + 23) & 4 | *((_BYTE *)v17 + 19) & 8 | *((_BYTE *)v17 + 27) & 2 | *((_BYTE *)v17 + 15) & 0x10 | *((_BYTE *)v17 + 31) & 1 | *((_BYTE *)v17 + 11) & 0x20 | *((_BYTE *)v17 + 7) & 0x40 | *((_BYTE *)v17 + 3) & 0x80;
      v19 = ((((unsigned __int16)~v17[6] >> 4) - (unsigned int)a6[10]) >> 16) & 0x10 | ((((unsigned __int16)~v17[4] >> 4)
                                                                                       - (unsigned int)a6[7]) >> 16) & 0x20 | ((((unsigned __int16)~v17[8] >> 4) - (unsigned int)a6[13]) >> 16) & 8 | ((((unsigned __int16)~v17[2] >> 4) - (unsigned int)a6[4]) >> 16) & 0x40 | ((((unsigned __int16)~v17[10] >> 4) - (unsigned int)a6[16]) >> 16) & 4 | ((((unsigned __int16)~v17[12] >> 4) - (unsigned int)a6[19]) >> 16) & 2 | ((((unsigned __int16)~v17[14] >> 4) - (unsigned int)a6[22]) >> 16) & 1;
      v16 = a6[1];
      a6 += 24;
      *a4 = *a4 & ~v18 | v18 & (BYTE1(a9) ^ (((unsigned int)(((unsigned __int16)~*v17 >> 4) - v16) >> 16) & 0x80 | v19));
      ++a4;
      if ( (unsigned __int64)a6 >= a7 )
      {
        LOBYTE(v16) = a8;
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      }
      v17 += 16;
    }
  }
  v21 = HIBYTE(a9);
  if ( HIBYTE(a9) )
  {
    v28 = 0;
    v22 = 8 - HIBYTE(a9);
    do
    {
      --v21;
      LOBYTE(v28) = *((_BYTE *)v17 + 3);
      v23 = *v17;
      v17 += 2;
      v24 = (unsigned __int16)~v23;
      v25 = a6[1];
      a6 += 3;
      v28 = (2 * v28) | ((v24 >> 4) - v25) & 0x10000;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
    }
    while ( v21 );
    LOBYTE(v28) = 0;
    LOBYTE(v16) = *a4 & ~((unsigned __int16)(v28 << v22) >> 8);
    *a4 = v16 | ((unsigned __int16)(v28 << v22) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v28 << v22) >> 16));
  }
  return v16;
}
