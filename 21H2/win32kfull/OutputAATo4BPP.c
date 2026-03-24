/*
 * XREFs of OutputAATo4BPP @ 0x1C0264AB0
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
        unsigned __int64 a9)
{
  unsigned __int16 *v10; // r14
  int v13; // ecx
  unsigned __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int8 *v17; // r15
  char v18; // esi^2
  char v19; // ebx^2
  char v20; // edi^2
  char v21; // r11
  char v22; // r8
  char v23; // bl
  char v24; // di
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  bool v28; // zf
  int v29; // edx
  char v30; // si
  char v31; // r11
  unsigned int v33; // [rsp+4h] [rbp-2Ch]
  __int128 v34; // [rsp+18h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-8h]
  char v36; // [rsp+72h] [rbp+42h]
  unsigned __int64 v37; // [rsp+80h] [rbp+50h]

  v37 = a3;
  v10 = a6;
  v13 = 0;
  v14 = a9 >> 8;
  v35 = *(_QWORD *)(a5 - 8);
  v34 = *(_OWORD *)(a5 - 24);
  if ( BYTE1(a9) )
    v13 = 2003830647;
  v36 = BYTE2(v13);
  v15 = HIDWORD(*(_QWORD *)(a5 - 8));
  BYTE2(v14) = BYTE2(*(_QWORD *)(a5 - 8));
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v15 = HIDWORD(*(_QWORD *)(a5 - 8));
      *a4 = *a4 & 0xF0 | (BYTE1(a9) != 0 ? 7 : 0) ^ (BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
      BYTE2(v14) = BYTE2(v35);
    }
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v16) = *a1;
  v17 = a2 + 4;
  v18 = BYTE10(v34);
  v19 = BYTE6(v34);
  v20 = BYTE2(v34);
  if ( (v16 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v17 >= a3 )
        goto LABEL_14;
      LODWORD(v16) = v17[3] & 2;
      if ( (unsigned int)v16 | v17[7] & 1 )
        break;
LABEL_26:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v16) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v17 += 8;
    }
    v27 = (v16 | v17[7] & 1) - 1;
    if ( ((unsigned int)v16 | v17[7] & 1) == 1 )
    {
      v31 = BYTE1(v13) ^ (BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)*v10) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[2]) >> 16));
      LOBYTE(v16) = *a4 & 0xF0;
    }
    else
    {
      v16 = v17[2];
      v28 = v27 == 1;
      v29 = v10[2];
      if ( !v28 )
      {
        v30 = BYTE10(v34) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v16 + 2048) - v29) >> 16) | BYTE14(v34) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)v10[3]) >> 16) | BYTE2(v35) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[4]) >> 16) | BYTE6(v35) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[5]) >> 16);
        v20 = BYTE2(v34);
        v19 = BYTE6(v34);
        LODWORD(v16) = WORD1(v34);
        *a4 = v13 ^ (BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | v30);
        v18 = BYTE10(v34);
LABEL_25:
        a3 = v37;
        goto LABEL_26;
      }
      v31 = BYTE2(v13) ^ (v20 & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | v18 & ((unsigned int)(*(_DWORD *)(a5 + 4 * v16 + 2048) - v29) >> 16));
      LOBYTE(v16) = *a4 & 0xF;
    }
    *a4 = v16 | v31;
    goto LABEL_25;
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v33 = HIWORD(v15);
    do
    {
      v21 = v33 & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[5]) >> 16);
      v22 = BYTE2(v14) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[4]) >> 16);
      v23 = BYTE10(v34) & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v24 = BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16);
      v16 = *v17;
      v25 = *(_DWORD *)(a5 + 4LL * v17[4]) - v10[3];
      v26 = *v10;
      v10 += 6;
      *a4++ = ((_BYTE)v14 != 0 ? 0x77 : 0) ^ (v24 | v23 | BYTE14(v34) & BYTE2(v25) | v21 | v22 | BYTE2(v34) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v16) - v26) >> 16));
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v16) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v17 += 8;
    }
    while ( (unsigned __int64)v17 < v37 );
  }
LABEL_14:
  if ( BYTE3(a9) && v17[3] )
  {
    LOBYTE(v16) = *a4 & 0xF;
    *a4 = v16 | v36 ^ (BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | v18 & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v10[2]) >> 16));
  }
  return v16;
}
