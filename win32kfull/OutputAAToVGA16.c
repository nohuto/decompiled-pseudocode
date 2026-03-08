/*
 * XREFs of OutputAAToVGA16 @ 0x1C025C040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAAToVGA16(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v12; // r10
  __int64 v13; // xmm1_8
  int v14; // eax
  unsigned __int8 *v15; // r10
  int v16; // r13d
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // r8d
  unsigned __int64 v21; // r8
  char v22; // al
  __int128 v24; // [rsp+0h] [rbp-38h]

  v10 = a6;
  v12 = a2;
  v13 = *(_QWORD *)(a5 - 8);
  v24 = *(_OWORD *)(a5 - 24);
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = VGA16Xlate[((HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * *v12) - (unsigned int)*a6) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v12[1] + 1024) - a6[1]) | (unsigned __int64)(HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v12[2] + 2048) - (unsigned int)a6[2]))) ^ 0x70000) >> 16] | *a4 & 0xF0;
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  v14 = *a1;
  v15 = v12 + 4;
  v16 = DWORD1(v24);
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= a3 )
        goto LABEL_12;
      v14 = v15[3] & 2;
      if ( v14 | v15[7] & 1 )
        break;
LABEL_24:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v14) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v15 += 8;
    }
    if ( (v14 | v15[7] & 1) == 1 )
    {
      v21 = (HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * v15[4]) - (unsigned int)*v10) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v15[5] + 1024) - v10[1]) | (unsigned __int64)(HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v15[6] + 2048) - (unsigned int)v10[2]))) ^ 0x70000;
      v22 = *a4 & 0xF0;
    }
    else
    {
      v19 = v10[2];
      v20 = *(_DWORD *)(a5 + 4LL * v15[2] + 2048);
      if ( (v14 | v15[7] & 1) != 2 )
      {
        LOBYTE(v14) = VGA16Xlate[(((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * v15[4]) - (unsigned int)v10[3]) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * v15[5] + 1024) - v10[4]) | DWORD1(v24) & (*(_DWORD *)(a5 + 4LL * v15[1] + 1024) - (unsigned int)v10[1]) | HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * v15[6] + 2048) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v24) & (unsigned int)(v20 - v19))) ^ 0x770000) >> 16];
LABEL_23:
        *a4 = v14;
        goto LABEL_24;
      }
      v21 = ((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | DWORD1(v24) & (*(_DWORD *)(a5
                                                                                                  + 4LL * v15[1]
                                                                                                  + 1024)
                                                                                      - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v24) & (unsigned int)(v20 - v19))) ^ 0x700000;
      v22 = *a4 & 0xF;
    }
    LOBYTE(v14) = VGA16Xlate[v21 >> 16] | v22;
    goto LABEL_23;
  }
  if ( (unsigned __int64)v15 < a3 )
  {
    do
    {
      v17 = ((unsigned __int64)HIDWORD(v24) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[4])
                                                                       - (unsigned int)v10[3]) >> 16) | ((unsigned __int64)HIDWORD(v13) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[6] + 2048) - (unsigned int)v10[5]) >> 16) | ((unsigned __int64)(unsigned int)v13 >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[5] + 1024) - (unsigned int)v10[4]) >> 16) | ((unsigned __int64)DWORD1(v24) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[1] + 1024) - (unsigned int)v10[1]) >> 16) | ((unsigned __int64)DWORD2(v24) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v18 = *v10;
      v10 += 6;
      LOBYTE(v14) = VGA16Xlate[(((unsigned __int64)(unsigned int)v24 >> 16) & ((unsigned __int64)(unsigned int)(*(_DWORD *)(a5 + 4LL * *v15) - v18) >> 16) | v17) ^ 0x77];
      *a4++ = v14;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v14) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v15 += 8;
    }
    while ( (unsigned __int64)v15 < a3 );
    v16 = DWORD1(v24);
  }
LABEL_12:
  if ( HIBYTE(a9) && v15[3] )
  {
    LOBYTE(v14) = VGA16Xlate[(((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | v16 & (*(_DWORD *)(a5 + 4LL * v15[1] + 1024)
                                                                                                - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v24) & (*(_DWORD *)(a5 + 4LL * v15[2] + 2048) - (unsigned int)v10[2]))) ^ 0x700000) >> 16] | *a4 & 0xF;
    *a4 = v14;
  }
  return v14;
}
