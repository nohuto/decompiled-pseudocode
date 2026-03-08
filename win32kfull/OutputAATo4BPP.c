/*
 * XREFs of OutputAATo4BPP @ 0x1C025B380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 *v9; // rbp
  int v12; // edx
  char v14; // esi^2
  char v15; // r9d^2
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned __int8 *v18; // r14
  char v19; // r13d^2
  char v20; // ebx^2
  char v21; // edi^2
  char v22; // si
  char v23; // bl
  char v24; // di
  int v25; // r11d
  int v26; // ecx
  int v27; // ecx
  bool v28; // zf
  int v29; // ecx
  char v30; // si
  char v31; // r11
  unsigned int v33; // [rsp+8h] [rbp-60h]
  __int128 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+20h] [rbp-48h]
  unsigned __int64 v36; // [rsp+80h] [rbp+18h]

  v36 = a3;
  v9 = a6;
  v12 = 0;
  v34 = *(_OWORD *)(a5 - 24);
  v35 = *(_QWORD *)(a5 - 8);
  v14 = BYTE6(v35);
  v15 = BYTE14(v34);
  if ( BYTE1(a9) )
    v12 = 2003830647;
  v16 = v35;
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v16 = v35;
      *a4 = *a4 & 0xF0 | (BYTE1(a9) != 0 ? 7 : 0) ^ (BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
      v15 = BYTE14(v34);
    }
    ++a4;
    v9 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v9 = (unsigned __int16 *)((char *)v9 + a8);
  }
  LODWORD(v17) = *a1;
  v18 = a2 + 4;
  v19 = BYTE10(v34);
  v20 = BYTE6(v34);
  v21 = BYTE2(v34);
  if ( (v17 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v18 >= a3 )
        goto LABEL_15;
      LODWORD(v17) = v18[3] & 2;
      if ( (unsigned int)v17 | v18[7] & 1 )
        break;
LABEL_27:
      ++a4;
      v9 += 6;
      if ( (unsigned __int64)v9 >= a7 )
      {
        LOBYTE(v17) = a8;
        v9 = (unsigned __int16 *)((char *)v9 + a8);
      }
      v18 += 8;
    }
    v27 = (v17 | v18[7] & 1) - 1;
    if ( ((unsigned int)v17 | v18[7] & 1) == 1 )
    {
      v31 = BYTE1(v12) ^ (BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)*v9) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v9[1]) >> 16) | v14 & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v9[2]) >> 16));
      LOBYTE(v17) = *a4 & 0xF0;
    }
    else
    {
      v17 = v18[2];
      v28 = v27 == 1;
      v29 = v9[2];
      if ( !v28 )
      {
        v30 = BYTE10(v34) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17 + 2048) - v29) >> 16) | BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)v9[3]) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v9[4]) >> 16) | BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v9[5]) >> 16);
        v21 = BYTE2(v34);
        v20 = BYTE6(v34);
        LODWORD(v17) = WORD1(v34);
        *a4 = v12 ^ (BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v9) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v9[1]) >> 16) | v30);
        v14 = BYTE6(v35);
LABEL_26:
        a3 = v36;
        goto LABEL_27;
      }
      v31 = BYTE2(v12) ^ (v21 & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v9) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v9[1]) >> 16) | BYTE10(v34) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17 + 2048) - v29) >> 16));
      LOBYTE(v17) = *a4 & 0xF;
    }
    *a4 = v17 | v31;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v18 < a3 )
  {
    v33 = HIWORD(v16);
    do
    {
      v22 = BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * v18[6] + 2048) - (unsigned int)v9[5]) >> 16);
      v23 = v33 & ((*(_DWORD *)(a5 + 4LL * v18[5] + 1024) - (unsigned int)v9[4]) >> 16);
      v24 = BYTE10(v34) & ((*(_DWORD *)(a5 + 4LL * v18[2] + 2048) - (unsigned int)v9[2]) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v9[1]) >> 16);
      v17 = *v18;
      v25 = *(_DWORD *)(a5 + 4LL * v18[4]) - v9[3];
      v26 = *v9;
      v9 += 6;
      *a4++ = v12 ^ (v15 & BYTE2(v25) | v22 | v23 | BYTE2(v34) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v17) - v26) >> 16) | v24);
      if ( (unsigned __int64)v9 >= a7 )
      {
        LOBYTE(v17) = a8;
        v9 = (unsigned __int16 *)((char *)v9 + a8);
      }
      v18 += 8;
    }
    while ( (unsigned __int64)v18 < a3 );
    v19 = BYTE10(v34);
  }
LABEL_15:
  if ( BYTE3(a9) && v18[3] )
  {
    LOBYTE(v17) = *a4 & 0xF;
    *a4 = v17 | BYTE2(v12) ^ (BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v9) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v18[1] + 1024) - (unsigned int)v9[1]) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v18[2] + 2048) - (unsigned int)v9[2]) >> 16));
  }
  return v17;
}
